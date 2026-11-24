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

// Function: sub_002F4A00
// Address: 0x2f4a00 - 0x2f4a50
void sub_002F4A00_0x2f4a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4A00_0x2f4a00");
#endif

    switch (ctx->pc) {
        case 0x2f4a14u: goto label_2f4a14;
        default: break;
    }

    ctx->pc = 0x2f4a00u;

    // 0x2f4a00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f4a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f4a04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f4a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f4a08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f4a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f4a0c: 0xc0bcc90  jal         func_2F3240
    ctx->pc = 0x2F4A0Cu;
    SET_GPR_U32(ctx, 31, 0x2F4A14u);
    ctx->pc = 0x2F4A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4A0Cu;
    // 0x2f4a10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3240u, 0x2F4A0Cu, 0x2F4A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4A14u;
label_2f4a14:
    // 0x2f4a14: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2f4a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f4a18: 0x220c2  srl         $a0, $v0, 3
    ctx->pc = 0x2f4a18u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x2f4a1c: 0x30460007  andi        $a2, $v0, 0x7
    ctx->pc = 0x2f4a1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2f4a20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f4a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f4a24: 0xc52804  sllv        $a1, $a1, $a2
    ctx->pc = 0x2f4a24u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x2f4a28: 0xa02827  not         $a1, $a1
    ctx->pc = 0x2f4a28u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 0)));
    // 0x2f4a2c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2f4a2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2f4a30: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2f4a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f4a34: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2f4a34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f4a38: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2f4a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2f4a3c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2f4a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f4a40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f4a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f4a44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f4a44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f4a48: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4A48u;
        // 0x2f4a4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4A50u;
}
