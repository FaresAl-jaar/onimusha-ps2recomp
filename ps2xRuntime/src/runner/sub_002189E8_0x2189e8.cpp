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

// Function: sub_002189E8
// Address: 0x2189e8 - 0x218a8c
void sub_002189E8_0x2189e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002189E8_0x2189e8");
#endif

    switch (ctx->pc) {
        case 0x218a5cu: goto label_218a5c;
        case 0x218a6cu: goto label_218a6c;
        default: break;
    }

    ctx->pc = 0x2189e8u;

    // 0x2189e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2189e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2189ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2189ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2189f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2189f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2189f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2189f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2189f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2189f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2189fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2189fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x218a00: 0x6a020df7  ldl         $v0, 0xDF7($s0)
    ctx->pc = 0x218a00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3575); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x218a04: 0x6e020df0  ldr         $v0, 0xDF0($s0)
    ctx->pc = 0x218a04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3568); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x218a08: 0x6a030dff  ldl         $v1, 0xDFF($s0)
    ctx->pc = 0x218a08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3583); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x218a0c: 0x6e030df8  ldr         $v1, 0xDF8($s0)
    ctx->pc = 0x218a0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3576); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x218a10: 0x6a050e07  ldl         $a1, 0xE07($s0)
    ctx->pc = 0x218a10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3591); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x218a14: 0x6e050e00  ldr         $a1, 0xE00($s0)
    ctx->pc = 0x218a14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3584); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x218a18: 0x6a060e0f  ldl         $a2, 0xE0F($s0)
    ctx->pc = 0x218a18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3599); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x218a1c: 0x6e060e08  ldr         $a2, 0xE08($s0)
    ctx->pc = 0x218a1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3592); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x218a20: 0xb2220013  sdl         $v0, 0x13($s1)
    ctx->pc = 0x218a20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x218a24: 0xb622000c  sdr         $v0, 0xC($s1)
    ctx->pc = 0x218a24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x218a28: 0xb223001b  sdl         $v1, 0x1B($s1)
    ctx->pc = 0x218a28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x218a2c: 0xb6230014  sdr         $v1, 0x14($s1)
    ctx->pc = 0x218a2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x218a30: 0xb2250023  sdl         $a1, 0x23($s1)
    ctx->pc = 0x218a30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x218a34: 0xb625001c  sdr         $a1, 0x1C($s1)
    ctx->pc = 0x218a34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x218a38: 0xb226002b  sdl         $a2, 0x2B($s1)
    ctx->pc = 0x218a38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x218a3c: 0xb6260024  sdr         $a2, 0x24($s1)
    ctx->pc = 0x218a3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x218a40: 0x6a020e17  ldl         $v0, 0xE17($s0)
    ctx->pc = 0x218a40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3607); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x218a44: 0x6e020e10  ldr         $v0, 0xE10($s0)
    ctx->pc = 0x218a44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3600); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x218a48: 0x8e030e18  lw          $v1, 0xE18($s0)
    ctx->pc = 0x218a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3608)));
    // 0x218a4c: 0xb2220033  sdl         $v0, 0x33($s1)
    ctx->pc = 0x218a4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x218a50: 0xb622002c  sdr         $v0, 0x2C($s1)
    ctx->pc = 0x218a50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x218a54: 0xc086c6a  jal         func_21B1A8
    ctx->pc = 0x218A54u;
    SET_GPR_U32(ctx, 31, 0x218A5Cu);
    ctx->pc = 0x218A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218A54u;
    // 0x218a58: 0xae230034  sw          $v1, 0x34($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B1A8u, 0x218A54u, 0x218A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218A5Cu;
label_218a5c:
    // 0x218a5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x218A5Cu;
    {
        const bool branch_taken_0x218a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x218A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218A5Cu;
        // 0x218a60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218a5c) {
            ctx->pc = 0x218A70u;
            goto label_218a70;
        }
    }
    ctx->pc = 0x218A64u;
    // 0x218a64: 0xc086ec2  jal         func_21BB08
    ctx->pc = 0x218A64u;
    SET_GPR_U32(ctx, 31, 0x218A6Cu);
    ctx->pc = 0x21BB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BB08u, 0x218A64u, 0x218A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218A6Cu;
label_218a6c:
    // 0x218a6c: 0xae2200e8  sw          $v0, 0xE8($s1)
    ctx->pc = 0x218a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 2));
label_218a70:
    // 0x218a70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x218a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218a74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x218a74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218a78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x218a78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218a7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x218a7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x218a80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x218a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218a84: 0x80862a4  j           func_218A90
    ctx->pc = 0x218A84u;
    ctx->pc = 0x218A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218A84u;
    // 0x218a88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218A90u;
    sub_00218A90_0x218a90(rdram, ctx, runtime); return;
    ctx->pc = 0x218A8Cu;
}
