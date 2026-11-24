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

// Function: sub_002DC460
// Address: 0x2dc460 - 0x2dc4e0
void sub_002DC460_0x2dc460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC460_0x2dc460");
#endif

    switch (ctx->pc) {
        case 0x2dc49cu: goto label_2dc49c;
        case 0x2dc4acu: goto label_2dc4ac;
        case 0x2dc4c4u: goto label_2dc4c4;
        default: break;
    }

    ctx->pc = 0x2dc460u;

    // 0x2dc460: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dc460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dc464: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2dc464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2dc468: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dc468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dc46c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dc46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dc470: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2dc470u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc474: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2DC474u;
    {
        const bool branch_taken_0x2dc474 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC474u;
        // 0x2dc478: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc474) {
            ctx->pc = 0x2DC4C8u;
            goto label_2dc4c8;
        }
    }
    ctx->pc = 0x2DC47Cu;
    // 0x2dc47c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2dc47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2dc480: 0x24427980  addiu       $v0, $v0, 0x7980
    ctx->pc = 0x2dc480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31104));
    // 0x2dc484: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x2dc484u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x2dc488: 0x8e24007c  lw          $a0, 0x7C($s1)
    ctx->pc = 0x2dc488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x2dc48c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DC48Cu;
    {
        const bool branch_taken_0x2dc48c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc48c) {
            ctx->pc = 0x2DC4A0u;
            goto label_2dc4a0;
        }
    }
    ctx->pc = 0x2DC494u;
    // 0x2dc494: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x2DC494u;
    SET_GPR_U32(ctx, 31, 0x2DC49Cu);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x2DC494u, 0x2DC49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC49Cu;
label_2dc49c:
    // 0x2dc49c: 0xae20007c  sw          $zero, 0x7C($s1)
    ctx->pc = 0x2dc49cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 0));
label_2dc4a0:
    // 0x2dc4a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dc4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc4a4: 0xc096b20  jal         func_25AC80
    ctx->pc = 0x2DC4A4u;
    SET_GPR_U32(ctx, 31, 0x2DC4ACu);
    ctx->pc = 0x2DC4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC4A4u;
    // 0x2dc4a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC80u, 0x2DC4A4u, 0x2DC4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC4ACu;
label_2dc4ac:
    // 0x2dc4ac: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2dc4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2dc4b0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2dc4b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2dc4b4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DC4B4u;
    {
        const bool branch_taken_0x2dc4b4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2DC4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC4B4u;
        // 0x2dc4b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc4b4) {
            ctx->pc = 0x2DC4C8u;
            goto label_2dc4c8;
        }
    }
    ctx->pc = 0x2DC4BCu;
    // 0x2dc4bc: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x2DC4BCu;
    SET_GPR_U32(ctx, 31, 0x2DC4C4u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x2DC4BCu, 0x2DC4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC4C4u;
label_2dc4c4:
    // 0x2dc4c4: 0x0  nop
    ctx->pc = 0x2dc4c4u;
    // NOP
label_2dc4c8:
    // 0x2dc4c8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2dc4c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc4cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2dc4ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dc4d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dc4d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc4d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dc4d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc4d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC4D8u;
        // 0x2dc4dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC4D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC4E0u;
}
