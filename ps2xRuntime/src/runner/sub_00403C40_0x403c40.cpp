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

// Function: sub_00403C40
// Address: 0x403c40 - 0x403de0
void sub_00403C40_0x403c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00403C40_0x403c40");
#endif

    switch (ctx->pc) {
        case 0x403c78u: goto label_403c78;
        case 0x403cf0u: goto label_403cf0;
        case 0x403d80u: goto label_403d80;
        case 0x403dacu: goto label_403dac;
        default: break;
    }

    ctx->pc = 0x403c40u;

    // 0x403c40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x403c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x403c44: 0x3c0c8007  lui         $t4, 0x8007
    ctx->pc = 0x403c44u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)32775 << 16));
    // 0x403c48: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x403c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x403c4c: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x403c4cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403c50: 0x8d826700  lw          $v0, 0x6700($t4)
    ctx->pc = 0x403c50u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x80076700u));
    // 0x403c54: 0x180882d  daddu       $s1, $t4, $zero
    ctx->pc = 0x403c54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403c58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x403c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x403c5c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x403c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x403c60: 0x18400058  blez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x403C60u;
    {
        const bool branch_taken_0x403c60 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x403C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403C60u;
        // 0x403c64: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403c60) {
            ctx->pc = 0x403DC4u;
            goto label_403dc4;
        }
    }
    ctx->pc = 0x403C68u;
    // 0x403c68: 0x18400056  blez        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x403C68u;
    {
        const bool branch_taken_0x403c68 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x403C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403C68u;
        // 0x403c6c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403c68) {
            ctx->pc = 0x403DC4u;
            goto label_403dc4;
        }
    }
    ctx->pc = 0x403C70u;
    // 0x403c70: 0x3c0b8007  lui         $t3, 0x8007
    ctx->pc = 0x403c70u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)32775 << 16));
    // 0x403c74: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x403c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_403c78:
    // 0x403c78: 0x25656740  addiu       $a1, $t3, 0x6740
    ctx->pc = 0x403c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 26432));
    // 0x403c7c: 0x1032018  mult        $a0, $t0, $v1
    ctx->pc = 0x403c7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x403c80: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x403c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x403c84: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x403c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x403c88: 0x15a3004a  bne         $t5, $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x403C88u;
    {
        const bool branch_taken_0x403c88 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 3));
        ctx->pc = 0x403C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403C88u;
        // 0x403c8c: 0x8d826700  lw          $v0, 0x6700($t4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 26368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403c88) {
            ctx->pc = 0x403DB4u;
            goto label_403db4;
        }
    }
    ctx->pc = 0x403C90u;
    // 0x403c90: 0x3c03b000  lui         $v1, 0xB000
    ctx->pc = 0x403c90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45056 << 16));
    // 0x403c94: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x403c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x403c98: 0x34631820  ori         $v1, $v1, 0x1820
    ctx->pc = 0x403c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6176);
    // 0x403c9c: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x403c9cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x403ca0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x403ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0xB0001820u));
    // 0x403ca4: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x403CA4u;
    {
        const bool branch_taken_0x403ca4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x403CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403CA4u;
        // 0x403ca8: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403ca4) {
            ctx->pc = 0x403CC8u;
            goto label_403cc8;
        }
    }
    ctx->pc = 0x403CACu;
    // 0x403cac: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x403cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x403cb0: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x403cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x403cb4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x403cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F000u)); // MMIO: 0x1000f000
    // 0x403cb8: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x403cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x403cbc: 0x14600043  bnez        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x403CBCu;
    {
        const bool branch_taken_0x403cbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x403CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403CBCu;
        // 0x403cc0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403cbc) {
            ctx->pc = 0x403DCCu;
            goto label_403dcc;
        }
    }
    ctx->pc = 0x403CC4u;
    // 0x403cc4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x403cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_403cc8:
    // 0x403cc8: 0x8d896700  lw          $t1, 0x6700($t4)
    ctx->pc = 0x403cc8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 26368)));
    // 0x403ccc: 0x1031818  mult        $v1, $t0, $v1
    ctx->pc = 0x403cccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x403cd0: 0x25646740  addiu       $a0, $t3, 0x6740
    ctx->pc = 0x403cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 26432));
    // 0x403cd4: 0x2522ffff  addiu       $v0, $t1, -0x1
    ctx->pc = 0x403cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x403cd8: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x403cd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403cdc: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x403cdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x403ce0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x403ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x403ce4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x403CE4u;
    {
        const bool branch_taken_0x403ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x403CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403CE4u;
        // 0x403ce8: 0x94700002  lhu         $s0, 0x2($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403ce4) {
            ctx->pc = 0x403D4Cu;
            goto label_403d4c;
        }
    }
    ctx->pc = 0x403CECu;
    // 0x403cec: 0x3c0a8007  lui         $t2, 0x8007
    ctx->pc = 0x403cecu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32775 << 16));
