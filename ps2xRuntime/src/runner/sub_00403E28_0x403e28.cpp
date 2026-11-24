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

// Function: sub_00403E28
// Address: 0x403e28 - 0x404008
void sub_00403E28_0x403e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00403E28_0x403e28");
#endif

    switch (ctx->pc) {
        case 0x403e60u: goto label_403e60;
        case 0x403e94u: goto label_403e94;
        case 0x403eb0u: goto label_403eb0;
        case 0x403f10u: goto label_403f10;
        case 0x403f9cu: goto label_403f9c;
        case 0x403fc0u: goto label_403fc0;
        default: break;
    }

    ctx->pc = 0x403e28u;

    // 0x403e28: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x403e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x403e2c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x403e2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403e30: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x403e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x403e34: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x403e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x403e38: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x403e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x403e3c: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x403e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x403e40: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x403e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x403e44: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x403e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x403e48: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x403e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x403e4c: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x403e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x403e50: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x403e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x403e54: 0x3c118007  lui         $s1, 0x8007
    ctx->pc = 0x403e54u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32775 << 16));
    // 0x403e58: 0x3c128007  lui         $s2, 0x8007
    ctx->pc = 0x403e58u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32775 << 16));
    // 0x403e5c: 0x0  nop
    ctx->pc = 0x403e5cu;
    // NOP
label_403e60:
    // 0x403e60: 0x8e226700  lw          $v0, 0x6700($s1)
    ctx->pc = 0x403e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26368)));
    // 0x403e64: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x403e64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x403e68: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x403E68u;
    {
        const bool branch_taken_0x403e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x403E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403E68u;
        // 0x403e6c: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403e68) {
            ctx->pc = 0x403E94u;
            goto label_403e94;
        }
    }
    ctx->pc = 0x403E70u;
    // 0x403e70: 0x26446740  addiu       $a0, $s2, 0x6740
    ctx->pc = 0x403e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 26432));
    // 0x403e74: 0x1031818  mult        $v1, $t0, $v1
    ctx->pc = 0x403e74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x403e78: 0x96456740  lhu         $a1, 0x6740($s2)
    ctx->pc = 0x403e78u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 26432)));
    // 0x403e7c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x403e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x403e80: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x403e80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x403e84: 0x10a2fff6  beq         $a1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x403E84u;
    {
        const bool branch_taken_0x403e84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x403E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403E84u;
        // 0x403e88: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403e84) {
            ctx->pc = 0x403E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_403e60;
        }
    }
    ctx->pc = 0x403E8Cu;
    // 0x403e8c: 0xc01d918  jal         func_076460
    ctx->pc = 0x403E8Cu;
    SET_GPR_U32(ctx, 31, 0x403E94u);
    ctx->pc = 0x403E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403E8Cu;
    // 0x403e90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x76460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x76460u, 0x403E8Cu, 0x403E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403E94u;
label_403e94:
    // 0x403e94: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x403e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
    // 0x403e98: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x403e98u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403e9c: 0x24546740  addiu       $s4, $v0, 0x6740
    ctx->pc = 0x403e9cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 26432));
    // 0x403ea0: 0x24130014  addiu       $s3, $zero, 0x14
    ctx->pc = 0x403ea0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x403ea4: 0x3c158007  lui         $s5, 0x8007
    ctx->pc = 0x403ea4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32775 << 16));
    // 0x403ea8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x403EA8u;
    {
        const bool branch_taken_0x403ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x403EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403EA8u;
        // 0x403eac: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403ea8) {
            ctx->pc = 0x403EBCu;
            goto label_403ebc;
        }
    }
    ctx->pc = 0x403EB0u;
label_403eb0:
    // 0x403eb0: 0x96426740  lhu         $v0, 0x6740($s2)
    ctx->pc = 0x403eb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 26432)));
    // 0x403eb4: 0x1462003e  bne         $v1, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x403EB4u;
    {
        const bool branch_taken_0x403eb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x403EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403EB4u;
        // 0x403eb8: 0x8e226700  lw          $v0, 0x6700($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403eb4) {
            ctx->pc = 0x403FB0u;
            goto label_403fb0;
        }
    }
    ctx->pc = 0x403EBCu;
