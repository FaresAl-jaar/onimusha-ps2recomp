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

// Function: sub_0027EAF0
// Address: 0x27eaf0 - 0x27ece0
void sub_0027EAF0_0x27eaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027EAF0_0x27eaf0");
#endif

    switch (ctx->pc) {
        case 0x27eb78u: goto label_27eb78;
        case 0x27ebe8u: goto label_27ebe8;
        case 0x27ec0cu: goto label_27ec0c;
        default: break;
    }

    ctx->pc = 0x27eaf0u;

    // 0x27eaf0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x27eaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x27eaf4: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x27eaf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x27eaf8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x27eaf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x27eafc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27eafcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27eb00: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x27eb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x27eb04: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x27eb04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x27eb08: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x27eb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x27eb0c: 0x24830194  addiu       $v1, $a0, 0x194
    ctx->pc = 0x27eb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 404));
    // 0x27eb10: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x27eb10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x27eb14: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x27eb14u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eb18: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x27eb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x27eb1c: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x27eb1cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eb20: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x27eb20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x27eb24: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27eb24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x27eb28: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x27eb28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eb2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27eb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27eb30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27eb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27eb34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27eb34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27eb38: 0xa3a900bf  sb          $t1, 0xBF($sp)
    ctx->pc = 0x27eb38u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 191), (uint8_t)GPR_U32(ctx, 9));
    // 0x27eb3c: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x27eb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x27eb40: 0x8c850194  lw          $a1, 0x194($a0)
    ctx->pc = 0x27eb40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 404)));
    // 0x27eb44: 0x10a0005a  beqz        $a1, . + 4 + (0x5A << 2)
    ctx->pc = 0x27EB44u;
    {
        const bool branch_taken_0x27eb44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EB44u;
        // 0x27eb48: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eb44) {
            ctx->pc = 0x27ECB0u;
            goto label_27ecb0;
        }
    }
    ctx->pc = 0x27EB4Cu;
    // 0x27eb4c: 0x32a300ff  andi        $v1, $s5, 0xFF
    ctx->pc = 0x27eb4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x27eb50: 0x90b60004  lbu         $s6, 0x4($a1)
    ctx->pc = 0x27eb50u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x27eb54: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x27eb54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x27eb58: 0x8cb00010  lw          $s0, 0x10($a1)
    ctx->pc = 0x27eb58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x27eb5c: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x27eb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x27eb60: 0x16082a  slt         $at, $zero, $s6
    ctx->pc = 0x27eb60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x27eb64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27eb64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27eb68: 0x8c730008  lw          $s3, 0x8($v1)
    ctx->pc = 0x27eb68u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x27eb6c: 0x1020004c  beqz        $at, . + 4 + (0x4C << 2)
    ctx->pc = 0x27EB6Cu;
    {
        const bool branch_taken_0x27eb6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EB6Cu;
        // 0x27eb70: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eb6c) {
            ctx->pc = 0x27ECA0u;
            goto label_27eca0;
        }
    }
    ctx->pc = 0x27EB74u;
    // 0x27eb74: 0x0  nop
    ctx->pc = 0x27eb74u;
    // NOP
label_27eb78:
    // 0x27eb78: 0x32630001  andi        $v1, $s3, 0x1
    ctx->pc = 0x27eb78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x27eb7c: 0x10600042  beqz        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x27EB7Cu;
    {
        const bool branch_taken_0x27eb7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27eb7c) {
            ctx->pc = 0x27EC88u;
            goto label_27ec88;
        }
    }
    ctx->pc = 0x27EB84u;
    // 0x27eb84: 0x97868920  lhu         $a2, -0x76E0($gp)
    ctx->pc = 0x27eb84u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936864)));
    // 0x27eb88: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x27eb88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x27eb8c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x27eb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x27eb90: 0x24840950  addiu       $a0, $a0, 0x950
    ctx->pc = 0x27eb90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2384));
    // 0x27eb94: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x27eb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x27eb98: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x27eb98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x27eb9c: 0xa7828920  sh          $v0, -0x76E0($gp)
    ctx->pc = 0x27eb9cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936864), (uint16_t)GPR_U32(ctx, 2));
    // 0x27eba0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x27eba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x27eba4: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x27eba4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27eba8: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x27eba8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x27ebac: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x27ebacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x27ebb0: 0x27a200cc  addiu       $v0, $sp, 0xCC
    ctx->pc = 0x27ebb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x27ebb4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x27ebb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x27ebb8: 0x9203000c  lbu         $v1, 0xC($s0)
    ctx->pc = 0x27ebb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x27ebbc: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x27ebbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x27ebc0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x27EBC0u;
    {
        const bool branch_taken_0x27ebc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EBC0u;
        // 0x27ebc4: 0x858821  addu        $s1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ebc0) {
            ctx->pc = 0x27EBF0u;
            goto label_27ebf0;
        }
    }
    ctx->pc = 0x27EBC8u;
    // 0x27ebc8: 0x8e85004c  lw          $a1, 0x4C($s4)
    ctx->pc = 0x27ebc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x27ebcc: 0x2462ff80  addiu       $v0, $v1, -0x80
    ctx->pc = 0x27ebccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967168));
    // 0x27ebd0: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x27ebd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x27ebd4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x27ebd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x27ebd8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x27ebd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ebdc: 0x8ca20094  lw          $v0, 0x94($a1)
    ctx->pc = 0x27ebdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
    // 0x27ebe0: 0xc041442  jal         func_105108
    ctx->pc = 0x27EBE0u;
    SET_GPR_U32(ctx, 31, 0x27EBE8u);
    ctx->pc = 0x27EBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EBE0u;
    // 0x27ebe4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x27EBE0u, 0x27EBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EBE8u;
