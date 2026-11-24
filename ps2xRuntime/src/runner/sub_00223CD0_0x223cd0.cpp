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

// Function: sub_00223CD0
// Address: 0x223cd0 - 0x223d40
void sub_00223CD0_0x223cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223CD0_0x223cd0");
#endif

    switch (ctx->pc) {
        case 0x223cf0u: goto label_223cf0;
        case 0x223d08u: goto label_223d08;
        default: break;
    }

    ctx->pc = 0x223cd0u;

    // 0x223cd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x223cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x223cd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x223cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x223cd8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x223cd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223cdc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x223cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x223ce0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x223ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x223ce4: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x223ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x223ce8: 0xc088e5e  jal         func_223978
    ctx->pc = 0x223CE8u;
    SET_GPR_U32(ctx, 31, 0x223CF0u);
    ctx->pc = 0x223CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223CE8u;
    // 0x223cec: 0x8c910004  lw          $s1, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223978u, 0x223CE8u, 0x223CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223CF0u;
label_223cf0:
    // 0x223cf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x223cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223cf4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x223cf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223cf8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x223CF8u;
    {
        const bool branch_taken_0x223cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223CF8u;
        // 0x223cfc: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223cf8) {
            ctx->pc = 0x223D2Cu;
            goto label_223d2c;
        }
    }
    ctx->pc = 0x223D00u;
    // 0x223d00: 0xc049590  jal         func_125640
    ctx->pc = 0x223D00u;
    SET_GPR_U32(ctx, 31, 0x223D08u);
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x223D00u, 0x223D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223D08u;
label_223d08:
    // 0x223d08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x223d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x223d0c: 0x6a230053  ldl         $v1, 0x53($s1)
    ctx->pc = 0x223d0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 83); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x223d10: 0x6e23004c  ldr         $v1, 0x4C($s1)
    ctx->pc = 0x223d10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x223d14: 0x8a240057  lwl         $a0, 0x57($s1)
    ctx->pc = 0x223d14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 87); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x223d18: 0x9a240054  lwr         $a0, 0x54($s1)
    ctx->pc = 0x223d18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 84); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x223d1c: 0xb2030007  sdl         $v1, 0x7($s0)
    ctx->pc = 0x223d1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x223d20: 0xb6030000  sdr         $v1, 0x0($s0)
    ctx->pc = 0x223d20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x223d24: 0xaa04000b  swl         $a0, 0xB($s0)
    ctx->pc = 0x223d24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x223d28: 0xba040008  swr         $a0, 0x8($s0)
    ctx->pc = 0x223d28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_223d2c:
    // 0x223d2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x223d2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223d30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x223d30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x223d34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x223d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223d38: 0x3e00008  jr          $ra
    ctx->pc = 0x223D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223D38u;
        // 0x223d3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223D40u;
}
