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

// Function: sub_00224960
// Address: 0x224960 - 0x2249d0
void sub_00224960_0x224960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224960_0x224960");
#endif

    switch (ctx->pc) {
        case 0x224988u: goto label_224988;
        case 0x22499cu: goto label_22499c;
        case 0x2249b0u: goto label_2249b0;
        default: break;
    }

    ctx->pc = 0x224960u;

    // 0x224960: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x224960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x224964: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x224964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x224968: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x224968u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22496c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22496cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x224970: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x224970u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x224974: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x224974u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x224978: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x224978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22497c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x22497cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x224980: 0xc089168  jal         func_2245A0
    ctx->pc = 0x224980u;
    SET_GPR_U32(ctx, 31, 0x224988u);
    ctx->pc = 0x224984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224980u;
    // 0x224984: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2245A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2245A0u, 0x224980u, 0x224988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224988u;
label_224988:
    // 0x224988: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x224988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22498c: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x22498Cu;
    {
        const bool branch_taken_0x22498c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x224990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22498Cu;
        // 0x224990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22498c) {
            ctx->pc = 0x2249B8u;
            goto label_2249b8;
        }
    }
    ctx->pc = 0x224994u;
    // 0x224994: 0xc0893a6  jal         func_224E98
    ctx->pc = 0x224994u;
    SET_GPR_U32(ctx, 31, 0x22499Cu);
    ctx->pc = 0x224E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224E98u, 0x224994u, 0x22499Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22499Cu;
label_22499c:
    // 0x22499c: 0x240300e0  addiu       $v1, $zero, 0xE0
    ctx->pc = 0x22499cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x2249a0: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2249A0u;
    {
        const bool branch_taken_0x2249a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2249A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2249A0u;
        // 0x2249a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2249a0) {
            ctx->pc = 0x2249B8u;
            goto label_2249b8;
        }
    }
    ctx->pc = 0x2249A8u;
    // 0x2249a8: 0xc08936a  jal         func_224DA8
    ctx->pc = 0x2249A8u;
    SET_GPR_U32(ctx, 31, 0x2249B0u);
    ctx->pc = 0x2249ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2249A8u;
    // 0x2249ac: 0x9224001f  lbu         $a0, 0x1F($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 31)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224DA8u, 0x2249A8u, 0x2249B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2249B0u;
label_2249b0:
    // 0x2249b0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2249b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2249b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2249b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2249b8:
    // 0x2249b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2249b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2249bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2249bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2249c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2249c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2249c4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2249c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2249c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2249C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2249CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2249C8u;
        // 0x2249cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2249C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2249D0u;
}
