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

// Function: sub_00261BC0
// Address: 0x261bc0 - 0x261dc0
void sub_00261BC0_0x261bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261BC0_0x261bc0");
#endif

    ctx->pc = 0x261bc0u;

    // 0x261bc0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x261bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x261bc4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x261bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x261bc8: 0xac8307b8  sw          $v1, 0x7B8($a0)
    ctx->pc = 0x261bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1976), GPR_U32(ctx, 3));
    // 0x261bcc: 0xac8307b4  sw          $v1, 0x7B4($a0)
    ctx->pc = 0x261bccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1972), GPR_U32(ctx, 3));
    // 0x261bd0: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x261bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x261bd4: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x261bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x261bd8: 0x14600077  bnez        $v1, . + 4 + (0x77 << 2)
    ctx->pc = 0x261BD8u;
    {
        const bool branch_taken_0x261bd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x261bd8) {
            ctx->pc = 0x261DB8u;
            goto label_261db8;
        }
    }
    ctx->pc = 0x261BE0u;
    // 0x261be0: 0x90850640  lbu         $a1, 0x640($a0)
    ctx->pc = 0x261be0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1600)));
    // 0x261be4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x261be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x261be8: 0x14a30035  bne         $a1, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x261BE8u;
    {
        const bool branch_taken_0x261be8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x261be8) {
            ctx->pc = 0x261CC0u;
            goto label_261cc0;
        }
    }
    ctx->pc = 0x261BF0u;
    // 0x261bf0: 0x9085065c  lbu         $a1, 0x65C($a0)
    ctx->pc = 0x261bf0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1628)));
    // 0x261bf4: 0x240300f6  addiu       $v1, $zero, 0xF6
    ctx->pc = 0x261bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    // 0x261bf8: 0x10a30031  beq         $a1, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x261BF8u;
    {
        const bool branch_taken_0x261bf8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x261BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261BF8u;
        // 0x261bfc: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261bf8) {
            ctx->pc = 0x261CC0u;
            goto label_261cc0;
        }
    }
    ctx->pc = 0x261C00u;
    // 0x261c00: 0x14a3002f  bne         $a1, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x261C00u;
    {
        const bool branch_taken_0x261c00 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x261c00) {
            ctx->pc = 0x261CC0u;
            goto label_261cc0;
        }
    }
    ctx->pc = 0x261C08u;
    // 0x261c08: 0x8c8529c0  lw          $a1, 0x29C0($a0)
    ctx->pc = 0x261c08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x261c0c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x261c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x261c10: 0x90a5003a  lbu         $a1, 0x3A($a1)
    ctx->pc = 0x261c10u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 58)));
    // 0x261c14: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x261C14u;
    {
        const bool branch_taken_0x261c14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x261c14) {
            ctx->pc = 0x261C28u;
            goto label_261c28;
        }
    }
    ctx->pc = 0x261C1Cu;
    // 0x261c1c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x261C1Cu;
    {
        const bool branch_taken_0x261c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x261c1c) {
            ctx->pc = 0x261C78u;
            goto label_261c78;
        }
    }
    ctx->pc = 0x261C24u;
    // 0x261c24: 0x0  nop
    ctx->pc = 0x261c24u;
    // NOP
