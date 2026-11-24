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

// Function: sub_0021B490
// Address: 0x21b490 - 0x21b4f4
void sub_0021B490_0x21b490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021B490_0x21b490");
#endif

    switch (ctx->pc) {
        case 0x21b4e4u: goto label_21b4e4;
        default: break;
    }

    ctx->pc = 0x21b490u;

    // 0x21b490: 0x3c030088  lui         $v1, 0x88
    ctx->pc = 0x21b490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)136 << 16));
    // 0x21b494: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21b494u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21b498: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b49c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21b49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21b4a0: 0xac625a38  sw          $v0, 0x5A38($v1)
    ctx->pc = 0x21b4a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x885A38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x885A38u, _value); } while (0);
    // 0x21b4a4: 0x3c020088  lui         $v0, 0x88
    ctx->pc = 0x21b4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)136 << 16));
    // 0x21b4a8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x21b4a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b4ac: 0x24485a40  addiu       $t0, $v0, 0x5A40
    ctx->pc = 0x21b4acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 23104));
    // 0x21b4b0: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x21b4b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x21b4b4: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x21b4b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x21b4b8: 0xb1030007  sdl         $v1, 0x7($t0)
    ctx->pc = 0x21b4b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21b4bc: 0xb5030000  sdr         $v1, 0x0($t0)
    ctx->pc = 0x21b4bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21b4c0: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x21b4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x21b4c4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x21b4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b4c8: 0x8cc21fc0  lw          $v0, 0x1FC0($a2)
    ctx->pc = 0x21b4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8128)));
    // 0x21b4cc: 0x68e90007  ldl         $t1, 0x7($a3)
    ctx->pc = 0x21b4ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x21b4d0: 0x6ce90000  ldr         $t1, 0x0($a3)
    ctx->pc = 0x21b4d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x21b4d4: 0xb04911ff  sdl         $t1, 0x11FF($v0)
    ctx->pc = 0x21b4d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4607); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21b4d8: 0xb44911f8  sdr         $t1, 0x11F8($v0)
    ctx->pc = 0x21b4d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4600); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21b4dc: 0xc0848e0  jal         func_212380
    ctx->pc = 0x21B4DCu;
    SET_GPR_U32(ctx, 31, 0x21B4E4u);
    ctx->pc = 0x21B4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B4DCu;
    // 0x21b4e0: 0x34a50f40  ori         $a1, $a1, 0xF40 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3904);
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212380u, 0x21B4DCu, 0x21B4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B4E4u;
label_21b4e4:
    // 0x21b4e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b4e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21b4e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b4ec: 0x3e00008  jr          $ra
    ctx->pc = 0x21B4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B4ECu;
        // 0x21b4f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B4ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B4F4u;
}
