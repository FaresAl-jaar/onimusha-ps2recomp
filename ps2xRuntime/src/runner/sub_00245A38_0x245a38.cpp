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

// Function: sub_00245A38
// Address: 0x245a38 - 0x245b24
void sub_00245A38_0x245a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245A38_0x245a38");
#endif

    switch (ctx->pc) {
        case 0x245a7cu: goto label_245a7c;
        case 0x245a84u: goto label_245a84;
        case 0x245a90u: goto label_245a90;
        case 0x245aa4u: goto label_245aa4;
        case 0x245af8u: goto label_245af8;
        default: break;
    }

    ctx->pc = 0x245a38u;

    // 0x245a38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x245a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x245a3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x245a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x245a40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x245a40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245a44: 0x24041200  addiu       $a0, $zero, 0x1200
    ctx->pc = 0x245a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4608));
    // 0x245a48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x245a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x245a4c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x245a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x245a50: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x245a50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245a54: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x245a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x245a58: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x245a58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245a5c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x245a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x245a60: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x245a60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245a64: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x245a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x245a68: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x245a68u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245a6c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x245a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x245a70: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x245a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x245a74: 0xc091a44  jal         func_246910
    ctx->pc = 0x245A74u;
    SET_GPR_U32(ctx, 31, 0x245A7Cu);
    ctx->pc = 0x245A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245A74u;
    // 0x245a78: 0xe0b02d  daddu       $s6, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x245A74u, 0x245A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245A7Cu;
label_245a7c:
    // 0x245a7c: 0xc047e6c  jal         func_11F9B0
    ctx->pc = 0x245A7Cu;
    SET_GPR_U32(ctx, 31, 0x245A84u);
    ctx->pc = 0x245A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245A7Cu;
    // 0x245a80: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x245A7Cu, 0x245A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245A84u;
label_245a84:
    // 0x245a84: 0x24041201  addiu       $a0, $zero, 0x1201
    ctx->pc = 0x245a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4609));
    // 0x245a88: 0xc091a44  jal         func_246910
    ctx->pc = 0x245A88u;
    SET_GPR_U32(ctx, 31, 0x245A90u);
    ctx->pc = 0x245A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245A88u;
    // 0x245a8c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x245A88u, 0x245A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245A90u;
label_245a90:
    // 0x245a90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x245a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245a94: 0x12030019  beq         $s0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x245A94u;
    {
        const bool branch_taken_0x245a94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x245A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245A94u;
        // 0x245a98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245a94) {
            ctx->pc = 0x245AFCu;
            goto label_245afc;
        }
    }
    ctx->pc = 0x245A9Cu;
    // 0x245a9c: 0xc094bb4  jal         func_252ED0
    ctx->pc = 0x245A9Cu;
    SET_GPR_U32(ctx, 31, 0x245AA4u);
    ctx->pc = 0x252ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252ED0u, 0x245A9Cu, 0x245AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245AA4u;
label_245aa4:
    // 0x245aa4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x245aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245aa8: 0x82230002  lb          $v1, 0x2($s1)
    ctx->pc = 0x245aa8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x245aac: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x245AACu;
    {
        const bool branch_taken_0x245aac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x245AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245AACu;
        // 0x245ab0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245aac) {
            ctx->pc = 0x245AC4u;
            goto label_245ac4;
        }
    }
    ctx->pc = 0x245AB4u;
    // 0x245ab4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x245AB4u;
    {
        const bool branch_taken_0x245ab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x245AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245AB4u;
        // 0x245ab8: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245ab4) {
            ctx->pc = 0x245AC4u;
            goto label_245ac4;
        }
    }
    ctx->pc = 0x245ABCu;
    // 0x245abc: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x245ABCu;
    {
        const bool branch_taken_0x245abc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x245abc) {
            ctx->pc = 0x245AF0u;
            goto label_245af0;
        }
    }
    ctx->pc = 0x245AC4u;
label_245ac4:
    // 0x245ac4: 0xa2240002  sb          $a0, 0x2($s1)
    ctx->pc = 0x245ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x245ac8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x245ac8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245acc: 0xa2240001  sb          $a0, 0x1($s1)
    ctx->pc = 0x245accu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x245ad0: 0xae330008  sw          $s3, 0x8($s1)
    ctx->pc = 0x245ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 19));
    // 0x245ad4: 0x8a420003  lwl         $v0, 0x3($s2)
    ctx->pc = 0x245ad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x245ad8: 0x9a420000  lwr         $v0, 0x0($s2)
    ctx->pc = 0x245ad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x245adc: 0xaa220017  swl         $v0, 0x17($s1)
    ctx->pc = 0x245adcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x245ae0: 0xba220014  swr         $v0, 0x14($s1)
    ctx->pc = 0x245ae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x245ae4: 0xae35000c  sw          $s5, 0xC($s1)
    ctx->pc = 0x245ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 21));
    // 0x245ae8: 0xae360010  sw          $s6, 0x10($s1)
    ctx->pc = 0x245ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 22));
    // 0x245aec: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x245aecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_245af0:
    // 0x245af0: 0xc094bd2  jal         func_252F48
    ctx->pc = 0x245AF0u;
    SET_GPR_U32(ctx, 31, 0x245AF8u);
    ctx->pc = 0x252F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252F48u, 0x245AF0u, 0x245AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245AF8u;
label_245af8:
    // 0x245af8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x245af8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_245afc:
    // 0x245afc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x245afcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245b00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x245b00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x245b04: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x245b04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245b08: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x245b08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x245b0c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x245b0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x245b10: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x245b10u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245b14: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x245b14u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x245b18: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x245b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x245B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B1Cu;
        // 0x245b20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245B24u;
}