label_27ebe8:
    // 0x27ebe8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x27EBE8u;
    {
        const bool branch_taken_0x27ebe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ebe8) {
            ctx->pc = 0x27EC10u;
            goto label_27ec10;
        }
    }
    ctx->pc = 0x27EBF0u;
label_27ebf0:
    // 0x27ebf0: 0x8ee2004c  lw          $v0, 0x4C($s7)
    ctx->pc = 0x27ebf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 76)));
    // 0x27ebf4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x27ebf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x27ebf8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x27ebf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x27ebfc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x27ebfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ec00: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x27ec00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x27ec04: 0xc041442  jal         func_105108
    ctx->pc = 0x27EC04u;
    SET_GPR_U32(ctx, 31, 0x27EC0Cu);
    ctx->pc = 0x27EC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EC04u;
    // 0x27ec08: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x27EC04u, 0x27EC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EC0Cu;
label_27ec0c:
    // 0x27ec0c: 0x0  nop
    ctx->pc = 0x27ec0cu;
    // NOP
label_27ec10:
    // 0x27ec10: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x27ec10u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x27ec14: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27EC14u;
    {
        const bool branch_taken_0x27ec14 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x27EC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EC14u;
        // 0x27ec18: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ec14) {
            ctx->pc = 0x27EC28u;
            goto label_27ec28;
        }
    }
    ctx->pc = 0x27EC1Cu;
    // 0x27ec1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27ec1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ec20: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27EC20u;
    {
        const bool branch_taken_0x27ec20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EC20u;
        // 0x27ec24: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ec20) {
            ctx->pc = 0x27EC40u;
            goto label_27ec40;
        }
    }
    ctx->pc = 0x27EC28u;
label_27ec28:
    // 0x27ec28: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x27ec28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x27ec2c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x27ec2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x27ec30: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x27ec30u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ec34: 0x0  nop
    ctx->pc = 0x27ec34u;
    // NOP
    // 0x27ec38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27ec38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27ec3c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x27ec3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_27ec40:
    // 0x27ec40: 0x27a300cc  addiu       $v1, $sp, 0xCC
    ctx->pc = 0x27ec40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x27ec44: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27ec44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27ec48: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x27ec48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x27ec4c: 0xae340008  sw          $s4, 0x8($s1)
    ctx->pc = 0x27ec4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 20));
    // 0x27ec50: 0xae340000  sw          $s4, 0x0($s1)
    ctx->pc = 0x27ec50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 20));
    // 0x27ec54: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x27ec54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x27ec58: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x27ec58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x27ec5c: 0xa23e0005  sb          $fp, 0x5($s1)
    ctx->pc = 0x27ec5cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 30));
    // 0x27ec60: 0xa2350004  sb          $s5, 0x4($s1)
    ctx->pc = 0x27ec60u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 21));
    // 0x27ec64: 0x93a300bf  lbu         $v1, 0xBF($sp)
    ctx->pc = 0x27ec64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 191)));
    // 0x27ec68: 0xa2230006  sb          $v1, 0x6($s1)
    ctx->pc = 0x27ec68u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x27ec6c: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x27ec6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x27ec70: 0xa2230007  sb          $v1, 0x7($s1)
    ctx->pc = 0x27ec70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x27ec74: 0xa2240040  sb          $a0, 0x40($s1)
    ctx->pc = 0x27ec74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 64), (uint8_t)GPR_U32(ctx, 4));
    // 0x27ec78: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x27ec78u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x27ec7c: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x27ec7cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
    // 0x27ec80: 0xa2200042  sb          $zero, 0x42($s1)
    ctx->pc = 0x27ec80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 66), (uint8_t)GPR_U32(ctx, 0));
    // 0x27ec84: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x27ec84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_27ec88:
    // 0x27ec88: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x27ec88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x27ec8c: 0x256182a  slt         $v1, $s2, $s6
    ctx->pc = 0x27ec8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x27ec90: 0x139842  srl         $s3, $s3, 1
    ctx->pc = 0x27ec90u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
    // 0x27ec94: 0x1460ffb8  bnez        $v1, . + 4 + (-0x48 << 2)
    ctx->pc = 0x27EC94u;
    {
        const bool branch_taken_0x27ec94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EC94u;
        // 0x27ec98: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ec94) {
            ctx->pc = 0x27EB78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27eb78;
        }
    }
    ctx->pc = 0x27EC9Cu;
    // 0x27ec9c: 0x0  nop
    ctx->pc = 0x27ec9cu;
    // NOP
label_27eca0:
    // 0x27eca0: 0x8e8306b4  lw          $v1, 0x6B4($s4)
    ctx->pc = 0x27eca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1716)));
    // 0x27eca4: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x27eca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x27eca8: 0xae8306b4  sw          $v1, 0x6B4($s4)
    ctx->pc = 0x27eca8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1716), GPR_U32(ctx, 3));
    // 0x27ecac: 0x0  nop
    ctx->pc = 0x27ecacu;
    // NOP
label_27ecb0:
    // 0x27ecb0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x27ecb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x27ecb4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x27ecb4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27ecb8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x27ecb8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27ecbc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x27ecbcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27ecc0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x27ecc0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27ecc4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x27ecc4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27ecc8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27ecc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27eccc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27ecccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27ecd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27ecd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ecd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27ecd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ecd8: 0x3e00008  jr          $ra
    ctx->pc = 0x27ECD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27ECDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ECD8u;
        // 0x27ecdc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27ECD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27ECE0u;
}
