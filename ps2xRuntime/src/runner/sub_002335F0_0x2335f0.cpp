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

// Function: sub_002335F0
// Address: 0x2335f0 - 0x233688
void sub_002335F0_0x2335f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002335F0_0x2335f0");
#endif

    switch (ctx->pc) {
        case 0x233638u: goto label_233638;
        case 0x23364cu: goto label_23364c;
        case 0x233654u: goto label_233654;
        default: break;
    }

    ctx->pc = 0x2335f0u;

    // 0x2335f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2335f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2335f4: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2335f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2335f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2335f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2335fc: 0x2444fcd8  addiu       $a0, $v0, -0x328
    ctx->pc = 0x2335fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966488));
    // 0x233600: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x233600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x233604: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x233604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x233608: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x233608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x23360c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23360cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x233610: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x233610u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x4BFCD8u));
    // 0x233614: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x233614u;
    {
        const bool branch_taken_0x233614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x233618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233614u;
        // 0x233618: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233614) {
            ctx->pc = 0x233660u;
            goto label_233660;
        }
    }
    ctx->pc = 0x23361Cu;
    // 0x23361c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x23361cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x233620: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x233620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x233624: 0x2451fc78  addiu       $s1, $v0, -0x388
    ctx->pc = 0x233624u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966392));
    // 0x233628: 0x2470fc5c  addiu       $s0, $v1, -0x3A4
    ctx->pc = 0x233628u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966364));
    // 0x23362c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x23362cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233630: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x233630u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233634: 0x0  nop
    ctx->pc = 0x233634u;
    // NOP
label_233638:
    // 0x233638: 0xde220000  ld          $v0, 0x0($s1)
    ctx->pc = 0x233638u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23363c: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x23363cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x233640: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x233640u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x233644: 0xc094e4a  jal         func_253928
    ctx->pc = 0x233644u;
    SET_GPR_U32(ctx, 31, 0x23364Cu);
    ctx->pc = 0x233648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233644u;
    // 0x233648: 0xae120000  sw          $s2, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253928u, 0x233644u, 0x23364Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23364Cu;
label_23364c:
    // 0x23364c: 0xc08cecc  jal         func_233B30
    ctx->pc = 0x23364Cu;
    SET_GPR_U32(ctx, 31, 0x233654u);
    ctx->pc = 0x233650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23364Cu;
    // 0x233650: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233B30u, 0x23364Cu, 0x233654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233654u;
label_233654:
    // 0x233654: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x233654u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x233658: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x233658u;
    {
        const bool branch_taken_0x233658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233658u;
        // 0x23365c: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233658) {
            ctx->pc = 0x233638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_233638;
        }
    }
    ctx->pc = 0x233660u;
label_233660:
    // 0x233660: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x233660u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233664: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x233664u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x233668: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x233668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23366c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23366cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233670: 0x2442fce0  addiu       $v0, $v0, -0x320
    ctx->pc = 0x233670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966496));
    // 0x233674: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x233674u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x233678: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x233678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23367c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x23367cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x233680: 0x8043788  j           func_10DE20
    ctx->pc = 0x233680u;
    ctx->pc = 0x233684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233680u;
    // 0x233684: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DE20u;
    sub_0010DE20_0x10de20(rdram, ctx, runtime); return;
    ctx->pc = 0x233688u;
}
