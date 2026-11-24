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

// Function: sub_00203B68
// Address: 0x203b68 - 0x203d24
void sub_00203B68_0x203b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203B68_0x203b68");
#endif

    switch (ctx->pc) {
        case 0x203b9cu: goto label_203b9c;
        case 0x203bacu: goto label_203bac;
        case 0x203bd8u: goto label_203bd8;
        case 0x203bf0u: goto label_203bf0;
        case 0x203c68u: goto label_203c68;
        case 0x203ca4u: goto label_203ca4;
        case 0x203cacu: goto label_203cac;
        default: break;
    }

    ctx->pc = 0x203b68u;

    // 0x203b68: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x203b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x203b6c: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x203b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x203b70: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x203b70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203b74: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x203b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x203b78: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x203b78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203b7c: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x203b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x203b80: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x203b80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203b84: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x203b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203b88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x203b88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203b8c: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x203b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x203b90: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x203b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x203b94: 0xc049590  jal         func_125640
    ctx->pc = 0x203B94u;
    SET_GPR_U32(ctx, 31, 0x203B9Cu);
    ctx->pc = 0x203B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203B94u;
    // 0x203b98: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x203B94u, 0x203B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203B9Cu;
label_203b9c:
    // 0x203b9c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x203b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203ba0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x203ba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203ba4: 0xc049590  jal         func_125640
    ctx->pc = 0x203BA4u;
    SET_GPR_U32(ctx, 31, 0x203BACu);
    ctx->pc = 0x203BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203BA4u;
    // 0x203ba8: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x203BA4u, 0x203BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203BACu;
label_203bac:
    // 0x203bac: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x203bacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x203bb0: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x203BB0u;
    {
        const bool branch_taken_0x203bb0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x203BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203BB0u;
        // 0x203bb4: 0x24846a40  addiu       $a0, $a0, 0x6A40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203bb0) {
            ctx->pc = 0x203BD0u;
            goto label_203bd0;
        }
    }
    ctx->pc = 0x203BB8u;
    // 0x203bb8: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x203BB8u;
    {
        const bool branch_taken_0x203bb8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x203bb8) {
            ctx->pc = 0x203BD0u;
            goto label_203bd0;
        }
    }
    ctx->pc = 0x203BC0u;
    // 0x203bc0: 0x1e200007  bgtz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x203BC0u;
    {
        const bool branch_taken_0x203bc0 = (GPR_S64(ctx, 17) > 0);
        ctx->pc = 0x203BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203BC0u;
        // 0x203bc4: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203bc0) {
            ctx->pc = 0x203BE0u;
            goto label_203be0;
        }
    }
    ctx->pc = 0x203BC8u;
    // 0x203bc8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x203bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x203bcc: 0x24846a68  addiu       $a0, $a0, 0x6A68
    ctx->pc = 0x203bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27240));
label_203bd0:
    // 0x203bd0: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x203BD0u;
    SET_GPR_U32(ctx, 31, 0x203BD8u);
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x203BD0u, 0x203BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203BD8u;
label_203bd8:
    // 0x203bd8: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x203BD8u;
    {
        const bool branch_taken_0x203bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203BD8u;
        // 0x203bdc: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203bd8) {
            ctx->pc = 0x203D0Cu;
            goto label_203d0c;
        }
    }
    ctx->pc = 0x203BE0u;
label_203be0:
    // 0x203be0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x203be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203be4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x203be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203be8: 0xc08424a  jal         func_210928
    ctx->pc = 0x203BE8u;
    SET_GPR_U32(ctx, 31, 0x203BF0u);
    ctx->pc = 0x203BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203BE8u;
    // 0x203bec: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210928u, 0x203BE8u, 0x203BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203BF0u;
label_203bf0:
    // 0x203bf0: 0x97a30030  lhu         $v1, 0x30($sp)
    ctx->pc = 0x203bf0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x203bf4: 0x24020101  addiu       $v0, $zero, 0x101
    ctx->pc = 0x203bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x203bf8: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x203BF8u;
    {
        const bool branch_taken_0x203bf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x203BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203BF8u;
        // 0x203bfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203bf8) {
            ctx->pc = 0x203C60u;
            goto label_203c60;
        }
    }
    ctx->pc = 0x203C00u;
    // 0x203c00: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x203c00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x203c04: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x203c04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x203c08: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x203c08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x203c0c: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x203c0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x203c10: 0x6ba40017  ldl         $a0, 0x17($sp)
    ctx->pc = 0x203c10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x203c14: 0x6fa40010  ldr         $a0, 0x10($sp)
    ctx->pc = 0x203c14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x203c18: 0x6ba5001f  ldl         $a1, 0x1F($sp)
    ctx->pc = 0x203c18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x203c1c: 0x6fa50018  ldr         $a1, 0x18($sp)
    ctx->pc = 0x203c1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x203c20: 0xb2620007  sdl         $v0, 0x7($s3)
    ctx->pc = 0x203c20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x203c24: 0xb6620000  sdr         $v0, 0x0($s3)
    ctx->pc = 0x203c24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x203c28: 0xb263000f  sdl         $v1, 0xF($s3)
    ctx->pc = 0x203c28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x203c2c: 0xb6630008  sdr         $v1, 0x8($s3)
    ctx->pc = 0x203c2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x203c30: 0xb2640017  sdl         $a0, 0x17($s3)
    ctx->pc = 0x203c30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x203c34: 0xb6640010  sdr         $a0, 0x10($s3)
    ctx->pc = 0x203c34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x203c38: 0xb265001f  sdl         $a1, 0x1F($s3)
    ctx->pc = 0x203c38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x203c3c: 0xb6650018  sdr         $a1, 0x18($s3)
    ctx->pc = 0x203c3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x203c40: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x203c40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x203c44: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x203c44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x203c48: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x203c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x203c4c: 0xb2620027  sdl         $v0, 0x27($s3)
    ctx->pc = 0x203c4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x203c50: 0xb6620020  sdr         $v0, 0x20($s3)
    ctx->pc = 0x203c50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x203c54: 0xae630028  sw          $v1, 0x28($s3)
    ctx->pc = 0x203c54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 3));
    // 0x203c58: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x203C58u;
    {
        const bool branch_taken_0x203c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C58u;
        // 0x203c5c: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203c58) {
            ctx->pc = 0x203D08u;
            goto label_203d08;
        }
    }
    ctx->pc = 0x203C60u;
