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

// Function: sub_00381F30
// Address: 0x381f30 - 0x38203c
void sub_00381F30_0x381f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00381F30_0x381f30");
#endif

    switch (ctx->pc) {
        case 0x381f80u: goto label_381f80;
        case 0x381fa8u: goto label_381fa8;
        case 0x381fd0u: goto label_381fd0;
        default: break;
    }

    ctx->pc = 0x381f30u;

    // 0x381f30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x381f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x381f34: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x381f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x381f38: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x381f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x381f3c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x381f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x381f40: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x381f40u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381f44: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x381f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x381f48: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x381f48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381f4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x381f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x381f50: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x381f50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381f54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x381f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x381f58: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x381f58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381f5c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x381f5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381f60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x381f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381f64: 0x3c080038  lui         $t0, 0x38
    ctx->pc = 0x381f64u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)56 << 16));
    // 0x381f68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x381f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381f6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x381f6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381f70: 0x24070560  addiu       $a3, $zero, 0x560
    ctx->pc = 0x381f70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
    // 0x381f74: 0x25081ec0  addiu       $t0, $t0, 0x1EC0
    ctx->pc = 0x381f74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 7872));
    // 0x381f78: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x381F78u;
    SET_GPR_U32(ctx, 31, 0x381F80u);
    ctx->pc = 0x381F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381F78u;
    // 0x381f7c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x381F78u, 0x381F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381F80u;
label_381f80:
    // 0x381f80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x381f80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381f84: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x381F84u;
    {
        const bool branch_taken_0x381f84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x381F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381F84u;
        // 0x381f88: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381f84) {
            ctx->pc = 0x382010u;
            goto label_382010;
        }
    }
    ctx->pc = 0x381F8Cu;
    // 0x381f8c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x381f8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381f90: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x381f90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381f94: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x381f94u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381f98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x381f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381f9c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x381f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x381fa0: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x381FA0u;
    SET_GPR_U32(ctx, 31, 0x381FA8u);
    ctx->pc = 0x381FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381FA0u;
    // 0x381fa4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x381FA0u, 0x381FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381FA8u;
label_381fa8:
    // 0x381fa8: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x381fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x381fac: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x381facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x381fb0: 0xa6020526  sh          $v0, 0x526($s0)
    ctx->pc = 0x381fb0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 2));
    // 0x381fb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x381fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381fb8: 0xa6030528  sh          $v1, 0x528($s0)
    ctx->pc = 0x381fb8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 3));
    // 0x381fbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x381fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x381fc0: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x381fc0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x381fc4: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x381fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x381fc8: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x381FC8u;
    SET_GPR_U32(ctx, 31, 0x381FD0u);
    ctx->pc = 0x381FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381FC8u;
    // 0x381fcc: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x381FC8u, 0x381FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381FD0u;
label_381fd0:
    // 0x381fd0: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x381fd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x381fd4: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x381fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x381fd8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x381fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x381fdc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x381fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x381fe0: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x381fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x381fe4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x381fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x381fe8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x381fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x381fec: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x381fecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x381ff0: 0x24421e41  addiu       $v0, $v0, 0x1E41
    ctx->pc = 0x381ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7745));
    // 0x381ff4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x381ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x381ff8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x381ff8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x381ffc: 0xa2020558  sb          $v0, 0x558($s0)
    ctx->pc = 0x381ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 2));
    // 0x382000: 0xa2110559  sb          $s1, 0x559($s0)
    ctx->pc = 0x382000u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1369), (uint8_t)GPR_U32(ctx, 17));
    // 0x382004: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x382004u;
    {
        const bool branch_taken_0x382004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382004u;
        // 0x382008: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382004) {
            ctx->pc = 0x382018u;
            goto label_382018;
        }
    }
    ctx->pc = 0x38200Cu;
    // 0x38200c: 0x0  nop
    ctx->pc = 0x38200cu;
    // NOP
label_382010:
    // 0x382010: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x382010u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382014: 0x0  nop
    ctx->pc = 0x382014u;
    // NOP
label_382018:
    // 0x382018: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x382018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38201c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x38201cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x382020: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x382020u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x382024: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x382024u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x382028: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x382028u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38202c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38202cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x382030: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x382030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x382034: 0x3e00008  jr          $ra
    ctx->pc = 0x382034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x382038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382034u;
        // 0x382038: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38203Cu;
}
