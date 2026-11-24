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

// Function: sub_001F5220
// Address: 0x1f5220 - 0x1f529c
void sub_001F5220_0x1f5220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5220_0x1f5220");
#endif

    switch (ctx->pc) {
        case 0x1f523cu: goto label_1f523c;
        default: break;
    }

    ctx->pc = 0x1f5220u;

    // 0x1f5220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f5220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f5224: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f5224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f5228: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f5228u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f522c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f522cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f5230: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f5230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f5234: 0xc07eb5e  jal         func_1FAD78
    ctx->pc = 0x1F5234u;
    SET_GPR_U32(ctx, 31, 0x1F523Cu);
    ctx->pc = 0x1F5238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5234u;
    // 0x1f5238: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAD78u, 0x1F5234u, 0x1F523Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F523Cu;
label_1f523c:
    // 0x1f523c: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x1f523cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x1f5240: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F5240u;
    {
        const bool branch_taken_0x1f5240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5240u;
        // 0x1f5244: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5240) {
            ctx->pc = 0x1F5260u;
            goto label_1f5260;
        }
    }
    ctx->pc = 0x1F5248u;
    // 0x1f5248: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f5248u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f524c: 0x34a50204  ori         $a1, $a1, 0x204
    ctx->pc = 0x1f524cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)516);
    // 0x1f5250: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f5250u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f5254: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f5254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5258: 0x807d4a8  j           func_1F52A0
    ctx->pc = 0x1F5258u;
    ctx->pc = 0x1F525Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5258u;
    // 0x1f525c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F52A0u;
    sub_001F52A0_0x1f52a0(rdram, ctx, runtime); return;
    ctx->pc = 0x1F5260u;
label_1f5260:
    // 0x1f5260: 0x6a02000b  ldl         $v0, 0xB($s0)
    ctx->pc = 0x1f5260u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1f5264: 0x6e020004  ldr         $v0, 0x4($s0)
    ctx->pc = 0x1f5264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1f5268: 0x6a030013  ldl         $v1, 0x13($s0)
    ctx->pc = 0x1f5268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1f526c: 0x6e03000c  ldr         $v1, 0xC($s0)
    ctx->pc = 0x1f526cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1f5270: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1f5270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1f5274: 0xb2220007  sdl         $v0, 0x7($s1)
    ctx->pc = 0x1f5274u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f5278: 0xb6220000  sdr         $v0, 0x0($s1)
    ctx->pc = 0x1f5278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f527c: 0xb223000f  sdl         $v1, 0xF($s1)
    ctx->pc = 0x1f527cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f5280: 0xb6230008  sdr         $v1, 0x8($s1)
    ctx->pc = 0x1f5280u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f5284: 0xae240010  sw          $a0, 0x10($s1)
    ctx->pc = 0x1f5284u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
    // 0x1f5288: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f5288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f528c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f528cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5290: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f5290u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f5294: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5294u;
        // 0x1f5298: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F529Cu;
}
