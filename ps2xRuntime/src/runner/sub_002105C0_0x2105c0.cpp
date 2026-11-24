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

// Function: sub_002105C0
// Address: 0x2105c0 - 0x210648
void sub_002105C0_0x2105c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002105C0_0x2105c0");
#endif

    switch (ctx->pc) {
        case 0x2105e8u: goto label_2105e8;
        case 0x210630u: goto label_210630;
        default: break;
    }

    ctx->pc = 0x2105c0u;

    // 0x2105c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2105c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2105c4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2105c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2105c8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2105c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2105cc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2105ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2105d0: 0x26500d30  addiu       $s0, $s2, 0xD30
    ctx->pc = 0x2105d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 3376));
    // 0x2105d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2105d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2105d8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2105d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2105dc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2105dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2105e0: 0xc084990  jal         func_212640
    ctx->pc = 0x2105E0u;
    SET_GPR_U32(ctx, 31, 0x2105E8u);
    ctx->pc = 0x2105E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2105E0u;
    // 0x2105e4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212640u, 0x2105E0u, 0x2105E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2105E8u;
label_2105e8:
    // 0x2105e8: 0x8e060164  lw          $a2, 0x164($s0)
    ctx->pc = 0x2105e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x2105ec: 0x8e030168  lw          $v1, 0x168($s0)
    ctx->pc = 0x2105ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x2105f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2105f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2105f4: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x2105f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x2105f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2105f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2105fc: 0xae060164  sw          $a2, 0x164($s0)
    ctx->pc = 0x2105fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 6));
    // 0x210600: 0x2467001f  addiu       $a3, $v1, 0x1F
    ctx->pc = 0x210600u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x210604: 0x28650000  slti        $a1, $v1, 0x0
    ctx->pc = 0x210604u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x210608: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x210608u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21060c: 0xe5100b  movn        $v0, $a3, $a1
    ctx->pc = 0x21060cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x210610: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x210610u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x210614: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x210614u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x210618: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x210618u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21061c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21061cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x210620: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x210620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x210624: 0xac460e9c  sw          $a2, 0xE9C($v0)
    ctx->pc = 0x210624u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3740), GPR_U32(ctx, 6));
    // 0x210628: 0xc084996  jal         func_212658
    ctx->pc = 0x210628u;
    SET_GPR_U32(ctx, 31, 0x210630u);
    ctx->pc = 0x21062Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210628u;
    // 0x21062c: 0xae030168  sw          $v1, 0x168($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212658u, 0x210628u, 0x210630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210630u;
label_210630:
    // 0x210630: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x210630u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210634: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x210634u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x210638: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x210638u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21063c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21063cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x210640: 0x3e00008  jr          $ra
    ctx->pc = 0x210640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210640u;
        // 0x210644: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210648u;
}
