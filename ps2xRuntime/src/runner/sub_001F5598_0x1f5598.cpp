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

// Function: sub_001F5598
// Address: 0x1f5598 - 0x1f5628
void sub_001F5598_0x1f5598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5598_0x1f5598");
#endif

    switch (ctx->pc) {
        case 0x1f55c4u: goto label_1f55c4;
        default: break;
    }

    ctx->pc = 0x1f5598u;

    // 0x1f5598: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f5598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f559c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f559cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f55a0: 0x24900160  addiu       $s0, $a0, 0x160
    ctx->pc = 0x1f55a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 352));
    // 0x1f55a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f55a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f55a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f55a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f55ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f55acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f55b0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1f55b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f55b4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f55b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f55b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f55b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f55bc: 0xc07eb5e  jal         func_1FAD78
    ctx->pc = 0x1F55BCu;
    SET_GPR_U32(ctx, 31, 0x1F55C4u);
    ctx->pc = 0x1F55C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F55BCu;
    // 0x1f55c0: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAD78u, 0x1F55BCu, 0x1F55C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F55C4u;
label_1f55c4:
    // 0x1f55c4: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x1f55c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x1f55c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f55c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f55cc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F55CCu;
    {
        const bool branch_taken_0x1f55cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F55D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F55CCu;
        // 0x1f55d0: 0x34a5020f  ori         $a1, $a1, 0x20F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)527);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f55cc) {
            ctx->pc = 0x1F55F0u;
            goto label_1f55f0;
        }
    }
    ctx->pc = 0x1F55D4u;
    // 0x1f55d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f55d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f55d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f55d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f55dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f55dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f55e0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f55e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f55e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f55e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f55e8: 0x807d4a8  j           func_1F52A0
    ctx->pc = 0x1F55E8u;
    ctx->pc = 0x1F55ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F55E8u;
    // 0x1f55ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F52A0u;
    sub_001F52A0_0x1f52a0(rdram, ctx, runtime); return;
    ctx->pc = 0x1F55F0u;
label_1f55f0:
    // 0x1f55f0: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1f55f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1f55f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f55f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f55f8: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x1f55f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x1f55fc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1f55fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1f5600: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f5600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f5604: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f5604u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f5608: 0x8e0300e4  lw          $v1, 0xE4($s0)
    ctx->pc = 0x1f5608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x1f560c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f560cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5610: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1f5610u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1f5614: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1f5614u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1f5618: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f5618u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f561c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f561cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f5620: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5620u;
        // 0x1f5624: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5628u;
}
