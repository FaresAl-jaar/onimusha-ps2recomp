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

// Function: sub_001FD6A0
// Address: 0x1fd6a0 - 0x1fd740
void sub_001FD6A0_0x1fd6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD6A0_0x1fd6a0");
#endif

    switch (ctx->pc) {
        case 0x1fd6e8u: goto label_1fd6e8;
        default: break;
    }

    ctx->pc = 0x1fd6a0u;

    // 0x1fd6a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fd6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fd6a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fd6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fd6a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fd6a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd6ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fd6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fd6b0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1fd6b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd6b4: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FD6B4u;
    {
        const bool branch_taken_0x1fd6b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD6B4u;
        // 0x1fd6b8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd6b4) {
            ctx->pc = 0x1FD6E0u;
            goto label_1fd6e0;
        }
    }
    ctx->pc = 0x1FD6BCu;
    // 0x1fd6bc: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x1fd6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x1fd6c0: 0x8c438138  lw          $v1, -0x7EC8($v0)
    ctx->pc = 0x1fd6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4B8138u));
    // 0x1fd6c4: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x1fd6c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1fd6c8: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x1fd6c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1fd6cc: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1fd6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1fd6d0: 0xb2220007  sdl         $v0, 0x7($s1)
    ctx->pc = 0x1fd6d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fd6d4: 0xb6220000  sdr         $v0, 0x0($s1)
    ctx->pc = 0x1fd6d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fd6d8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1FD6D8u;
    {
        const bool branch_taken_0x1fd6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD6D8u;
        // 0x1fd6dc: 0xae240008  sw          $a0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd6d8) {
            ctx->pc = 0x1FD728u;
            goto label_1fd728;
        }
    }
    ctx->pc = 0x1FD6E0u;
label_1fd6e0:
    // 0x1fd6e0: 0xc07f5d0  jal         func_1FD740
    ctx->pc = 0x1FD6E0u;
    SET_GPR_U32(ctx, 31, 0x1FD6E8u);
    ctx->pc = 0x1FD740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD740u, 0x1FD6E0u, 0x1FD6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD6E8u;
label_1fd6e8:
    // 0x1fd6e8: 0x3c05ff02  lui         $a1, 0xFF02
    ctx->pc = 0x1fd6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65282 << 16));
    // 0x1fd6ec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FD6ECu;
    {
        const bool branch_taken_0x1fd6ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD6ECu;
        // 0x1fd6f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd6ec) {
            ctx->pc = 0x1FD710u;
            goto label_1fd710;
        }
    }
    ctx->pc = 0x1FD6F4u;
    // 0x1fd6f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fd6f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd6f8: 0x34a50102  ori         $a1, $a1, 0x102
    ctx->pc = 0x1fd6f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
    // 0x1fd6fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fd6fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fd700: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fd700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd704: 0x807f55c  j           func_1FD570
    ctx->pc = 0x1FD704u;
    ctx->pc = 0x1FD708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD704u;
    // 0x1fd708: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD570u;
    sub_001FD570_0x1fd570(rdram, ctx, runtime); return;
    ctx->pc = 0x1FD70Cu;
    // 0x1fd70c: 0x0  nop
    ctx->pc = 0x1fd70cu;
    // NOP
label_1fd710:
    // 0x1fd710: 0x6a02000b  ldl         $v0, 0xB($s0)
    ctx->pc = 0x1fd710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1fd714: 0x6e020004  ldr         $v0, 0x4($s0)
    ctx->pc = 0x1fd714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1fd718: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1fd718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1fd71c: 0xb2220007  sdl         $v0, 0x7($s1)
    ctx->pc = 0x1fd71cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fd720: 0xb6220000  sdr         $v0, 0x0($s1)
    ctx->pc = 0x1fd720u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fd724: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1fd724u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_1fd728:
    // 0x1fd728: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fd728u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd72c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fd72cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd730: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fd730u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fd734: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fd734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd738: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD738u;
        // 0x1fd73c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD740u;
}
