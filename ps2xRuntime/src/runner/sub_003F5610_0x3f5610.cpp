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

// Function: sub_003F5610
// Address: 0x3f5610 - 0x3f5694
void sub_003F5610_0x3f5610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F5610_0x3f5610");
#endif

    switch (ctx->pc) {
        case 0x3f5648u: goto label_3f5648;
        case 0x3f567cu: goto label_3f567c;
        case 0x3f5684u: goto label_3f5684;
        default: break;
    }

    ctx->pc = 0x3f5610u;

    // 0x3f5610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3f5610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3f5614: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3f5614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3f5618: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f5618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3f561c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f561cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5620: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f5620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3f5624: 0xa0800238  sb          $zero, 0x238($a0)
    ctx->pc = 0x3f5624u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 568), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f5628: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f5628u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f562c: 0xa080023c  sb          $zero, 0x23C($a0)
    ctx->pc = 0x3f562cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 572), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f5630: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x3f5630u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5634: 0x9022fc8d  lbu         $v0, -0x373($at)
    ctx->pc = 0x3f5634u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x81FC8Du));
    // 0x3f5638: 0xa0820239  sb          $v0, 0x239($a0)
    ctx->pc = 0x3f5638u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 569), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f563c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3f563cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3f5640: 0x9022fc8c  lbu         $v0, -0x374($at)
    ctx->pc = 0x3f5640u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x81FC8Cu));
    // 0x3f5644: 0xa082023a  sb          $v0, 0x23A($a0)
    ctx->pc = 0x3f5644u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 570), (uint8_t)GPR_U32(ctx, 2));
label_3f5648:
    // 0x3f5648: 0xac600200  sw          $zero, 0x200($v1)
    ctx->pc = 0x3f5648u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 512), GPR_U32(ctx, 0));
    // 0x3f564c: 0xac600204  sw          $zero, 0x204($v1)
    ctx->pc = 0x3f564cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 516), GPR_U32(ctx, 0));
    // 0x3f5650: 0x24a50007  addiu       $a1, $a1, 0x7
    ctx->pc = 0x3f5650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x3f5654: 0xac600208  sw          $zero, 0x208($v1)
    ctx->pc = 0x3f5654u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 520), GPR_U32(ctx, 0));
    // 0x3f5658: 0x2ca2000e  sltiu       $v0, $a1, 0xE
    ctx->pc = 0x3f5658u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x3f565c: 0xac60020c  sw          $zero, 0x20C($v1)
    ctx->pc = 0x3f565cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 524), GPR_U32(ctx, 0));
    // 0x3f5660: 0xac600210  sw          $zero, 0x210($v1)
    ctx->pc = 0x3f5660u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 528), GPR_U32(ctx, 0));
    // 0x3f5664: 0xac600214  sw          $zero, 0x214($v1)
    ctx->pc = 0x3f5664u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 532), GPR_U32(ctx, 0));
    // 0x3f5668: 0xac600218  sw          $zero, 0x218($v1)
    ctx->pc = 0x3f5668u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 536), GPR_U32(ctx, 0));
    // 0x3f566c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x3F566Cu;
    {
        const bool branch_taken_0x3f566c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F5670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F566Cu;
        // 0x3f5670: 0x2463001c  addiu       $v1, $v1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f566c) {
            ctx->pc = 0x3F5648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f5648;
        }
    }
    ctx->pc = 0x3F5674u;
    // 0x3f5674: 0xc0fd5a8  jal         func_3F56A0
    ctx->pc = 0x3F5674u;
    SET_GPR_U32(ctx, 31, 0x3F567Cu);
    ctx->pc = 0x3F5678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5674u;
    // 0x3f5678: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F56A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F56A0u, 0x3F5674u, 0x3F567Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F567Cu;
label_3f567c:
    // 0x3f567c: 0xc0fd5d8  jal         func_3F5760
    ctx->pc = 0x3F567Cu;
    SET_GPR_U32(ctx, 31, 0x3F5684u);
    ctx->pc = 0x3F5680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F567Cu;
    // 0x3f5680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F5760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F5760u, 0x3F567Cu, 0x3F5684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5684u;
label_3f5684:
    // 0x3f5684: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f5684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f5688: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f5688u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f568c: 0x3e00008  jr          $ra
    ctx->pc = 0x3F568Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F5690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F568Cu;
        // 0x3f5690: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F568Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F5694u;
}
