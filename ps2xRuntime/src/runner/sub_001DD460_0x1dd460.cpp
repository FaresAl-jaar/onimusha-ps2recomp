#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DD460
// Address: 0x1dd460 - 0x1dd4b4
void sub_001DD460_0x1dd460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD460_0x1dd460");
#endif

    switch (ctx->pc) {
        case 0x1dd460u: goto label_1dd460;
        case 0x1dd464u: goto label_1dd464;
        case 0x1dd468u: goto label_1dd468;
        case 0x1dd46cu: goto label_1dd46c;
        case 0x1dd470u: goto label_1dd470;
        case 0x1dd474u: goto label_1dd474;
        case 0x1dd478u: goto label_1dd478;
        case 0x1dd47cu: goto label_1dd47c;
        case 0x1dd480u: goto label_1dd480;
        case 0x1dd484u: goto label_1dd484;
        case 0x1dd488u: goto label_1dd488;
        case 0x1dd48cu: goto label_1dd48c;
        case 0x1dd490u: goto label_1dd490;
        case 0x1dd494u: goto label_1dd494;
        case 0x1dd498u: goto label_1dd498;
        case 0x1dd49cu: goto label_1dd49c;
        case 0x1dd4a0u: goto label_1dd4a0;
        case 0x1dd4a4u: goto label_1dd4a4;
        case 0x1dd4a8u: goto label_1dd4a8;
        case 0x1dd4acu: goto label_1dd4ac;
        case 0x1dd4b0u: goto label_1dd4b0;
        default: break;
    }

    ctx->pc = 0x1dd460u;

label_1dd460:
    // 0x1dd460: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dd460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1dd464:
    // 0x1dd464: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dd464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1dd468:
    // 0x1dd468: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dd468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1dd46c:
    // 0x1dd46c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dd46cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dd470:
    // 0x1dd470: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1dd474:
    if (ctx->pc == 0x1DD474u) {
        ctx->pc = 0x1DD474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD470u;
        // 0x1dd474: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD478u;
        goto label_1dd478;
    }
    ctx->pc = 0x1DD470u;
    {
        const bool branch_taken_0x1dd470 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD470u;
        // 0x1dd474: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd470) {
            ctx->pc = 0x1DD4A0u;
            goto label_1dd4a0;
        }
    }
    ctx->pc = 0x1DD478u;
label_1dd478:
    // 0x1dd478: 0x24426270  addiu       $v0, $v0, 0x6270
    ctx->pc = 0x1dd478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25200));
label_1dd47c:
    // 0x1dd47c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1dd47cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1dd480:
    // 0x1dd480: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1dd480u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1dd484:
    // 0x1dd484: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1dd484u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1dd488:
    // 0x1dd488: 0x320f809  jalr        $t9
label_1dd48c:
    if (ctx->pc == 0x1DD48Cu) {
        ctx->pc = 0x1DD490u;
        goto label_1dd490;
    }
    ctx->pc = 0x1DD488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DD490u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD488u, 0x1DD490u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD490u;
label_1dd490:
    // 0x1dd490: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1dd494:
    if (ctx->pc == 0x1DD494u) {
        ctx->pc = 0x1DD494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD490u;
        // 0x1dd494: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD498u;
        goto label_1dd498;
    }
    ctx->pc = 0x1DD490u;
    {
        const bool branch_taken_0x1dd490 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD490u;
        // 0x1dd494: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd490) {
            ctx->pc = 0x1DD4A0u;
            goto label_1dd4a0;
        }
    }
    ctx->pc = 0x1DD498u;
label_1dd498:
    // 0x1dd498: 0x244260e0  addiu       $v0, $v0, 0x60E0
    ctx->pc = 0x1dd498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24800));
label_1dd49c:
    // 0x1dd49c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1dd49cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1dd4a0:
    // 0x1dd4a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1dd4a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dd4a4:
    // 0x1dd4a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dd4a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1dd4a8:
    // 0x1dd4a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dd4a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1dd4ac:
    // 0x1dd4ac: 0x3e00008  jr          $ra
label_1dd4b0:
    if (ctx->pc == 0x1DD4B0u) {
        ctx->pc = 0x1DD4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD4ACu;
        // 0x1dd4b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD4B4u;
        goto label_fallthrough_0x1dd4ac;
    }
    ctx->pc = 0x1DD4ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD4ACu;
        // 0x1dd4b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD4ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1dd4ac:
    ctx->pc = 0x1DD4B4u;
}