label_403ebc:
    // 0x403ebc: 0x8ec26700  lw          $v0, 0x6700($s6)
    ctx->pc = 0x403ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 26368)));
    // 0x403ec0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x403ec0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403ec4: 0x26466740  addiu       $a2, $s2, 0x6740
    ctx->pc = 0x403ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 26432));
    // 0x403ec8: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x403ec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x403ecc: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x403eccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x403ed0: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x403ed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x403ed4: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x403ed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x403ed8: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x403ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x403edc: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x403edcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x403ee0: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x403ee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x403ee4: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x403ee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x403ee8: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x403ee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x403eec: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x403eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x403ef0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x403ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x403ef4: 0x1840001a  blez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x403EF4u;
    {
        const bool branch_taken_0x403ef4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x403EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403EF4u;
        // 0x403ef8: 0xaec26700  sw          $v0, 0x6700($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 26368), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403ef4) {
            ctx->pc = 0x403F60u;
            goto label_403f60;
        }
    }
    ctx->pc = 0x403EFCu;
    // 0x403efc: 0x8e296700  lw          $t1, 0x6700($s1)
    ctx->pc = 0x403efcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26368)));
    // 0x403f00: 0x8faa0010  lw          $t2, 0x10($sp)
    ctx->pc = 0x403f00u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x403f04: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x403f04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x403f08: 0x97a70000  lhu         $a3, 0x0($sp)
    ctx->pc = 0x403f08u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x403f0c: 0x0  nop
    ctx->pc = 0x403f0cu;
    // NOP
label_403f10:
    // 0x403f10: 0x1131818  mult        $v1, $t0, $s3
    ctx->pc = 0x403f10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x403f14: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x403f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x403f18: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x403f18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403f1c: 0x742821  addu        $a1, $v1, $s4
    ctx->pc = 0x403f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x403f20: 0x531818  mult        $v1, $v0, $s3
    ctx->pc = 0x403f20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x403f24: 0x742021  addu        $a0, $v1, $s4
    ctx->pc = 0x403f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x403f28: 0x688b0007  ldl         $t3, 0x7($a0)
    ctx->pc = 0x403f28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x403f2c: 0x6c8b0000  ldr         $t3, 0x0($a0)
    ctx->pc = 0x403f2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x403f30: 0x688c000f  ldl         $t4, 0xF($a0)
    ctx->pc = 0x403f30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x403f34: 0x6c8c0008  ldr         $t4, 0x8($a0)
    ctx->pc = 0x403f34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x403f38: 0x8c8d0010  lw          $t5, 0x10($a0)
    ctx->pc = 0x403f38u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x403f3c: 0xb0ab0007  sdl         $t3, 0x7($a1)
    ctx->pc = 0x403f3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x403f40: 0xb4ab0000  sdr         $t3, 0x0($a1)
    ctx->pc = 0x403f40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x403f44: 0xb0ac000f  sdl         $t4, 0xF($a1)
    ctx->pc = 0x403f44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x403f48: 0xb4ac0008  sdr         $t4, 0x8($a1)
    ctx->pc = 0x403f48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x403f4c: 0x109182a  slt         $v1, $t0, $t1
    ctx->pc = 0x403f4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x403f50: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x403F50u;
    {
        const bool branch_taken_0x403f50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x403F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403F50u;
        // 0x403f54: 0xacad0010  sw          $t5, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403f50) {
            ctx->pc = 0x403F10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_403f10;
        }
    }
    ctx->pc = 0x403F58u;
    // 0x403f58: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x403F58u;
    {
        const bool branch_taken_0x403f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x403f58) {
            ctx->pc = 0x403F6Cu;
            goto label_403f6c;
        }
    }
    ctx->pc = 0x403F60u;
label_403f60:
    // 0x403f60: 0x8faa0010  lw          $t2, 0x10($sp)
    ctx->pc = 0x403f60u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x403f64: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x403f64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x403f68: 0x97a70000  lhu         $a3, 0x0($sp)
    ctx->pc = 0x403f68u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
