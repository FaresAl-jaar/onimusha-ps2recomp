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

// Function: sub_00223C60
// Address: 0x223c60 - 0x223cd0
void sub_00223C60_0x223c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223C60_0x223c60");
#endif

    switch (ctx->pc) {
        case 0x223c80u: goto label_223c80;
        case 0x223c98u: goto label_223c98;
        default: break;
    }

    ctx->pc = 0x223c60u;

    // 0x223c60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x223c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x223c64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x223c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x223c68: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x223c68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223c6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x223c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x223c70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x223c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x223c74: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x223c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x223c78: 0xc088e5e  jal         func_223978
    ctx->pc = 0x223C78u;
    SET_GPR_U32(ctx, 31, 0x223C80u);
    ctx->pc = 0x223C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223C78u;
    // 0x223c7c: 0x24510040  addiu       $s1, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223978u, 0x223C78u, 0x223C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223C80u;
label_223c80:
    // 0x223c80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x223c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223c84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x223c84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223c88: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x223C88u;
    {
        const bool branch_taken_0x223c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223C88u;
        // 0x223c8c: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223c88) {
            ctx->pc = 0x223CBCu;
            goto label_223cbc;
        }
    }
    ctx->pc = 0x223C90u;
    // 0x223c90: 0xc049590  jal         func_125640
    ctx->pc = 0x223C90u;
    SET_GPR_U32(ctx, 31, 0x223C98u);
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x223C90u, 0x223C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223C98u;
label_223c98:
    // 0x223c98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x223c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x223c9c: 0x6a230007  ldl         $v1, 0x7($s1)
    ctx->pc = 0x223c9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x223ca0: 0x6e230000  ldr         $v1, 0x0($s1)
    ctx->pc = 0x223ca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x223ca4: 0x8a24000b  lwl         $a0, 0xB($s1)
    ctx->pc = 0x223ca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x223ca8: 0x9a240008  lwr         $a0, 0x8($s1)
    ctx->pc = 0x223ca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x223cac: 0xb2030007  sdl         $v1, 0x7($s0)
    ctx->pc = 0x223cacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x223cb0: 0xb6030000  sdr         $v1, 0x0($s0)
    ctx->pc = 0x223cb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x223cb4: 0xaa04000b  swl         $a0, 0xB($s0)
    ctx->pc = 0x223cb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x223cb8: 0xba040008  swr         $a0, 0x8($s0)
    ctx->pc = 0x223cb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_223cbc:
    // 0x223cbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x223cbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223cc0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x223cc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x223cc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x223cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x223CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223CC8u;
        // 0x223ccc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223CD0u;
}
