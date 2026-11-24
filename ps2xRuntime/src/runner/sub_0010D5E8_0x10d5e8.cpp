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

// Function: sub_0010D5E8
// Address: 0x10d5e8 - 0x10d65c
void sub_0010D5E8_0x10d5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D5E8_0x10d5e8");
#endif

    switch (ctx->pc) {
        case 0x10d5fcu: goto label_10d5fc;
        default: break;
    }

    ctx->pc = 0x10d5e8u;

    // 0x10d5e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10d5e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10d5ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10d5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10d5f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10d5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10d5f4: 0xc046028  jal         func_1180A0
    ctx->pc = 0x10D5F4u;
    SET_GPR_U32(ctx, 31, 0x10D5FCu);
    ctx->pc = 0x10D5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D5F4u;
    // 0x10d5f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x10D5F4u, 0x10D5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D5FCu;
label_10d5fc:
    // 0x10d5fc: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x10d5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x10d600: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x10d600u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x10d604: 0x34c6f520  ori         $a2, $a2, 0xF520
    ctx->pc = 0x10d604u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62752);
    // 0x10d608: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x10d608u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x10d60c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x10d60cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x10d610: 0x34e7f590  ori         $a3, $a3, 0xF590
    ctx->pc = 0x10d610u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)62864);
    // 0x10d614: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10d614u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10d618: 0x3c05fffe  lui         $a1, 0xFFFE
    ctx->pc = 0x10d618u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65534 << 16));
    // 0x10d61c: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x10d61cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x10d620: 0x3484b400  ori         $a0, $a0, 0xB400
    ctx->pc = 0x10d620u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46080);
    // 0x10d624: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x10d624u;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 3)); // MMIO: 0x1000f590
    // 0x10d628: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x10d628u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x10d62c: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x10d62cu;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 16)); // MMIO: 0x1000b400
    // 0x10d630: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x10d630u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x10d634: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x10d634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x10d638: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x10d638u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x10d63c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10D63Cu;
    {
        const bool branch_taken_0x10d63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D63Cu;
        // 0x10d640: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d63c) {
            ctx->pc = 0x10D650u;
            goto label_10d650;
        }
    }
    ctx->pc = 0x10D644u;
    // 0x10d644: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10d644u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d648: 0x804603c  j           func_1180F0
    ctx->pc = 0x10D648u;
    ctx->pc = 0x10D64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D648u;
    // 0x10d64c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180F0u;
    sub_001180F0_0x1180f0(rdram, ctx, runtime); return;
    ctx->pc = 0x10D650u;
label_10d650:
    // 0x10d650: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10d650u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d654: 0x3e00008  jr          $ra
    ctx->pc = 0x10D654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D654u;
        // 0x10d658: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D65Cu;
}
