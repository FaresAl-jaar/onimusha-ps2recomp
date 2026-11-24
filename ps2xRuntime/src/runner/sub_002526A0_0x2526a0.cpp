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

// Function: sub_002526A0
// Address: 0x2526a0 - 0x2526ec
void sub_002526A0_0x2526a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002526A0_0x2526a0");
#endif

    ctx->pc = 0x2526a0u;

    // 0x2526a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2526a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2526a4: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x2526a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2526a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2526a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2526ac: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x2526acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x2526b0: 0x244284c0  addiu       $v0, $v0, -0x7B40
    ctx->pc = 0x2526b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935744));
    // 0x2526b4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2526b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2526b8: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x2526b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2526bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2526bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2526c0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2526c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x8884C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8884C0u, _value); } while (0);
    // 0x2526c4: 0x24040027  addiu       $a0, $zero, 0x27
    ctx->pc = 0x2526c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x2526c8: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x2526c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x8884C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8884C4u, _value); } while (0);
    // 0x2526cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2526ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2526d0: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x2526d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8884C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8884C8u, _value); } while (0);
    // 0x2526d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2526d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2526d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2526d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2526dc: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x2526dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x2526e0: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x2526e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8884CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8884CCu, _value); } while (0);
    // 0x2526e4: 0x8091ee6  j           func_247B98
    ctx->pc = 0x2526E4u;
    ctx->pc = 0x2526E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2526E4u;
    // 0x2526e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247B98u;
    sub_00247B98_0x247b98(rdram, ctx, runtime); return;
    ctx->pc = 0x2526ECu;
}