label_403cf0:
    // 0x403cf0: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x403cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x403cf4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x403cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x403cf8: 0x651018  mult        $v0, $v1, $a1
    ctx->pc = 0x403cf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x403cfc: 0xe52018  mult        $a0, $a3, $a1
    ctx->pc = 0x403cfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x403d00: 0x25666740  addiu       $a2, $t3, 0x6740
    ctx->pc = 0x403d00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 26432));
    // 0x403d04: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x403d04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403d08: 0x462821  addu        $a1, $v0, $a2
    ctx->pc = 0x403d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x403d0c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x403d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x403d10: 0x2522ffff  addiu       $v0, $t1, -0x1
    ctx->pc = 0x403d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x403d14: 0x68a30007  ldl         $v1, 0x7($a1)
    ctx->pc = 0x403d14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x403d18: 0x6ca30000  ldr         $v1, 0x0($a1)
    ctx->pc = 0x403d18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x403d1c: 0x68a6000f  ldl         $a2, 0xF($a1)
    ctx->pc = 0x403d1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x403d20: 0x6ca60008  ldr         $a2, 0x8($a1)
    ctx->pc = 0x403d20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x403d24: 0x8cae0010  lw          $t6, 0x10($a1)
    ctx->pc = 0x403d24u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x403d28: 0xb0830007  sdl         $v1, 0x7($a0)
    ctx->pc = 0x403d28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x403d2c: 0xb4830000  sdr         $v1, 0x0($a0)
    ctx->pc = 0x403d2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x403d30: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x403d30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x403d34: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x403d34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x403d38: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x403d38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x403d3c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x403D3Cu;
    {
        const bool branch_taken_0x403d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x403D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403D3Cu;
        // 0x403d40: 0xac8e0010  sw          $t6, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403d3c) {
            ctx->pc = 0x403CF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_403cf0;
        }
    }
    ctx->pc = 0x403D44u;
    // 0x403d44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x403D44u;
    {
        const bool branch_taken_0x403d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x403D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403D44u;
        // 0x403d48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403d44) {
            ctx->pc = 0x403D54u;
            goto label_403d54;
        }
    }
    ctx->pc = 0x403D4Cu;
label_403d4c:
    // 0x403d4c: 0x3c0a8007  lui         $t2, 0x8007
    ctx->pc = 0x403d4cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32775 << 16));
    // 0x403d50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x403d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_403d54:
    // 0x403d54: 0x8d846700  lw          $a0, 0x6700($t4)
    ctx->pc = 0x403d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 26368)));
    // 0x403d58: 0xdd436708  ld          $v1, 0x6708($t2)
    ctx->pc = 0x403d58u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 10), 26376)));
    // 0x403d5c: 0x1a21014  dsllv       $v0, $v0, $t5
    ctx->pc = 0x403d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 13) & 0x3F));
    // 0x403d60: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x403d60u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x403d64: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x403d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x403d68: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x403d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x403d6c: 0xad846700  sw          $a0, 0x6700($t4)
    ctx->pc = 0x403d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 26368), GPR_U32(ctx, 4));
    // 0x403d70: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x403D70u;
    {
        const bool branch_taken_0x403d70 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x403D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403D70u;
        // 0x403d74: 0xfd436708  sd          $v1, 0x6708($t2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 10), 26376), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403d70) {
            ctx->pc = 0x403D80u;
            goto label_403d80;
        }
    }
    ctx->pc = 0x403D78u;
    // 0x403d78: 0xc01d918  jal         func_076460
    ctx->pc = 0x403D78u;
    SET_GPR_U32(ctx, 31, 0x403D80u);
    ctx->pc = 0x403D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403D78u;
    // 0x403d7c: 0x95646740  lhu         $a0, 0x6740($t3) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 26432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x76460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x76460u, 0x403D78u, 0x403D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403D80u;
label_403d80:
    // 0x403d80: 0x8e226700  lw          $v0, 0x6700($s1)
    ctx->pc = 0x403d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26368)));
    // 0x403d84: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x403D84u;
    {
        const bool branch_taken_0x403d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x403D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403D84u;
        // 0x403d88: 0x24030083  addiu       $v1, $zero, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403d84) {
            ctx->pc = 0x403D98u;
            goto label_403d98;
        }
    }
    ctx->pc = 0x403D8Cu;
    // 0x403d8c: 0x3c02b000  lui         $v0, 0xB000
    ctx->pc = 0x403d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45056 << 16));
    // 0x403d90: 0x34421810  ori         $v0, $v0, 0x1810
    ctx->pc = 0x403d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6160);
    // 0x403d94: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x403d94u;
    runtime->Store32(rdram, ctx, 0xB0001810u, GPR_U32(ctx, 3));
label_403d98:
    // 0x403d98: 0x3c02b000  lui         $v0, 0xB000
    ctx->pc = 0x403d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45056 << 16));
    // 0x403d9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x403d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403da0: 0x34421800  ori         $v0, $v0, 0x1800
    ctx->pc = 0x403da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6144);
    // 0x403da4: 0xc01d80e  jal         func_076038
    ctx->pc = 0x403DA4u;
    SET_GPR_U32(ctx, 31, 0x403DACu);
    ctx->pc = 0x403DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403DA4u;
    // 0x403da8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x76038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x76038u, 0x403DA4u, 0x403DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403DACu;
label_403dac:
    // 0x403dac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x403DACu;
    {
        const bool branch_taken_0x403dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x403DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403DACu;
        // 0x403db0: 0x503023  subu        $a2, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403dac) {
            ctx->pc = 0x403DC4u;
            goto label_403dc4;
        }
    }
    ctx->pc = 0x403DB4u;
label_403db4:
    // 0x403db4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x403db4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x403db8: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x403db8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x403dbc: 0x1440ffae  bnez        $v0, . + 4 + (-0x52 << 2)
    ctx->pc = 0x403DBCu;
    {
        const bool branch_taken_0x403dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x403DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403DBCu;
        // 0x403dc0: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403dbc) {
            ctx->pc = 0x403C78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_403c78;
        }
    }
    ctx->pc = 0x403DC4u;
label_403dc4:
    // 0x403dc4: 0xf  sync
    ctx->pc = 0x403dc4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x403dc8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x403dc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_403dcc:
    // 0x403dcc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x403dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x403dd0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x403dd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x403dd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x403dd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x403dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x403DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x403DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403DD8u;
        // 0x403ddc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x403DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x403DE0u;
}
