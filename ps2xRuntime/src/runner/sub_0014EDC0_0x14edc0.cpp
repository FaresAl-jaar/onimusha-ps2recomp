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

// Function: sub_0014EDC0
// Address: 0x14edc0 - 0x14efc4
void sub_0014EDC0_0x14edc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014EDC0_0x14edc0");
#endif

    switch (ctx->pc) {
        case 0x14ede8u: goto label_14ede8;
        case 0x14ee64u: goto label_14ee64;
        case 0x14ef34u: goto label_14ef34;
        case 0x14ef5cu: goto label_14ef5c;
        default: break;
    }

    ctx->pc = 0x14edc0u;

    // 0x14edc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14edc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14edc4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x14edc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x14edc8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14edc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14edcc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14edccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14edd0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x14edd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14edd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14edd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14edd8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x14edd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14eddc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14eddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14ede0: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x14EDE0u;
    {
        const bool branch_taken_0x14ede0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EDE0u;
        // 0x14ede4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ede0) {
            ctx->pc = 0x14EF98u;
            goto label_14ef98;
        }
    }
    ctx->pc = 0x14EDE8u;
label_14ede8:
    // 0x14ede8: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x14ede8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x14edec: 0x501823  subu        $v1, $v0, $s0
    ctx->pc = 0x14edecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14edf0: 0x8e4200ec  lw          $v0, 0xEC($s2)
    ctx->pc = 0x14edf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 236)));
    // 0x14edf4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x14edf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x14edf8: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x14edf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14edfc: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x14edfcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x14ee00: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14EE00u;
    {
        const bool branch_taken_0x14ee00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ee00) {
            ctx->pc = 0x14EE28u;
            goto label_14ee28;
        }
    }
    ctx->pc = 0x14EE08u;
    // 0x14ee08: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14ee08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14ee0c: 0x26230070  addiu       $v1, $s1, 0x70
    ctx->pc = 0x14ee0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x14ee10: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x14ee10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
    // 0x14ee14: 0x26220060  addiu       $v0, $s1, 0x60
    ctx->pc = 0x14ee14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x14ee18: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x14ee18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14ee1c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x14EE1Cu;
    {
        const bool branch_taken_0x14ee1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EE1Cu;
        // 0x14ee20: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ee1c) {
            ctx->pc = 0x14EE78u;
            goto label_14ee78;
        }
    }
    ctx->pc = 0x14EE24u;
    // 0x14ee24: 0x0  nop
    ctx->pc = 0x14ee24u;
    // NOP
label_14ee28:
    // 0x14ee28: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x14ee28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x14ee2c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x14ee2cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x14ee30: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x14ee30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x14ee34: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x14ee34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14ee38: 0x26250060  addiu       $a1, $s1, 0x60
    ctx->pc = 0x14ee38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x14ee3c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14ee3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14ee40: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14ee40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14ee44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14ee44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ee48: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x14ee48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ee4c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x14ee4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x14ee50: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x14ee50u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x14ee54: 0x0  nop
    ctx->pc = 0x14ee54u;
    // NOP
    // 0x14ee58: 0x0  nop
    ctx->pc = 0x14ee58u;
    // NOP
    // 0x14ee5c: 0xc0414c0  jal         func_105300
    ctx->pc = 0x14EE5Cu;
    SET_GPR_U32(ctx, 31, 0x14EE64u);
    ctx->pc = 0x105300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105300u, 0x14EE5Cu, 0x14EE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EE64u;
label_14ee64:
    // 0x14ee64: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14ee64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14ee68: 0xae22007c  sw          $v0, 0x7C($s1)
    ctx->pc = 0x14ee68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 2));
    // 0x14ee6c: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x14ee6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x14ee70: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14ee70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14ee74: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x14ee74u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
label_14ee78:
    // 0x14ee78: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x14ee78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x14ee7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14EE7Cu;
    {
        const bool branch_taken_0x14ee7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ee7c) {
            ctx->pc = 0x14EE90u;
            goto label_14ee90;
        }
    }
    ctx->pc = 0x14EE84u;
    // 0x14ee84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14EE84u;
    {
        const bool branch_taken_0x14ee84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EE84u;
        // 0x14ee88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ee84) {
            ctx->pc = 0x14EE98u;
            goto label_14ee98;
        }
    }
    ctx->pc = 0x14EE8Cu;
    // 0x14ee8c: 0x0  nop
    ctx->pc = 0x14ee8cu;
    // NOP
label_14ee90:
    // 0x14ee90: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14ee90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14ee94: 0x0  nop
    ctx->pc = 0x14ee94u;
    // NOP
label_14ee98:
    // 0x14ee98: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x14ee98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x14ee9c: 0x8622000a  lh          $v0, 0xA($s1)
    ctx->pc = 0x14ee9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x14eea0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x14eea0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x14eea4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14eea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14eea8: 0xa622000a  sh          $v0, 0xA($s1)
    ctx->pc = 0x14eea8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x14eeac: 0x8622000a  lh          $v0, 0xA($s1)
    ctx->pc = 0x14eeacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x14eeb0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14EEB0u;
    {
        const bool branch_taken_0x14eeb0 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x14eeb0) {
            ctx->pc = 0x14EEC0u;
            goto label_14eec0;
        }
    }
    ctx->pc = 0x14EEB8u;
    // 0x14eeb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14EEB8u;
    {
        const bool branch_taken_0x14eeb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EEB8u;
        // 0x14eebc: 0xa620000a  sh          $zero, 0xA($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eeb8) {
            ctx->pc = 0x14EEC8u;
            goto label_14eec8;
        }
    }
    ctx->pc = 0x14EEC0u;
