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

// Function: sub_00216E88
// Address: 0x216e88 - 0x216f54
void sub_00216E88_0x216e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216E88_0x216e88");
#endif

    switch (ctx->pc) {
        case 0x216eb4u: goto label_216eb4;
        default: break;
    }

    ctx->pc = 0x216e88u;

    // 0x216e88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x216e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x216e8c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x216e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x216e90: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x216e90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216e94: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x216e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x216e98: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x216e98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216e9c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x216e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216ea0: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x216ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x216ea4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x216ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x216ea8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x216ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x216eac: 0xc0883ea  jal         func_220FA8
    ctx->pc = 0x216EACu;
    SET_GPR_U32(ctx, 31, 0x216EB4u);
    ctx->pc = 0x216EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216EACu;
    // 0x216eb0: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220FA8u, 0x216EACu, 0x216EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216EB4u;
label_216eb4:
    // 0x216eb4: 0x26500d30  addiu       $s0, $s2, 0xD30
    ctx->pc = 0x216eb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 3376));
    // 0x216eb8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x216eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216ebc: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x216ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x216ec0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x216ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x216ec4: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x216ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x216ec8: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x216ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x216ecc: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x216eccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x216ed0: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x216ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
    // 0x216ed4: 0xae240034  sw          $a0, 0x34($s1)
    ctx->pc = 0x216ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 4));
    // 0x216ed8: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x216ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x216edc: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x216edcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x216ee0: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x216EE0u;
    {
        const bool branch_taken_0x216ee0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x216EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216EE0u;
        // 0x216ee4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216ee0) {
            ctx->pc = 0x216F40u;
            goto label_216f40;
        }
    }
    ctx->pc = 0x216EE8u;
    // 0x216ee8: 0x6a220013  ldl         $v0, 0x13($s1)
    ctx->pc = 0x216ee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x216eec: 0x6e22000c  ldr         $v0, 0xC($s1)
    ctx->pc = 0x216eecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x216ef0: 0x6a23001b  ldl         $v1, 0x1B($s1)
    ctx->pc = 0x216ef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x216ef4: 0x6e230014  ldr         $v1, 0x14($s1)
    ctx->pc = 0x216ef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x216ef8: 0x6a240023  ldl         $a0, 0x23($s1)
    ctx->pc = 0x216ef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x216efc: 0x6e24001c  ldr         $a0, 0x1C($s1)
    ctx->pc = 0x216efcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x216f00: 0x6a25002b  ldl         $a1, 0x2B($s1)
    ctx->pc = 0x216f00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x216f04: 0x6e250024  ldr         $a1, 0x24($s1)
    ctx->pc = 0x216f04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x216f08: 0xb2420d9f  sdl         $v0, 0xD9F($s2)
    ctx->pc = 0x216f08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3487); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x216f0c: 0xb6420d98  sdr         $v0, 0xD98($s2)
    ctx->pc = 0x216f0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3480); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x216f10: 0xb2430da7  sdl         $v1, 0xDA7($s2)
    ctx->pc = 0x216f10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3495); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x216f14: 0xb6430da0  sdr         $v1, 0xDA0($s2)
    ctx->pc = 0x216f14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3488); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x216f18: 0xb2440daf  sdl         $a0, 0xDAF($s2)
    ctx->pc = 0x216f18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3503); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x216f1c: 0xb6440da8  sdr         $a0, 0xDA8($s2)
    ctx->pc = 0x216f1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3496); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x216f20: 0xb2450db7  sdl         $a1, 0xDB7($s2)
    ctx->pc = 0x216f20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3511); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x216f24: 0xb6450db0  sdr         $a1, 0xDB0($s2)
    ctx->pc = 0x216f24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3504); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x216f28: 0x6a220033  ldl         $v0, 0x33($s1)
    ctx->pc = 0x216f28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x216f2c: 0x6e22002c  ldr         $v0, 0x2C($s1)
    ctx->pc = 0x216f2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x216f30: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x216f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x216f34: 0xb2420dbf  sdl         $v0, 0xDBF($s2)
    ctx->pc = 0x216f34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3519); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x216f38: 0xb6420db8  sdr         $v0, 0xDB8($s2)
    ctx->pc = 0x216f38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3512); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x216f3c: 0xae430dc0  sw          $v1, 0xDC0($s2)
    ctx->pc = 0x216f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3520), GPR_U32(ctx, 3));
label_216f40:
    // 0x216f40: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x216f40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x216f44: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x216f44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x216f48: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x216f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x216f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x216F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216F4Cu;
        // 0x216f50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216F54u;
}
