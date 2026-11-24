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

// Function: sub_00302600
// Address: 0x302600 - 0x3026ac
void sub_00302600_0x302600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302600_0x302600");
#endif

    switch (ctx->pc) {
        case 0x302640u: goto label_302640;
        case 0x30266cu: goto label_30266c;
        case 0x30267cu: goto label_30267c;
        default: break;
    }

    ctx->pc = 0x302600u;

    // 0x302600: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x302600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x302604: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x302604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x302608: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x302608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x30260c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30260cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x302610: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x302610u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302614: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x302614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x302618: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x302618u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30261c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x30261cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302620: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x302620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x302624: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x302624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302628: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x302628u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30262c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x30262cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302630: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x302630u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302634: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x302634u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302638: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x302638u;
    SET_GPR_U32(ctx, 31, 0x302640u);
    ctx->pc = 0x30263Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302638u;
    // 0x30263c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x302638u, 0x302640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302640u;
label_302640:
    // 0x302640: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x302640u;
    {
        const bool branch_taken_0x302640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302640) {
            ctx->pc = 0x302688u;
            goto label_302688;
        }
    }
    ctx->pc = 0x302648u;
    // 0x302648: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x302648u;
    {
        const bool branch_taken_0x302648 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x302648) {
            ctx->pc = 0x302680u;
            goto label_302680;
        }
    }
    ctx->pc = 0x302650u;
    // 0x302650: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x302650u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x302654: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x302654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x302658: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x302658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30265c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x30265cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302660: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x302660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x302664: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x302664u;
    SET_GPR_U32(ctx, 31, 0x30266Cu);
    ctx->pc = 0x302668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302664u;
    // 0x302668: 0x7e630000  sq          $v1, 0x0($s3) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x302664u, 0x30266Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30266Cu;
label_30266c:
    // 0x30266c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x30266cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302670: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x302670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302674: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x302674u;
    SET_GPR_U32(ctx, 31, 0x30267Cu);
    ctx->pc = 0x302678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302674u;
    // 0x302678: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x302674u, 0x30267Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30267Cu;
label_30267c:
    // 0x30267c: 0x0  nop
    ctx->pc = 0x30267cu;
    // NOP
label_302680:
    // 0x302680: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x302680u;
    {
        const bool branch_taken_0x302680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302680u;
        // 0x302684: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302680) {
            ctx->pc = 0x302690u;
            goto label_302690;
        }
    }
    ctx->pc = 0x302688u;
label_302688:
    // 0x302688: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x302688u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30268c: 0x0  nop
    ctx->pc = 0x30268cu;
    // NOP
label_302690:
    // 0x302690: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x302690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x302694: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x302694u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x302698: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x302698u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30269c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30269cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3026a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3026a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3026a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3026A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3026A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3026A4u;
        // 0x3026a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3026A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3026ACu;
}
