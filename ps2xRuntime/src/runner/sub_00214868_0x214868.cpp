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

// Function: sub_00214868
// Address: 0x214868 - 0x214914
void sub_00214868_0x214868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214868_0x214868");
#endif

    switch (ctx->pc) {
        case 0x2148f8u: goto label_2148f8;
        default: break;
    }

    ctx->pc = 0x214868u;

    // 0x214868: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x214868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21486c: 0x3c070088  lui         $a3, 0x88
    ctx->pc = 0x21486cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)136 << 16));
    // 0x214870: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x214870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x214874: 0x24e75970  addiu       $a3, $a3, 0x5970
    ctx->pc = 0x214874u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 22896));
    // 0x214878: 0x3c020088  lui         $v0, 0x88
    ctx->pc = 0x214878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)136 << 16));
    // 0x21487c: 0x2408ffc0  addiu       $t0, $zero, -0x40
    ctx->pc = 0x21487cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x214880: 0x68830007  ldl         $v1, 0x7($a0)
    ctx->pc = 0x214880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x214884: 0x6c830000  ldr         $v1, 0x0($a0)
    ctx->pc = 0x214884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x214888: 0x6885000f  ldl         $a1, 0xF($a0)
    ctx->pc = 0x214888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x21488c: 0x6c850008  ldr         $a1, 0x8($a0)
    ctx->pc = 0x21488cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x214890: 0x68860017  ldl         $a2, 0x17($a0)
    ctx->pc = 0x214890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x214894: 0x6c860010  ldr         $a2, 0x10($a0)
    ctx->pc = 0x214894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x214898: 0x6889001f  ldl         $t1, 0x1F($a0)
    ctx->pc = 0x214898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x21489c: 0x6c890018  ldr         $t1, 0x18($a0)
    ctx->pc = 0x21489cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2148a0: 0xb0e30007  sdl         $v1, 0x7($a3)
    ctx->pc = 0x2148a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2148a4: 0xb4e30000  sdr         $v1, 0x0($a3)
    ctx->pc = 0x2148a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2148a8: 0xb0e5000f  sdl         $a1, 0xF($a3)
    ctx->pc = 0x2148a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2148ac: 0xb4e50008  sdr         $a1, 0x8($a3)
    ctx->pc = 0x2148acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2148b0: 0xb0e60017  sdl         $a2, 0x17($a3)
    ctx->pc = 0x2148b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2148b4: 0xb4e60010  sdr         $a2, 0x10($a3)
    ctx->pc = 0x2148b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2148b8: 0xb0e9001f  sdl         $t1, 0x1F($a3)
    ctx->pc = 0x2148b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2148bc: 0xb4e90018  sdr         $t1, 0x18($a3)
    ctx->pc = 0x2148bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2148c0: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x2148c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2148c4: 0xace30020  sw          $v1, 0x20($a3)
    ctx->pc = 0x2148c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x885990u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x885990u, _value); } while (0);
    // 0x2148c8: 0x24445998  addiu       $a0, $v0, 0x5998
    ctx->pc = 0x2148c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 22936));
    // 0x2148cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2148ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2148d0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2148d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2148d4: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x2148d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x885980u));
    // 0x2148d8: 0x8ce30020  lw          $v1, 0x20($a3)
    ctx->pc = 0x2148d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x885990u));
    // 0x2148dc: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x2148dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x2148e0: 0x2463003f  addiu       $v1, $v1, 0x3F
    ctx->pc = 0x2148e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x2148e4: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x2148e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x2148e8: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x2148e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x2148ec: 0xace20010  sw          $v0, 0x10($a3)
    ctx->pc = 0x2148ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 2));
    // 0x2148f0: 0xc049590  jal         func_125640
    ctx->pc = 0x2148F0u;
    SET_GPR_U32(ctx, 31, 0x2148F8u);
    ctx->pc = 0x2148F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2148F0u;
    // 0x2148f4: 0xace30020  sw          $v1, 0x20($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x2148F0u, 0x2148F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2148F8u;
label_2148f8:
    // 0x2148f8: 0x3c040088  lui         $a0, 0x88
    ctx->pc = 0x2148f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)136 << 16));
    // 0x2148fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2148fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214900: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x214900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214904: 0x248459a0  addiu       $a0, $a0, 0x59A0
    ctx->pc = 0x214904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22944));
    // 0x214908: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x214908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x21490c: 0x8049590  j           func_125640
    ctx->pc = 0x21490Cu;
    ctx->pc = 0x214910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21490Cu;
    // 0x214910: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    sub_00125640_0x125640(rdram, ctx, runtime); return;
    ctx->pc = 0x214914u;
}
