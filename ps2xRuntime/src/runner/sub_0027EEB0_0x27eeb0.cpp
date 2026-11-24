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

// Function: sub_0027EEB0
// Address: 0x27eeb0 - 0x27efb0
void sub_0027EEB0_0x27eeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027EEB0_0x27eeb0");
#endif

    ctx->pc = 0x27eeb0u;

    // 0x27eeb0: 0x312300ff  andi        $v1, $t1, 0xFF
    ctx->pc = 0x27eeb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x27eeb4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27eeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27eeb8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x27eeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x27eebc: 0x24790194  addiu       $t9, $v1, 0x194
    ctx->pc = 0x27eebcu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 3), 404));
    // 0x27eec0: 0x8c630194  lw          $v1, 0x194($v1)
    ctx->pc = 0x27eec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 404)));
    // 0x27eec4: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x27EEC4u;
    {
        const bool branch_taken_0x27eec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27eec4) {
            ctx->pc = 0x27EFA8u;
            goto label_27efa8;
        }
    }
    ctx->pc = 0x27EECCu;
    // 0x27eecc: 0x97988920  lhu         $t8, -0x76E0($gp)
    ctx->pc = 0x27eeccu;
    SET_GPR_ZE32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936864)));
    // 0x27eed0: 0x3c0e008c  lui         $t6, 0x8C
    ctx->pc = 0x27eed0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)140 << 16));
    // 0x27eed4: 0x25ce0950  addiu       $t6, $t6, 0x950
    ctx->pc = 0x27eed4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 2384));
    // 0x27eed8: 0x240c0003  addiu       $t4, $zero, 0x3
    ctx->pc = 0x27eed8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27eedc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x27eedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27eee0: 0x187880  sll         $t7, $t8, 2
    ctx->pc = 0x27eee0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 24), 2));
    // 0x27eee4: 0x270d0001  addiu       $t5, $t8, 0x1
    ctx->pc = 0x27eee4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
    // 0x27eee8: 0x1f87821  addu        $t7, $t7, $t8
    ctx->pc = 0x27eee8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 24)));
    // 0x27eeec: 0xa78d8920  sh          $t5, -0x76E0($gp)
    ctx->pc = 0x27eeecu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936864), (uint16_t)GPR_U32(ctx, 13));
    // 0x27eef0: 0xf6900  sll         $t5, $t7, 4
    ctx->pc = 0x27eef0u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x27eef4: 0x1cd6821  addu        $t5, $t6, $t5
    ctx->pc = 0x27eef4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x27eef8: 0xada50008  sw          $a1, 0x8($t5)
    ctx->pc = 0x27eef8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 5));
    // 0x27eefc: 0xada60000  sw          $a2, 0x0($t5)
    ctx->pc = 0x27eefcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 6));
    // 0x27ef00: 0xadb9000c  sw          $t9, 0xC($t5)
    ctx->pc = 0x27ef00u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 25));
    // 0x27ef04: 0xa1a90005  sb          $t1, 0x5($t5)
    ctx->pc = 0x27ef04u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 5), (uint8_t)GPR_U32(ctx, 9));
    // 0x27ef08: 0xa1aa0004  sb          $t2, 0x4($t5)
    ctx->pc = 0x27ef08u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 4), (uint8_t)GPR_U32(ctx, 10));
    // 0x27ef0c: 0xa1a00006  sb          $zero, 0x6($t5)
    ctx->pc = 0x27ef0cu;
    WRITE8(ADD32(GPR_U32(ctx, 13), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x27ef10: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x27ef10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x27ef14: 0xa1a60007  sb          $a2, 0x7($t5)
    ctx->pc = 0x27ef14u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 7), (uint8_t)GPR_U32(ctx, 6));
    // 0x27ef18: 0x93a60008  lbu         $a2, 0x8($sp)
    ctx->pc = 0x27ef18u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27ef1c: 0x66600a  movz        $t4, $v1, $a2
    ctx->pc = 0x27ef1cu;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 3));
    // 0x27ef20: 0xa1ac0040  sb          $t4, 0x40($t5)
    ctx->pc = 0x27ef20u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 64), (uint8_t)GPR_U32(ctx, 12));
    // 0x27ef24: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x27ef24u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x27ef28: 0x7da30020  sq          $v1, 0x20($t5)
    ctx->pc = 0x27ef28u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 32), GPR_VEC(ctx, 3));
    // 0x27ef2c: 0x79030000  lq          $v1, 0x0($t0)
    ctx->pc = 0x27ef2cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x27ef30: 0x7da30030  sq          $v1, 0x30($t5)
    ctx->pc = 0x27ef30u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 48), GPR_VEC(ctx, 3));
    // 0x27ef34: 0xe5ac002c  swc1        $f12, 0x2C($t5)
    ctx->pc = 0x27ef34u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 44), bits); }
    // 0x27ef38: 0xe5ad003c  swc1        $f13, 0x3C($t5)
    ctx->pc = 0x27ef38u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 60), bits); }
    // 0x27ef3c: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x27ef3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ef40: 0xa1a30042  sb          $v1, 0x42($t5)
    ctx->pc = 0x27ef40u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 66), (uint8_t)GPR_U32(ctx, 3));
    // 0x27ef44: 0xadab0010  sw          $t3, 0x10($t5)
    ctx->pc = 0x27ef44u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 16), GPR_U32(ctx, 11));
    // 0x27ef48: 0x8ca306b4  lw          $v1, 0x6B4($a1)
    ctx->pc = 0x27ef48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1716)));
    // 0x27ef4c: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x27ef4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x27ef50: 0xaca306b4  sw          $v1, 0x6B4($a1)
    ctx->pc = 0x27ef50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1716), GPR_U32(ctx, 3));
    // 0x27ef54: 0x908300c1  lbu         $v1, 0xC1($a0)
    ctx->pc = 0x27ef54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 193)));
    // 0x27ef58: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x27EF58u;
    {
        const bool branch_taken_0x27ef58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ef58) {
            ctx->pc = 0x27EFA8u;
            goto label_27efa8;
        }
    }
    ctx->pc = 0x27EF60u;
    // 0x27ef60: 0x908300c0  lbu         $v1, 0xC0($a0)
    ctx->pc = 0x27ef60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x27ef64: 0x28610010  slti        $at, $v1, 0x10
    ctx->pc = 0x27ef64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x27ef68: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x27EF68u;
    {
        const bool branch_taken_0x27ef68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ef68) {
            ctx->pc = 0x27EFA8u;
            goto label_27efa8;
        }
    }
    ctx->pc = 0x27EF70u;
    // 0x27ef70: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27ef70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27ef74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27ef74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27ef78: 0xa0600081  sb          $zero, 0x81($v1)
    ctx->pc = 0x27ef78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 129), (uint8_t)GPR_U32(ctx, 0));
    // 0x27ef7c: 0x908300c0  lbu         $v1, 0xC0($a0)
    ctx->pc = 0x27ef7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x27ef80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27ef80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27ef84: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27ef84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27ef88: 0xa0690082  sb          $t1, 0x82($v1)
    ctx->pc = 0x27ef88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 130), (uint8_t)GPR_U32(ctx, 9));
    // 0x27ef8c: 0x908300c0  lbu         $v1, 0xC0($a0)
    ctx->pc = 0x27ef8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x27ef90: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27ef90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27ef94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27ef94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27ef98: 0xa06a0083  sb          $t2, 0x83($v1)
    ctx->pc = 0x27ef98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 131), (uint8_t)GPR_U32(ctx, 10));
    // 0x27ef9c: 0x908300c0  lbu         $v1, 0xC0($a0)
    ctx->pc = 0x27ef9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x27efa0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x27efa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x27efa4: 0xa08300c0  sb          $v1, 0xC0($a0)
    ctx->pc = 0x27efa4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 192), (uint8_t)GPR_U32(ctx, 3));
label_27efa8:
    // 0x27efa8: 0x3e00008  jr          $ra
    ctx->pc = 0x27EFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27EFA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27EFB0u;
}
