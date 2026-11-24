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

// Function: sub_00116BB0
// Address: 0x116bb0 - 0x116db8
void sub_00116BB0_0x116bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116BB0_0x116bb0");
#endif

    switch (ctx->pc) {
        case 0x116be8u: goto label_116be8;
        case 0x116bf8u: goto label_116bf8;
        case 0x116c44u: goto label_116c44;
        case 0x116ca8u: goto label_116ca8;
        case 0x116d38u: goto label_116d38;
        case 0x116d74u: goto label_116d74;
        default: break;
    }

    ctx->pc = 0x116bb0u;

    // 0x116bb0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x116bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x116bb4: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x116bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x116bb8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x116bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x116bbc: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x116bbcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116bc0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x116bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x116bc4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x116bc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116bc8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x116bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x116bcc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x116bccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116bd0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x116bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x116bd4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x116bd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116bd8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x116bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x116bdc: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x116bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x116be0: 0xc0459f8  jal         func_1167E0
    ctx->pc = 0x116BE0u;
    SET_GPR_U32(ctx, 31, 0x116BE8u);
    ctx->pc = 0x116BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116BE0u;
    // 0x116be4: 0xffb20030  sd          $s2, 0x30($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1167E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1167E0u, 0x116BE0u, 0x116BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116BE8u;
label_116be8:
    // 0x116be8: 0x4400069  bltz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x116BE8u;
    {
        const bool branch_taken_0x116be8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x116BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116BE8u;
        // 0x116bec: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116be8) {
            ctx->pc = 0x116D90u;
            goto label_116d90;
        }
    }
    ctx->pc = 0x116BF0u;
    // 0x116bf0: 0xc045a38  jal         func_1168E0
    ctx->pc = 0x116BF0u;
    SET_GPR_U32(ctx, 31, 0x116BF8u);
    ctx->pc = 0x1168E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1168E0u, 0x116BF0u, 0x116BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116BF8u;
label_116bf8:
    // 0x116bf8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x116BF8u;
    {
        const bool branch_taken_0x116bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116BF8u;
        // 0x116bfc: 0x3c140069  lui         $s4, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116bf8) {
            ctx->pc = 0x116C0Cu;
            goto label_116c0c;
        }
    }
    ctx->pc = 0x116C00u;
    // 0x116c00: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x116c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x116c04: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x116C04u;
    {
        const bool branch_taken_0x116c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116C04u;
        // 0x116c08: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x116c04) {
            ctx->pc = 0x116D90u;
            goto label_116d90;
        }
    }
    ctx->pc = 0x116C0Cu;
