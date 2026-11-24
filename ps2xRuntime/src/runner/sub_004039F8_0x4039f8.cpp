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

// Function: sub_004039F8
// Address: 0x4039f8 - 0x403afc
void sub_004039F8_0x4039f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004039F8_0x4039f8");
#endif

    switch (ctx->pc) {
        case 0x403a40u: goto label_403a40;
        case 0x403a58u: goto label_403a58;
        case 0x403a78u: goto label_403a78;
        default: break;
    }

    ctx->pc = 0x4039f8u;

    // 0x4039f8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4039f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x4039fc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x4039fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x403a00: 0x3c138007  lui         $s3, 0x8007
    ctx->pc = 0x403a00u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32775 << 16));
    // 0x403a04: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x403a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x403a08: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x403a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x403a0c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x403a0cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403a10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x403a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x403a14: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x403a14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403a18: 0x8e626700  lw          $v0, 0x6700($s3)
    ctx->pc = 0x403a18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x80076700u));
    // 0x403a1c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x403a1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403a20: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x403a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x403a24: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x403a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x403a28: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x403a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x403a2c: 0x18400028  blez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x403A2Cu;
    {
        const bool branch_taken_0x403a2c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x403A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403A2Cu;
        // 0x403a30: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403a2c) {
            ctx->pc = 0x403AD0u;
            goto label_403ad0;
        }
    }
    ctx->pc = 0x403A34u;
    // 0x403a34: 0x3c148007  lui         $s4, 0x8007
    ctx->pc = 0x403a34u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32775 << 16));
    // 0x403a38: 0x24120014  addiu       $s2, $zero, 0x14
    ctx->pc = 0x403a38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x403a3c: 0x0  nop
    ctx->pc = 0x403a3cu;
    // NOP
label_403a40:
    // 0x403a40: 0x26916740  addiu       $s1, $s4, 0x6740
    ctx->pc = 0x403a40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 26432));
    // 0x403a44: 0x2121018  mult        $v0, $s0, $s2
    ctx->pc = 0x403a44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x403a48: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x403a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403a4c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x403a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x403a50: 0xc01d80e  jal         func_076038
    ctx->pc = 0x403A50u;
    SET_GPR_U32(ctx, 31, 0x403A58u);
    ctx->pc = 0x403A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403A50u;
    // 0x403a54: 0x94450000  lhu         $a1, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x76038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x76038u, 0x403A50u, 0x403A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403A58u;
label_403a58:
    // 0x403a58: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x403a58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x403a5c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x403A5Cu;
    {
        const bool branch_taken_0x403a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x403A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403A5Cu;
        // 0x403a60: 0x8e626700  lw          $v0, 0x6700($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403a5c) {
            ctx->pc = 0x403AC0u;
            goto label_403ac0;
        }
    }
    ctx->pc = 0x403A64u;
    // 0x403a64: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x403a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x403a68: 0x90182a  slt         $v1, $a0, $s0
    ctx->pc = 0x403a68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x403a6c: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x403A6Cu;
    {
        const bool branch_taken_0x403a6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x403A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403A6Cu;
        // 0x403a70: 0x921018  mult        $v0, $a0, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x403a6c) {
            ctx->pc = 0x403AD0u;
            goto label_403ad0;
        }
    }
    ctx->pc = 0x403A74u;
    // 0x403a74: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x403a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_403a78:
    // 0x403a78: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x403a78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x403a7c: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x403a7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x403a80: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x403a80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x403a84: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x403a84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x403a88: 0x8c670010  lw          $a3, 0x10($v1)
    ctx->pc = 0x403a88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x403a8c: 0xb065001b  sdl         $a1, 0x1B($v1)
    ctx->pc = 0x403a8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x403a90: 0xb4650014  sdr         $a1, 0x14($v1)
    ctx->pc = 0x403a90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x403a94: 0xb0660023  sdl         $a2, 0x23($v1)
    ctx->pc = 0x403a94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x403a98: 0xb466001c  sdr         $a2, 0x1C($v1)
    ctx->pc = 0x403a98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x403a9c: 0xac670024  sw          $a3, 0x24($v1)
    ctx->pc = 0x403a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 7));
    // 0x403aa0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x403aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x403aa4: 0x2463ffec  addiu       $v1, $v1, -0x14
    ctx->pc = 0x403aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x403aa8: 0x90102a  slt         $v0, $a0, $s0
    ctx->pc = 0x403aa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x403aac: 0x0  nop
    ctx->pc = 0x403aacu;
    // NOP
    // 0x403ab0: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x403AB0u;
    {
        const bool branch_taken_0x403ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x403ab0) {
            ctx->pc = 0x403A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_403a78;
        }
    }
    ctx->pc = 0x403AB8u;
    // 0x403ab8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x403AB8u;
    {
        const bool branch_taken_0x403ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x403ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403AB8u;
        // 0x403abc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403ab8) {
            ctx->pc = 0x403AD4u;
            goto label_403ad4;
        }
    }
    ctx->pc = 0x403AC0u;
label_403ac0:
    // 0x403ac0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x403ac0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x403ac4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x403ac4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x403ac8: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x403AC8u;
    {
        const bool branch_taken_0x403ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x403ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403AC8u;
        // 0x403acc: 0x24120014  addiu       $s2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403ac8) {
            ctx->pc = 0x403A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_403a40;
        }
    }
    ctx->pc = 0x403AD0u;
label_403ad0:
    // 0x403ad0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x403ad0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_403ad4:
    // 0x403ad4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x403ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x403ad8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x403ad8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x403adc: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x403adcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x403ae0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x403ae0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x403ae4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x403ae4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x403ae8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x403ae8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x403aec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x403aecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x403af0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x403af0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x403af4: 0x3e00008  jr          $ra
    ctx->pc = 0x403AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x403AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403AF4u;
        // 0x403af8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x403AF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x403AFCu;
}
