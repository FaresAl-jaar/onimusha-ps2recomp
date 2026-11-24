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

// Function: sub_00302390
// Address: 0x302390 - 0x3023f8
void sub_00302390_0x302390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302390_0x302390");
#endif

    switch (ctx->pc) {
        case 0x3023a8u: goto label_3023a8;
        default: break;
    }

    ctx->pc = 0x302390u;

    // 0x302390: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x302390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x302394: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x302394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302398: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x302398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30239c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30239cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3023a0: 0xc096c80  jal         func_25B200
    ctx->pc = 0x3023A0u;
    SET_GPR_U32(ctx, 31, 0x3023A8u);
    ctx->pc = 0x3023A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3023A0u;
    // 0x3023a4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x3023A0u, 0x3023A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3023A8u;
label_3023a8:
    // 0x3023a8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3023A8u;
    {
        const bool branch_taken_0x3023a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3023ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3023A8u;
        // 0x3023ac: 0x101c3c  dsll32      $v1, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3023a8) {
            ctx->pc = 0x3023E8u;
            goto label_3023e8;
        }
    }
    ctx->pc = 0x3023B0u;
    // 0x3023b0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3023b0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3023b4: 0x28610101  slti        $at, $v1, 0x101
    ctx->pc = 0x3023b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)257) ? 1 : 0);
    // 0x3023b8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3023B8u;
    {
        const bool branch_taken_0x3023b8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3023b8) {
            ctx->pc = 0x3023C8u;
            goto label_3023c8;
        }
    }
    ctx->pc = 0x3023C0u;
    // 0x3023c0: 0x24100100  addiu       $s0, $zero, 0x100
    ctx->pc = 0x3023c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3023c4: 0x0  nop
    ctx->pc = 0x3023c4u;
    // NOP
label_3023c8:
    // 0x3023c8: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x3023c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x3023cc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3023ccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3023d0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3023D0u;
    {
        const bool branch_taken_0x3023d0 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x3023d0) {
            ctx->pc = 0x3023E0u;
            goto label_3023e0;
        }
    }
    ctx->pc = 0x3023D8u;
    // 0x3023d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3023d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3023dc: 0x0  nop
    ctx->pc = 0x3023dcu;
    // NOP
label_3023e0:
    // 0x3023e0: 0xa450006a  sh          $s0, 0x6A($v0)
    ctx->pc = 0x3023e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 106), (uint16_t)GPR_U32(ctx, 16));
    // 0x3023e4: 0x0  nop
    ctx->pc = 0x3023e4u;
    // NOP
label_3023e8:
    // 0x3023e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3023e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3023ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3023ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3023f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3023F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3023F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3023F0u;
        // 0x3023f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3023F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3023F8u;
}