label_116c0c:
    // 0x116c0c: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x116c0cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116c10: 0x26920640  addiu       $s2, $s4, 0x640
    ctx->pc = 0x116c10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1600));
    // 0x116c14: 0x1200004a  beqz        $s0, . + 4 + (0x4A << 2)
    ctx->pc = 0x116C14u;
    {
        const bool branch_taken_0x116c14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x116C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116C14u;
        // 0x116c18: 0xae930640  sw          $s3, 0x640($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1600), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116c14) {
            ctx->pc = 0x116D40u;
            goto label_116d40;
        }
    }
    ctx->pc = 0x116C1Cu;
    // 0x116c1c: 0x2a2200fd  slti        $v0, $s1, 0xFD
    ctx->pc = 0x116c1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)253) ? 1 : 0);
    // 0x116c20: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x116C20u;
    {
        const bool branch_taken_0x116c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x116C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116C20u;
        // 0x116c24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116c20) {
            ctx->pc = 0x116D2Cu;
            goto label_116d2c;
        }
    }
    ctx->pc = 0x116C28u;
    // 0x116c28: 0x26440104  addiu       $a0, $s2, 0x104
    ctx->pc = 0x116c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 260));
    // 0x116c2c: 0x2041025  or          $v0, $s0, $a0
    ctx->pc = 0x116c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x116c30: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x116c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x116c34: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x116C34u;
    {
        const bool branch_taken_0x116c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116C34u;
        // 0x116c38: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116c34) {
            ctx->pc = 0x116CA0u;
            goto label_116ca0;
        }
    }
    ctx->pc = 0x116C3Cu;
    // 0x116c3c: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x116c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x116c40: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x116c40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_116c44:
    // 0x116c44: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x116c44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x116c48: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x116c48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x116c4c: 0x68e6000f  ldl         $a2, 0xF($a3)
    ctx->pc = 0x116c4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x116c50: 0x6ce60008  ldr         $a2, 0x8($a3)
    ctx->pc = 0x116c50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x116c54: 0x68e80017  ldl         $t0, 0x17($a3)
    ctx->pc = 0x116c54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x116c58: 0x6ce80010  ldr         $t0, 0x10($a3)
    ctx->pc = 0x116c58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x116c5c: 0x68e9001f  ldl         $t1, 0x1F($a3)
    ctx->pc = 0x116c5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x116c60: 0x6ce90018  ldr         $t1, 0x18($a3)
    ctx->pc = 0x116c60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x116c64: 0xb0830007  sdl         $v1, 0x7($a0)
    ctx->pc = 0x116c64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x116c68: 0xb4830000  sdr         $v1, 0x0($a0)
    ctx->pc = 0x116c68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x116c6c: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x116c6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x116c70: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x116c70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x116c74: 0xb0880017  sdl         $t0, 0x17($a0)
    ctx->pc = 0x116c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x116c78: 0xb4880010  sdr         $t0, 0x10($a0)
    ctx->pc = 0x116c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x116c7c: 0xb089001f  sdl         $t1, 0x1F($a0)
    ctx->pc = 0x116c7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x116c80: 0xb4890018  sdr         $t1, 0x18($a0)
    ctx->pc = 0x116c80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x116c84: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x116c84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x116c88: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x116c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x116c8c: 0x0  nop
    ctx->pc = 0x116c8cu;
    // NOP
    // 0x116c90: 0x14e2ffec  bne         $a3, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x116C90u;
    {
        const bool branch_taken_0x116c90 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x116c90) {
            ctx->pc = 0x116C44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116c44;
        }
    }
    ctx->pc = 0x116C98u;
    // 0x116c98: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x116C98u;
    {
        const bool branch_taken_0x116c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x116c98) {
            ctx->pc = 0x116CDCu;
            goto label_116cdc;
        }
    }
    ctx->pc = 0x116CA0u;
label_116ca0:
    // 0x116ca0: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x116ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x116ca4: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x116ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_116ca8:
    // 0x116ca8: 0xdcea0000  ld          $t2, 0x0($a3)
    ctx->pc = 0x116ca8u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x116cac: 0xdce30008  ld          $v1, 0x8($a3)
    ctx->pc = 0x116cacu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x116cb0: 0xdce60010  ld          $a2, 0x10($a3)
    ctx->pc = 0x116cb0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x116cb4: 0xdce80018  ld          $t0, 0x18($a3)
    ctx->pc = 0x116cb4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x116cb8: 0xfc8a0000  sd          $t2, 0x0($a0)
    ctx->pc = 0x116cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 10));
    // 0x116cbc: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x116cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x116cc0: 0xfc860010  sd          $a2, 0x10($a0)
    ctx->pc = 0x116cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 6));
    // 0x116cc4: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x116cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x116cc8: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x116cc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x116ccc: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x116cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x116cd0: 0x0  nop
    ctx->pc = 0x116cd0u;
    // NOP
    // 0x116cd4: 0x14e2fff4  bne         $a3, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x116CD4u;
    {
        const bool branch_taken_0x116cd4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x116cd4) {
            ctx->pc = 0x116CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116ca8;
        }
    }
    ctx->pc = 0x116CDCu;
