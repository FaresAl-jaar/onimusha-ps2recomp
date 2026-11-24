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

// Function: sub_00339900
// Address: 0x339900 - 0x3399b0
void sub_00339900_0x339900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339900_0x339900");
#endif

    switch (ctx->pc) {
        case 0x339948u: goto label_339948;
        case 0x339970u: goto label_339970;
        default: break;
    }

    ctx->pc = 0x339900u;

    // 0x339900: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x339900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x339904: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x339904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x339908: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x339908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x33990c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x33990cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339910: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x339910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x339914: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x339914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x339918: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x339918u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33991c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33991cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x339920: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x339920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x339924: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x339924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339928: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x339928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x33992c: 0xa0830044  sb          $v1, 0x44($a0)
    ctx->pc = 0x33992cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 68), (uint8_t)GPR_U32(ctx, 3));
    // 0x339930: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x339930u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x339934: 0xa0820045  sb          $v0, 0x45($a0)
    ctx->pc = 0x339934u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 69), (uint8_t)GPR_U32(ctx, 2));
    // 0x339938: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x339938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33993c: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x33993cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x339940: 0xc0ce3bc  jal         func_338EF0
    ctx->pc = 0x339940u;
    SET_GPR_U32(ctx, 31, 0x339948u);
    ctx->pc = 0x339944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339940u;
    // 0x339944: 0x24843fb0  addiu       $a0, $a0, 0x3FB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338EF0u, 0x339940u, 0x339948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339948u;
label_339948:
    // 0x339948: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x339948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x33994c: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x33994cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x339950: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x339950u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x339954: 0x2442d340  addiu       $v0, $v0, -0x2CC0
    ctx->pc = 0x339954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955840));
    // 0x339958: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x339958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33995c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33995cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339960: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x339960u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x339964: 0x24843fb0  addiu       $a0, $a0, 0x3FB0
    ctx->pc = 0x339964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    // 0x339968: 0xc0ce400  jal         func_339000
    ctx->pc = 0x339968u;
    SET_GPR_U32(ctx, 31, 0x339970u);
    ctx->pc = 0x33996Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339968u;
    // 0x33996c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339000u, 0x339968u, 0x339970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339970u;
label_339970:
    // 0x339970: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x339970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x339974: 0xdc24f898  ld          $a0, -0x768($at)
    ctx->pc = 0x339974u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x90F898u));
    // 0x339978: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x339978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x33997c: 0x348401e0  ori         $a0, $a0, 0x1E0
    ctx->pc = 0x33997cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)480);
    // 0x339980: 0x8c23f840  lw          $v1, -0x7C0($at)
    ctx->pc = 0x339980u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x90F840u));
    // 0x339984: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x339984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x339988: 0xfc24f898  sd          $a0, -0x768($at)
    ctx->pc = 0x339988u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 4)); ps2TraceGuestWrite(rdram, 0x90F898u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x90F898u, _value); } while (0);
    // 0x33998c: 0xa6030050  sh          $v1, 0x50($s0)
    ctx->pc = 0x33998cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 80), (uint16_t)GPR_U32(ctx, 3));
    // 0x339990: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x339990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x339994: 0xac20f840  sw          $zero, -0x7C0($at)
    ctx->pc = 0x339994u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x90F840u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x90F840u, _value); } while (0);
    // 0x339998: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x339998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33999c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33999cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3399a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3399a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3399a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3399a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3399a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3399A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3399ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3399A8u;
        // 0x3399ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3399A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3399B0u;
}