label_14eec0:
    // 0x14eec0: 0x86220008  lh          $v0, 0x8($s1)
    ctx->pc = 0x14eec0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x14eec4: 0xa622000a  sh          $v0, 0xA($s1)
    ctx->pc = 0x14eec4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 2));
label_14eec8:
    // 0x14eec8: 0x8623000a  lh          $v1, 0xA($s1)
    ctx->pc = 0x14eec8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x14eecc: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x14EECCu;
    {
        const bool branch_taken_0x14eecc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14eecc) {
            ctx->pc = 0x14EF00u;
            goto label_14ef00;
        }
    }
    ctx->pc = 0x14EED4u;
    // 0x14eed4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14eed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14eed8: 0xa6200008  sh          $zero, 0x8($s1)
    ctx->pc = 0x14eed8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x14eedc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14eedcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14eee0: 0x262300e0  addiu       $v1, $s1, 0xE0
    ctx->pc = 0x14eee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x14eee4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14eee4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14eee8: 0x262200c0  addiu       $v0, $s1, 0xC0
    ctx->pc = 0x14eee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x14eeec: 0xe62000cc  swc1        $f0, 0xCC($s1)
    ctx->pc = 0x14eeecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 204), bits); }
    // 0x14eef0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x14eef0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14eef4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x14EEF4u;
    {
        const bool branch_taken_0x14eef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EEF4u;
        // 0x14eef8: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eef4) {
            ctx->pc = 0x14EF48u;
            goto label_14ef48;
        }
    }
    ctx->pc = 0x14EEFCu;
    // 0x14eefc: 0x0  nop
    ctx->pc = 0x14eefcu;
    // NOP
label_14ef00:
    // 0x14ef00: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14ef00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14ef04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14ef04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ef08: 0x262400e0  addiu       $a0, $s1, 0xE0
    ctx->pc = 0x14ef08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x14ef0c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14ef0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14ef10: 0x262500d0  addiu       $a1, $s1, 0xD0
    ctx->pc = 0x14ef10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    // 0x14ef14: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14ef14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14ef18: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x14ef18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ef1c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14ef1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14ef20: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x14ef20u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x14ef24: 0x0  nop
    ctx->pc = 0x14ef24u;
    // NOP
    // 0x14ef28: 0x0  nop
    ctx->pc = 0x14ef28u;
    // NOP
    // 0x14ef2c: 0xc0414c0  jal         func_105300
    ctx->pc = 0x14EF2Cu;
    SET_GPR_U32(ctx, 31, 0x14EF34u);
    ctx->pc = 0x105300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105300u, 0x14EF2Cu, 0x14EF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EF34u;
label_14ef34:
    // 0x14ef34: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14ef34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14ef38: 0xae2200ec  sw          $v0, 0xEC($s1)
    ctx->pc = 0x14ef38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 236), GPR_U32(ctx, 2));
    // 0x14ef3c: 0x8622000a  lh          $v0, 0xA($s1)
    ctx->pc = 0x14ef3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x14ef40: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14ef40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14ef44: 0xa622000a  sh          $v0, 0xA($s1)
    ctx->pc = 0x14ef44u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 2));
label_14ef48:
    // 0x14ef48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14ef48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ef4c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14ef4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ef50: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x14ef50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ef54: 0xc053b2c  jal         func_14ECB0
    ctx->pc = 0x14EF54u;
    SET_GPR_U32(ctx, 31, 0x14EF5Cu);
    ctx->pc = 0x14EF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EF54u;
    // 0x14ef58: 0xa220000c  sb          $zero, 0xC($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ECB0u, 0x14EF54u, 0x14EF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EF5Cu;
label_14ef5c:
    // 0x14ef5c: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x14ef5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x14ef60: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x14EF60u;
    {
        const bool branch_taken_0x14ef60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ef60) {
            ctx->pc = 0x14EF88u;
            goto label_14ef88;
        }
    }
    ctx->pc = 0x14EF68u;
    // 0x14ef68: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x14ef68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x14ef6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14ef6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ef70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14ef70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ef74: 0x262400b0  addiu       $a0, $s1, 0xB0
    ctx->pc = 0x14ef74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    // 0x14ef78: 0x262300a0  addiu       $v1, $s1, 0xA0
    ctx->pc = 0x14ef78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x14ef7c: 0xe62000ac  swc1        $f0, 0xAC($s1)
    ctx->pc = 0x14ef7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 172), bits); }
    // 0x14ef80: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x14ef80u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14ef84: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x14ef84u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
label_14ef88:
    // 0x14ef88: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x14ef88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14ef8c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x14ef8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14ef90: 0xa2230001  sb          $v1, 0x1($s1)
    ctx->pc = 0x14ef90u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x14ef94: 0x0  nop
    ctx->pc = 0x14ef94u;
    // NOP
label_14ef98:
    // 0x14ef98: 0x924300e4  lbu         $v1, 0xE4($s2)
    ctx->pc = 0x14ef98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 228)));
    // 0x14ef9c: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x14ef9cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14efa0: 0x1460ff91  bnez        $v1, . + 4 + (-0x6F << 2)
    ctx->pc = 0x14EFA0u;
    {
        const bool branch_taken_0x14efa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14efa0) {
            ctx->pc = 0x14EDE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14ede8;
        }
    }
    ctx->pc = 0x14EFA8u;
    // 0x14efa8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14efa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14efac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14efacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14efb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14efb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14efb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14efb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14efb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14efb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14efbc: 0x3e00008  jr          $ra
    ctx->pc = 0x14EFBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EFBCu;
        // 0x14efc0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EFBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14EFC4u;
}