label_261c28:
    // 0x261c28: 0x908629d0  lbu         $a2, 0x29D0($a0)
    ctx->pc = 0x261c28u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10704)));
    // 0x261c2c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x261c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x261c30: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x261c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x261c34: 0x24a5f220  addiu       $a1, $a1, -0xDE0
    ctx->pc = 0x261c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963744));
    // 0x261c38: 0x2463f240  addiu       $v1, $v1, -0xDC0
    ctx->pc = 0x261c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963776));
    // 0x261c3c: 0xc48007b4  lwc1        $f0, 0x7B4($a0)
    ctx->pc = 0x261c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261c40: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x261c40u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x261c44: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x261c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x261c48: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x261c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x261c4c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x261c4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x261c50: 0xe48007b4  swc1        $f0, 0x7B4($a0)
    ctx->pc = 0x261c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1972), bits); }
    // 0x261c54: 0x908529d0  lbu         $a1, 0x29D0($a0)
    ctx->pc = 0x261c54u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10704)));
    // 0x261c58: 0xc48007b8  lwc1        $f0, 0x7B8($a0)
    ctx->pc = 0x261c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261c5c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x261c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x261c60: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x261c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x261c64: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x261c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x261c68: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x261c68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x261c6c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x261C6Cu;
    {
        const bool branch_taken_0x261c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261C6Cu;
        // 0x261c70: 0xe48007b8  swc1        $f0, 0x7B8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1976), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x261c6c) {
            ctx->pc = 0x261CC0u;
            goto label_261cc0;
        }
    }
    ctx->pc = 0x261C74u;
    // 0x261c74: 0x0  nop
    ctx->pc = 0x261c74u;
    // NOP
label_261c78:
    // 0x261c78: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x261c78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x261c7c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x261c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x261c80: 0x2463f200  addiu       $v1, $v1, -0xE00
    ctx->pc = 0x261c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963712));
    // 0x261c84: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x261c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x261c88: 0xc48007b4  lwc1        $f0, 0x7B4($a0)
    ctx->pc = 0x261c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261c8c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x261c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x261c90: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x261c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x261c94: 0x2463f210  addiu       $v1, $v1, -0xDF0
    ctx->pc = 0x261c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963728));
    // 0x261c98: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x261c98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x261c9c: 0xe48007b4  swc1        $f0, 0x7B4($a0)
    ctx->pc = 0x261c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1972), bits); }
    // 0x261ca0: 0x8c8529c0  lw          $a1, 0x29C0($a0)
    ctx->pc = 0x261ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x261ca4: 0xc48007b8  lwc1        $f0, 0x7B8($a0)
    ctx->pc = 0x261ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261ca8: 0x90a5003a  lbu         $a1, 0x3A($a1)
    ctx->pc = 0x261ca8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 58)));
    // 0x261cac: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x261cacu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x261cb0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x261cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x261cb4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x261cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x261cb8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x261cb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x261cbc: 0xe48007b8  swc1        $f0, 0x7B8($a0)
    ctx->pc = 0x261cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1976), bits); }
label_261cc0:
    // 0x261cc0: 0x8c8306c8  lw          $v1, 0x6C8($a0)
    ctx->pc = 0x261cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
    // 0x261cc4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x261cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x261cc8: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x261cc8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x261ccc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x261CCCu;
    {
        const bool branch_taken_0x261ccc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x261ccc) {
            ctx->pc = 0x261CE0u;
            goto label_261ce0;
        }
    }
    ctx->pc = 0x261CD4u;
    // 0x261cd4: 0x9083065c  lbu         $v1, 0x65C($a0)
    ctx->pc = 0x261cd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1628)));
    // 0x261cd8: 0x386300fb  xori        $v1, $v1, 0xFB
    ctx->pc = 0x261cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)251);
    // 0x261cdc: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x261cdcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_261ce0:
    // 0x261ce0: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x261CE0u;
    {
        const bool branch_taken_0x261ce0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x261ce0) {
            ctx->pc = 0x261D60u;
            goto label_261d60;
        }
    }
    ctx->pc = 0x261CE8u;
    // 0x261ce8: 0x908629d0  lbu         $a2, 0x29D0($a0)
    ctx->pc = 0x261ce8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10704)));
    // 0x261cec: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x261cecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x261cf0: 0x24a5f260  addiu       $a1, $a1, -0xDA0
    ctx->pc = 0x261cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963808));
    // 0x261cf4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x261cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x261cf8: 0xc48007b4  lwc1        $f0, 0x7B4($a0)
    ctx->pc = 0x261cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261cfc: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x261cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x261d00: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x261d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x261d04: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x261d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x261d08: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x261d08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x261d0c: 0xe48007b4  swc1        $f0, 0x7B4($a0)
    ctx->pc = 0x261d0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1972), bits); }
    // 0x261d10: 0x90852ad8  lbu         $a1, 0x2AD8($a0)
    ctx->pc = 0x261d10u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10968)));
    // 0x261d14: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x261D14u;
    {
        const bool branch_taken_0x261d14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x261d14) {
            ctx->pc = 0x261D48u;
            goto label_261d48;
        }
    }
    ctx->pc = 0x261D1Cu;
    // 0x261d1c: 0x908529d0  lbu         $a1, 0x29D0($a0)
    ctx->pc = 0x261d1cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10704)));
    // 0x261d20: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x261d20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x261d24: 0x2463f280  addiu       $v1, $v1, -0xD80
    ctx->pc = 0x261d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963840));
    // 0x261d28: 0xc48007b8  lwc1        $f0, 0x7B8($a0)
    ctx->pc = 0x261d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261d2c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x261d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x261d30: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x261d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x261d34: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x261d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x261d38: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x261d38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x261d3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x261D3Cu;
    {
        const bool branch_taken_0x261d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261D3Cu;
        // 0x261d40: 0xe48007b8  swc1        $f0, 0x7B8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1976), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x261d3c) {
            ctx->pc = 0x261D60u;
            goto label_261d60;
        }
    }
    ctx->pc = 0x261D44u;
    // 0x261d44: 0x0  nop
    ctx->pc = 0x261d44u;
    // NOP
