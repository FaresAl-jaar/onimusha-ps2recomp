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

// Function: sub_0021B0F0
// Address: 0x21b0f0 - 0x21b148
void sub_0021B0F0_0x21b0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021B0F0_0x21b0f0");
#endif

    switch (ctx->pc) {
        case 0x21b108u: goto label_21b108;
        case 0x21b134u: goto label_21b134;
        default: break;
    }

    ctx->pc = 0x21b0f0u;

    // 0x21b0f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21b0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21b0f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21b0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21b0f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21b0f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b0fc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21b0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21b100: 0xc0869b4  jal         func_21A6D0
    ctx->pc = 0x21B100u;
    SET_GPR_U32(ctx, 31, 0x21B108u);
    ctx->pc = 0x21B104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B100u;
    // 0x21b104: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A6D0u, 0x21B100u, 0x21B108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B108u;
label_21b108:
    // 0x21b108: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x21b108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x21b10c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x21b10cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x21b110: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x21b110u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x21b114: 0x3463b410  ori         $v1, $v1, 0xB410
    ctx->pc = 0x21b114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46096);
    // 0x21b118: 0x3442b420  ori         $v0, $v0, 0xB420
    ctx->pc = 0x21b118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46112);
    // 0x21b11c: 0x3484b430  ori         $a0, $a0, 0xB430
    ctx->pc = 0x21b11cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46128);
    // 0x21b120: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x21b120u;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 0)); // MMIO: 0x1000b420
    // 0x21b124: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x21b124u;
    runtime->Store32(rdram, ctx, 0x1000B410u, GPR_U32(ctx, 0)); // MMIO: 0x1000b410
    // 0x21b128: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x21b128u;
    runtime->Store32(rdram, ctx, 0x1000B430u, GPR_U32(ctx, 0)); // MMIO: 0x1000b430
    // 0x21b12c: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x21B12Cu;
    SET_GPR_U32(ctx, 31, 0x21B134u);
    ctx->pc = 0x21B130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B12Cu;
    // 0x21b130: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x21B12Cu, 0x21B134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B134u;
label_21b134:
    // 0x21b134: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b138: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21b138u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b13c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21b13cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21b140: 0x3e00008  jr          $ra
    ctx->pc = 0x21B140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B140u;
        // 0x21b144: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B148u;
}