label_203c60:
    // 0x203c60: 0xc080f4a  jal         func_203D28
    ctx->pc = 0x203C60u;
    SET_GPR_U32(ctx, 31, 0x203C68u);
    ctx->pc = 0x203D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D28u, 0x203C60u, 0x203C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203C68u;
label_203c68:
    // 0x203c68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x203c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203c6c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x203c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x203c70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x203c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203c74: 0x8faa0044  lw          $t2, 0x44($sp)
    ctx->pc = 0x203c74u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x203c78: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x203c78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203c7c: 0x8fa70050  lw          $a3, 0x50($sp)
    ctx->pc = 0x203c7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x203c80: 0x8fa8005c  lw          $t0, 0x5C($sp)
    ctx->pc = 0x203c80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x203c84: 0x83a90058  lb          $t1, 0x58($sp)
    ctx->pc = 0x203c84u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x203c88: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x203c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x203c8c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x203c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x203c90: 0xafaa0008  sw          $t2, 0x8($sp)
    ctx->pc = 0x203c90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
    // 0x203c94: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x203c94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
    // 0x203c98: 0xafa80024  sw          $t0, 0x24($sp)
    ctx->pc = 0x203c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 8));
    // 0x203c9c: 0xc0813b0  jal         func_204EC0
    ctx->pc = 0x203C9Cu;
    SET_GPR_U32(ctx, 31, 0x203CA4u);
    ctx->pc = 0x203CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203C9Cu;
    // 0x203ca0: 0xafa90028  sw          $t1, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204EC0u, 0x203C9Cu, 0x203CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203CA4u;
label_203ca4:
    // 0x203ca4: 0xc080f5e  jal         func_203D78
    ctx->pc = 0x203CA4u;
    SET_GPR_U32(ctx, 31, 0x203CACu);
    ctx->pc = 0x203CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203CA4u;
    // 0x203ca8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D78u, 0x203CA4u, 0x203CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203CACu;
label_203cac:
    // 0x203cac: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x203cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x203cb0: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x203cb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x203cb4: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x203cb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x203cb8: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x203cb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x203cbc: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x203cbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x203cc0: 0x6ba40017  ldl         $a0, 0x17($sp)
    ctx->pc = 0x203cc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x203cc4: 0x6fa40010  ldr         $a0, 0x10($sp)
    ctx->pc = 0x203cc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x203cc8: 0x6ba5001f  ldl         $a1, 0x1F($sp)
    ctx->pc = 0x203cc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x203ccc: 0x6fa50018  ldr         $a1, 0x18($sp)
    ctx->pc = 0x203cccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x203cd0: 0xb2620007  sdl         $v0, 0x7($s3)
    ctx->pc = 0x203cd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x203cd4: 0xb6620000  sdr         $v0, 0x0($s3)
    ctx->pc = 0x203cd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x203cd8: 0xb263000f  sdl         $v1, 0xF($s3)
    ctx->pc = 0x203cd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x203cdc: 0xb6630008  sdr         $v1, 0x8($s3)
    ctx->pc = 0x203cdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x203ce0: 0xb2640017  sdl         $a0, 0x17($s3)
    ctx->pc = 0x203ce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x203ce4: 0xb6640010  sdr         $a0, 0x10($s3)
    ctx->pc = 0x203ce4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x203ce8: 0xb265001f  sdl         $a1, 0x1F($s3)
    ctx->pc = 0x203ce8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x203cec: 0xb6650018  sdr         $a1, 0x18($s3)
    ctx->pc = 0x203cecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x203cf0: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x203cf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x203cf4: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x203cf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x203cf8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x203cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x203cfc: 0xb2620027  sdl         $v0, 0x27($s3)
    ctx->pc = 0x203cfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x203d00: 0xb6620020  sdr         $v0, 0x20($s3)
    ctx->pc = 0x203d00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x203d04: 0xae630028  sw          $v1, 0x28($s3)
    ctx->pc = 0x203d04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 3));
label_203d08:
    // 0x203d08: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x203d08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_203d0c:
    // 0x203d0c: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x203d0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x203d10: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x203d10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x203d14: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x203d14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x203d18: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x203d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x203d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x203D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D1Cu;
        // 0x203d20: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203D24u;
}
