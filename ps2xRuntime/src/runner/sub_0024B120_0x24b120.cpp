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

// Function: sub_0024B120
// Address: 0x24b120 - 0x24b184
void sub_0024B120_0x24b120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B120_0x24b120");
#endif

    ctx->pc = 0x24b120u;

    // 0x24b120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24b120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24b124: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x24b124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b128: 0x14800011  bnez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x24B128u;
    {
        const bool branch_taken_0x24b128 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B128u;
        // 0x24b12c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b128) {
            ctx->pc = 0x24B170u;
            goto label_24b170;
        }
    }
    ctx->pc = 0x24B130u;
    // 0x24b130: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x24b130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x24b134: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x24b134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x24b138: 0x2447d730  addiu       $a3, $v0, -0x28D0
    ctx->pc = 0x24b138u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956848));
    // 0x24b13c: 0x24661220  addiu       $a2, $v1, 0x1220
    ctx->pc = 0x24b13cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4640));
    // 0x24b140: 0x88e40003  lwl         $a0, 0x3($a3)
    ctx->pc = 0x24b140u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x24b144: 0x98e40000  lwr         $a0, 0x0($a3)
    ctx->pc = 0x24b144u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x24b148: 0x80e50004  lb          $a1, 0x4($a3)
    ctx->pc = 0x24b148u;
    SET_GPR_S32(ctx, 5, (int8_t)FAST_READ8(0x66D734u));
    // 0x24b14c: 0xa8c40003  swl         $a0, 0x3($a2)
    ctx->pc = 0x24b14cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24b150: 0xb8c40000  swr         $a0, 0x0($a2)
    ctx->pc = 0x24b150u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24b154: 0xa0c50004  sb          $a1, 0x4($a2)
    ctx->pc = 0x24b154u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x4D1224u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4D1224u, _value); } while (0);
    // 0x24b158: 0x80e40005  lb          $a0, 0x5($a3)
    ctx->pc = 0x24b158u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x66D735u));
    // 0x24b15c: 0xa0c40005  sb          $a0, 0x5($a2)
    ctx->pc = 0x24b15cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x4D1225u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4D1225u, _value); } while (0);
    // 0x24b160: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24b160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b164: 0x3e00008  jr          $ra
    ctx->pc = 0x24B164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B164u;
        // 0x24b168: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B16Cu;
    // 0x24b16c: 0x0  nop
    ctx->pc = 0x24b16cu;
    // NOP
label_24b170:
    // 0x24b170: 0x3c04004d  lui         $a0, 0x4D
    ctx->pc = 0x24b170u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)77 << 16));
    // 0x24b174: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24b174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b178: 0x24841220  addiu       $a0, $a0, 0x1220
    ctx->pc = 0x24b178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4640));
    // 0x24b17c: 0x8049ed2  j           func_127B48
    ctx->pc = 0x24B17Cu;
    ctx->pc = 0x24B180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B17Cu;
    // 0x24b180: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B48u;
    sub_00127B48_0x127b48(rdram, ctx, runtime); return;
    ctx->pc = 0x24B184u;
}
