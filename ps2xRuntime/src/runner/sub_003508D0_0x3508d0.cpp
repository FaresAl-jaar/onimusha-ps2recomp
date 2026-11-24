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

// Function: sub_003508D0
// Address: 0x3508d0 - 0x350958
void sub_003508D0_0x3508d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003508D0_0x3508d0");
#endif

    switch (ctx->pc) {
        case 0x3508fcu: goto label_3508fc;
        case 0x350920u: goto label_350920;
        default: break;
    }

    ctx->pc = 0x3508d0u;

    // 0x3508d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3508d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3508d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3508d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3508d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3508d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3508dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3508dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3508e0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3508e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3508e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3508e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3508e8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3508e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3508ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3508ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3508f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3508f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3508f4: 0xc0d37d0  jal         func_34DF40
    ctx->pc = 0x3508F4u;
    SET_GPR_U32(ctx, 31, 0x3508FCu);
    ctx->pc = 0x3508F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3508F4u;
    // 0x3508f8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DF40u, 0x3508F4u, 0x3508FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3508FCu;
label_3508fc:
    // 0x3508fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3508fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350900: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x350900u;
    {
        const bool branch_taken_0x350900 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x350900) {
            ctx->pc = 0x350930u;
            goto label_350930;
        }
    }
    ctx->pc = 0x350908u;
    // 0x350908: 0x8e51000c  lw          $s1, 0xC($s2)
    ctx->pc = 0x350908u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x35090c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35090cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350910: 0x8e500010  lw          $s0, 0x10($s2)
    ctx->pc = 0x350910u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x350914: 0xae54000c  sw          $s4, 0xC($s2)
    ctx->pc = 0x350914u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 20));
    // 0x350918: 0xc0d4448  jal         func_351120
    ctx->pc = 0x350918u;
    SET_GPR_U32(ctx, 31, 0x350920u);
    ctx->pc = 0x35091Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350918u;
    // 0x35091c: 0xae530010  sw          $s3, 0x10($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351120u, 0x350918u, 0x350920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350920u;
label_350920:
    // 0x350920: 0xae51000c  sw          $s1, 0xC($s2)
    ctx->pc = 0x350920u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 17));
    // 0x350924: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x350924u;
    {
        const bool branch_taken_0x350924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350924u;
        // 0x350928: 0xae500010  sw          $s0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350924) {
            ctx->pc = 0x350938u;
            goto label_350938;
        }
    }
    ctx->pc = 0x35092Cu;
    // 0x35092c: 0x0  nop
    ctx->pc = 0x35092cu;
    // NOP
label_350930:
    // 0x350930: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x350930u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350934: 0x0  nop
    ctx->pc = 0x350934u;
    // NOP
label_350938:
    // 0x350938: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x350938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35093c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x35093cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x350940: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x350940u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x350944: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x350944u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x350948: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x350948u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35094c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35094cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x350950: 0x3e00008  jr          $ra
    ctx->pc = 0x350950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350950u;
        // 0x350954: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350958u;
}