label_261d48:
    // 0x261d48: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x261d48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
    // 0x261d4c: 0xc48007b8  lwc1        $f0, 0x7B8($a0)
    ctx->pc = 0x261d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261d50: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x261d50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x261d54: 0x0  nop
    ctx->pc = 0x261d54u;
    // NOP
    // 0x261d58: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x261d58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x261d5c: 0xe48007b8  swc1        $f0, 0x7B8($a0)
    ctx->pc = 0x261d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1976), bits); }
label_261d60:
    // 0x261d60: 0x8c8306c8  lw          $v1, 0x6C8($a0)
    ctx->pc = 0x261d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
    // 0x261d64: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x261d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x261d68: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x261D68u;
    {
        const bool branch_taken_0x261d68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x261d68) {
            ctx->pc = 0x261DB8u;
            goto label_261db8;
        }
    }
    ctx->pc = 0x261D70u;
    // 0x261d70: 0x908629d0  lbu         $a2, 0x29D0($a0)
    ctx->pc = 0x261d70u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10704)));
    // 0x261d74: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x261d74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x261d78: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x261d78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x261d7c: 0x24a5f2a0  addiu       $a1, $a1, -0xD60
    ctx->pc = 0x261d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963872));
    // 0x261d80: 0xc48007b4  lwc1        $f0, 0x7B4($a0)
    ctx->pc = 0x261d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261d84: 0x2463f2c0  addiu       $v1, $v1, -0xD40
    ctx->pc = 0x261d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963904));
    // 0x261d88: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x261d88u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x261d8c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x261d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x261d90: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x261d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x261d94: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x261d94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x261d98: 0xe48007b4  swc1        $f0, 0x7B4($a0)
    ctx->pc = 0x261d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1972), bits); }
    // 0x261d9c: 0x908529d0  lbu         $a1, 0x29D0($a0)
    ctx->pc = 0x261d9cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10704)));
    // 0x261da0: 0xc48007b8  lwc1        $f0, 0x7B8($a0)
    ctx->pc = 0x261da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261da4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x261da4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x261da8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x261da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x261dac: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x261dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x261db0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x261db0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x261db4: 0xe48007b8  swc1        $f0, 0x7B8($a0)
    ctx->pc = 0x261db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1976), bits); }
label_261db8:
    // 0x261db8: 0x3e00008  jr          $ra
    ctx->pc = 0x261DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x261DC0u;
}