label_116cdc:
    // 0x116cdc: 0x68e90007  ldl         $t1, 0x7($a3)
    ctx->pc = 0x116cdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x116ce0: 0x6ce90000  ldr         $t1, 0x0($a3)
    ctx->pc = 0x116ce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x116ce4: 0x68ea000f  ldl         $t2, 0xF($a3)
    ctx->pc = 0x116ce4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x116ce8: 0x6cea0008  ldr         $t2, 0x8($a3)
    ctx->pc = 0x116ce8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x116cec: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x116cecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x116cf0: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x116cf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x116cf4: 0x88e8001b  lwl         $t0, 0x1B($a3)
    ctx->pc = 0x116cf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
    // 0x116cf8: 0x98e80018  lwr         $t0, 0x18($a3)
    ctx->pc = 0x116cf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x116cfc: 0xb0890007  sdl         $t1, 0x7($a0)
    ctx->pc = 0x116cfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x116d00: 0xb4890000  sdr         $t1, 0x0($a0)
    ctx->pc = 0x116d00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x116d04: 0xb08a000f  sdl         $t2, 0xF($a0)
    ctx->pc = 0x116d04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x116d08: 0xb48a0008  sdr         $t2, 0x8($a0)
    ctx->pc = 0x116d08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x116d0c: 0xb0860017  sdl         $a2, 0x17($a0)
    ctx->pc = 0x116d0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x116d10: 0xb4860010  sdr         $a2, 0x10($a0)
    ctx->pc = 0x116d10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x116d14: 0xa888001b  swl         $t0, 0x1B($a0)
    ctx->pc = 0x116d14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x116d18: 0x26a30640  addiu       $v1, $s5, 0x640
    ctx->pc = 0x116d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1600));
    // 0x116d1c: 0x240200fc  addiu       $v0, $zero, 0xFC
    ctx->pc = 0x116d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x116d20: 0xb8880018  swr         $t0, 0x18($a0)
    ctx->pc = 0x116d20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x116d24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x116D24u;
    {
        const bool branch_taken_0x116d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D24u;
        // 0x116d28: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116d24) {
            ctx->pc = 0x116D48u;
            goto label_116d48;
        }
    }
    ctx->pc = 0x116D2Cu;
label_116d2c:
    // 0x116d2c: 0x26440104  addiu       $a0, $s2, 0x104
    ctx->pc = 0x116d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 260));
    // 0x116d30: 0xc049522  jal         func_125488
    ctx->pc = 0x116D30u;
    SET_GPR_U32(ctx, 31, 0x116D38u);
    ctx->pc = 0x116D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116D30u;
    // 0x116d34: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x116D30u, 0x116D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116D38u;
label_116d38:
    // 0x116d38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x116D38u;
    {
        const bool branch_taken_0x116d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D38u;
        // 0x116d3c: 0xae510004  sw          $s1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116d38) {
            ctx->pc = 0x116D44u;
            goto label_116d44;
        }
    }
    ctx->pc = 0x116D40u;
label_116d40:
    // 0x116d40: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x116d40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_116d44:
    // 0x116d44: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x116d44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_116d48:
    // 0x116d48: 0x26b00640  addiu       $s0, $s5, 0x640
    ctx->pc = 0x116d48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 1600));
    // 0x116d4c: 0x24a40840  addiu       $a0, $a1, 0x840
    ctx->pc = 0x116d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 2112));
    // 0x116d50: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x116d50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x116d54: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x116d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x116d58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x116d58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116d5c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x116d5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116d60: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x116d60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x116d64: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x116d64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116d68: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x116d68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x116d6c: 0xc0447ca  jal         func_111F28
    ctx->pc = 0x116D6Cu;
    SET_GPR_U32(ctx, 31, 0x116D74u);
    ctx->pc = 0x116D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116D6Cu;
    // 0x116d70: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F28u, 0x116D6Cu, 0x116D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116D74u;
label_116d74:
    // 0x116d74: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x116D74u;
    {
        const bool branch_taken_0x116d74 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x116d74) {
            ctx->pc = 0x116D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116D74u;
            // 0x116d78: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116D88u;
            goto label_116d88;
        }
    }
    ctx->pc = 0x116D7Cu;
    // 0x116d7c: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x116d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x116d80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x116D80u;
    {
        const bool branch_taken_0x116d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D80u;
        // 0x116d84: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x116d80) {
            ctx->pc = 0x116D90u;
            goto label_116d90;
        }
    }
    ctx->pc = 0x116D88u;
label_116d88:
    // 0x116d88: 0x8e820640  lw          $v0, 0x640($s4)
    ctx->pc = 0x116d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1600)));
    // 0x116d8c: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x116d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
label_116d90:
    // 0x116d90: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x116d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x116d94: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x116d94u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x116d98: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x116d98u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x116d9c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x116d9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x116da0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x116da0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x116da4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x116da4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x116da8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x116da8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x116dac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x116dacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116db0: 0x3e00008  jr          $ra
    ctx->pc = 0x116DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116DB0u;
        // 0x116db4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116DB8u;
}
