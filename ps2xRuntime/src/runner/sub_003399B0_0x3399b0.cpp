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

// Function: sub_003399B0
// Address: 0x3399b0 - 0x339a08
void sub_003399B0_0x3399b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003399B0_0x3399b0");
#endif

    switch (ctx->pc) {
        case 0x3399e0u: goto label_3399e0;
        default: break;
    }

    ctx->pc = 0x3399b0u;

    // 0x3399b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3399b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3399b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3399b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3399b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3399b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3399bc: 0x90830045  lbu         $v1, 0x45($a0)
    ctx->pc = 0x3399bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 69)));
    // 0x3399c0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3399C0u;
    {
        const bool branch_taken_0x3399c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3399C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3399C0u;
        // 0x3399c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3399c0) {
            ctx->pc = 0x3399F8u;
            goto label_3399f8;
        }
    }
    ctx->pc = 0x3399C8u;
    // 0x3399c8: 0xa2000045  sb          $zero, 0x45($s0)
    ctx->pc = 0x3399c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 69), (uint8_t)GPR_U32(ctx, 0));
    // 0x3399cc: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3399ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3399d0: 0x92050044  lbu         $a1, 0x44($s0)
    ctx->pc = 0x3399d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x3399d4: 0x24843fb0  addiu       $a0, $a0, 0x3FB0
    ctx->pc = 0x3399d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    // 0x3399d8: 0xc0ce3bc  jal         func_338EF0
    ctx->pc = 0x3399D8u;
    SET_GPR_U32(ctx, 31, 0x3399E0u);
    ctx->pc = 0x3399DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3399D8u;
    // 0x3399dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338EF0u, 0x3399D8u, 0x3399E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3399E0u;
label_3399e0:
    // 0x3399e0: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x3399e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x3399e4: 0xfc20f898  sd          $zero, -0x768($at)
    ctx->pc = 0x3399e4u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 0)); ps2TraceGuestWrite(rdram, 0x90F898u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x90F898u, _value); } while (0);
    // 0x3399e8: 0x86030050  lh          $v1, 0x50($s0)
    ctx->pc = 0x3399e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x3399ec: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x3399ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x3399f0: 0xac23f840  sw          $v1, -0x7C0($at)
    ctx->pc = 0x3399f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x90F840u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x90F840u, _value); } while (0);
    // 0x3399f4: 0x0  nop
    ctx->pc = 0x3399f4u;
    // NOP
label_3399f8:
    // 0x3399f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3399f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3399fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3399fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x339a00: 0x3e00008  jr          $ra
    ctx->pc = 0x339A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339A00u;
        // 0x339a04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339A08u;
}