label_403f6c:
    // 0x403f6c: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x403f6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403f70: 0x140e02d  daddu       $gp, $t2, $zero
    ctx->pc = 0x403f70u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403f74: 0xdea36708  ld          $v1, 0x6708($s5)
    ctx->pc = 0x403f74u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 26376)));
    // 0x403f78: 0xd71014  dsllv       $v0, $s7, $a2
    ctx->pc = 0x403f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) << (GPR_U32(ctx, 6) & 0x3F));
    // 0x403f7c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x403f7cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x403f80: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x403f80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x403f84: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x403f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x403f88: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x403f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x403f8c: 0x8fa8000c  lw          $t0, 0xC($sp)
    ctx->pc = 0x403f8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x403f90: 0x34842000  ori         $a0, $a0, 0x2000
    ctx->pc = 0x403f90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
    // 0x403f94: 0xc01d9a0  jal         func_076680
    ctx->pc = 0x403F94u;
    SET_GPR_U32(ctx, 31, 0x403F9Cu);
    ctx->pc = 0x403F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403F94u;
    // 0x403f98: 0xfea36708  sd          $v1, 0x6708($s5) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 21), 26376), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x76680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x76680u, 0x403F94u, 0x403F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403F9Cu;
label_403f9c:
    // 0x403f9c: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x403f9cu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403fa0: 0x8e226700  lw          $v0, 0x6700($s1)
    ctx->pc = 0x403fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26368)));
    // 0x403fa4: 0x1c40ffc2  bgtz        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x403FA4u;
    {
        const bool branch_taken_0x403fa4 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x403FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403FA4u;
        // 0x403fa8: 0x97a30000  lhu         $v1, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403fa4) {
            ctx->pc = 0x403EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_403eb0;
        }
    }
    ctx->pc = 0x403FACu;
    // 0x403fac: 0x8e226700  lw          $v0, 0x6700($s1)
    ctx->pc = 0x403facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26368)));
label_403fb0:
    // 0x403fb0: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x403FB0u;
    {
        const bool branch_taken_0x403fb0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x403FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403FB0u;
        // 0x403fb4: 0x24030483  addiu       $v1, $zero, 0x483 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1155));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403fb0) {
            ctx->pc = 0x403FC8u;
            goto label_403fc8;
        }
    }
    ctx->pc = 0x403FB8u;
    // 0x403fb8: 0xc01d918  jal         func_076460
    ctx->pc = 0x403FB8u;
    SET_GPR_U32(ctx, 31, 0x403FC0u);
    ctx->pc = 0x403FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403FB8u;
    // 0x403fbc: 0x96446740  lhu         $a0, 0x6740($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 26432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x76460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x76460u, 0x403FB8u, 0x403FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403FC0u;
label_403fc0:
    // 0x403fc0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x403FC0u;
    {
        const bool branch_taken_0x403fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x403fc0) {
            ctx->pc = 0x403FD4u;
            goto label_403fd4;
        }
    }
    ctx->pc = 0x403FC8u;
label_403fc8:
    // 0x403fc8: 0x3c02b000  lui         $v0, 0xB000
    ctx->pc = 0x403fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45056 << 16));
    // 0x403fcc: 0x34421810  ori         $v0, $v0, 0x1810
    ctx->pc = 0x403fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6160);
    // 0x403fd0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x403fd0u;
    runtime->Store32(rdram, ctx, 0xB0001810u, GPR_U32(ctx, 3));
label_403fd4:
    // 0x403fd4: 0xf  sync
    ctx->pc = 0x403fd4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x403fd8: 0x42000038  ei
    ctx->pc = 0x403fd8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x403fdc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x403fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x403fe0: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x403fe0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x403fe4: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x403fe4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x403fe8: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x403fe8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x403fec: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x403fecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x403ff0: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x403ff0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x403ff4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x403ff4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x403ff8: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x403ff8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x403ffc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x403ffcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x404000: 0x3e00008  jr          $ra
    ctx->pc = 0x404000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x404004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404000u;
        // 0x404004: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x404000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x404008u;
}
