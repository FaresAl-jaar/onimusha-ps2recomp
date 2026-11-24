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

// Function: sub_002244B0
// Address: 0x2244b0 - 0x224524
void sub_002244B0_0x2244b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002244B0_0x2244b0");
#endif

    switch (ctx->pc) {
        case 0x2244d0u: goto label_2244d0;
        case 0x2244ecu: goto label_2244ec;
        default: break;
    }

    ctx->pc = 0x2244b0u;

    // 0x2244b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2244b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2244b4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2244b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2244b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2244b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2244bc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2244bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2244c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2244c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2244c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2244c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2244c8: 0xc089168  jal         func_2245A0
    ctx->pc = 0x2244C8u;
    SET_GPR_U32(ctx, 31, 0x2244D0u);
    ctx->pc = 0x2244CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2244C8u;
    // 0x2244cc: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2245A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2245A0u, 0x2244C8u, 0x2244D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2244D0u;
label_2244d0:
    // 0x2244d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2244d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2244d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2244d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2244d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2244d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2244dc: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x2244DCu;
    {
        const bool branch_taken_0x2244dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2244E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2244DCu;
        // 0x2244e0: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2244dc) {
            ctx->pc = 0x224510u;
            goto label_224510;
        }
    }
    ctx->pc = 0x2244E4u;
    // 0x2244e4: 0xc049590  jal         func_125640
    ctx->pc = 0x2244E4u;
    SET_GPR_U32(ctx, 31, 0x2244ECu);
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x2244E4u, 0x2244ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2244ECu;
label_2244ec:
    // 0x2244ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2244ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2244f0: 0x6a230007  ldl         $v1, 0x7($s1)
    ctx->pc = 0x2244f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2244f4: 0x6e230000  ldr         $v1, 0x0($s1)
    ctx->pc = 0x2244f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2244f8: 0x8a24000b  lwl         $a0, 0xB($s1)
    ctx->pc = 0x2244f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x2244fc: 0x9a240008  lwr         $a0, 0x8($s1)
    ctx->pc = 0x2244fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x224500: 0xb2030007  sdl         $v1, 0x7($s0)
    ctx->pc = 0x224500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x224504: 0xb6030000  sdr         $v1, 0x0($s0)
    ctx->pc = 0x224504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x224508: 0xaa04000b  swl         $a0, 0xB($s0)
    ctx->pc = 0x224508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x22450c: 0xba040008  swr         $a0, 0x8($s0)
    ctx->pc = 0x22450cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_224510:
    // 0x224510: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x224510u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224514: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x224514u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x224518: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x224518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22451c: 0x3e00008  jr          $ra
    ctx->pc = 0x22451Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22451Cu;
        // 0x224520: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22451Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224524u;
}
