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

// Function: sub_003CB270
// Address: 0x3cb270 - 0x3cb5a0
void sub_003CB270_0x3cb270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CB270_0x3cb270");
#endif

    switch (ctx->pc) {
        case 0x3cb2e0u: goto label_3cb2e0;
        case 0x3cb3e8u: goto label_3cb3e8;
        case 0x3cb4d0u: goto label_3cb4d0;
        case 0x3cb518u: goto label_3cb518;
        default: break;
    }

    ctx->pc = 0x3cb270u;

    // 0x3cb270: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3cb270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3cb274: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3cb274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3cb278: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3cb278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3cb27c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3cb27cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3cb280: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3cb280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3cb284: 0x2463e400  addiu       $v1, $v1, -0x1C00
    ctx->pc = 0x3cb284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960128));
    // 0x3cb288: 0x78670000  lq          $a3, 0x0($v1)
    ctx->pc = 0x3cb288u;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x65E400u));
    // 0x3cb28c: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x3cb28cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3cb290: 0x24a5e410  addiu       $a1, $a1, -0x1BF0
    ctx->pc = 0x3cb290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960144));
    // 0x3cb294: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3cb294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3cb298: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x3cb298u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
    // 0x3cb29c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3cb29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3cb2a0: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x3cb2a0u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x65E410u));
    // 0x3cb2a4: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x3cb2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x3cb2a8: 0x90850821  lbu         $a1, 0x821($a0)
    ctx->pc = 0x3cb2a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3cb2ac: 0x10a30096  beq         $a1, $v1, . + 4 + (0x96 << 2)
    ctx->pc = 0x3CB2ACu;
    {
        const bool branch_taken_0x3cb2ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3CB2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB2ACu;
        // 0x3cb2b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb2ac) {
            ctx->pc = 0x3CB508u;
            goto label_3cb508;
        }
    }
    ctx->pc = 0x3CB2B4u;
    // 0x3cb2b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3cb2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3cb2b8: 0x10a30081  beq         $a1, $v1, . + 4 + (0x81 << 2)
    ctx->pc = 0x3CB2B8u;
    {
        const bool branch_taken_0x3cb2b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3CB2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB2B8u;
        // 0x3cb2bc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb2b8) {
            ctx->pc = 0x3CB4C0u;
            goto label_3cb4c0;
        }
    }
    ctx->pc = 0x3CB2C0u;
    // 0x3cb2c0: 0x10a30045  beq         $a1, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x3CB2C0u;
    {
        const bool branch_taken_0x3cb2c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3cb2c0) {
            ctx->pc = 0x3CB3D8u;
            goto label_3cb3d8;
        }
    }
    ctx->pc = 0x3CB2C8u;
    // 0x3cb2c8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CB2C8u;
    {
        const bool branch_taken_0x3cb2c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cb2c8) {
            ctx->pc = 0x3CB2D8u;
            goto label_3cb2d8;
        }
    }
    ctx->pc = 0x3CB2D0u;
    // 0x3cb2d0: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x3CB2D0u;
    {
        const bool branch_taken_0x3cb2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cb2d0) {
            ctx->pc = 0x3CB590u;
            goto label_3cb590;
        }
    }
    ctx->pc = 0x3CB2D8u;
label_3cb2d8:
    // 0x3cb2d8: 0xc06039c  jal         func_180E70
    ctx->pc = 0x3CB2D8u;
    SET_GPR_U32(ctx, 31, 0x3CB2E0u);
    ctx->pc = 0x3CB2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB2D8u;
    // 0x3cb2dc: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180E70u, 0x3CB2D8u, 0x3CB2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB2E0u;
label_3cb2e0:
    // 0x3cb2e0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3cb2e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3cb2e4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x3cb2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3cb2e8: 0x10650009  beq         $v1, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3CB2E8u;
    {
        const bool branch_taken_0x3cb2e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x3cb2e8) {
            ctx->pc = 0x3CB310u;
            goto label_3cb310;
        }
    }
    ctx->pc = 0x3CB2F0u;
    // 0x3cb2f0: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3cb2f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cb2f4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3cb2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3cb2f8: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3cb2f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cb2fc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3cb2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3cb300: 0xa60507f2  sh          $a1, 0x7F2($s0)
    ctx->pc = 0x3cb300u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x3cb304: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3cb304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3cb308: 0xa20407f5  sb          $a0, 0x7F5($s0)
    ctx->pc = 0x3cb308u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x3cb30c: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x3cb30cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
label_3cb310:
    // 0x3cb310: 0x92032b31  lbu         $v1, 0x2B31($s0)
    ctx->pc = 0x3cb310u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11057)));
    // 0x3cb314: 0x1060009e  beqz        $v1, . + 4 + (0x9E << 2)
    ctx->pc = 0x3CB314u;
    {
        const bool branch_taken_0x3cb314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB314u;
        // 0x3cb318: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb314) {
            ctx->pc = 0x3CB590u;
            goto label_3cb590;
        }
    }
    ctx->pc = 0x3CB31Cu;
    // 0x3cb31c: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x3cb31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3cb320: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x3cb320u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x3cb324: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3cb324u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3cb328: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3cb328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3cb32c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3cb32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3cb330: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3CB330u;
    {
        const bool branch_taken_0x3cb330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cb330) {
            ctx->pc = 0x3CB378u;
            goto label_3cb378;
        }
    }
    ctx->pc = 0x3CB338u;
    // 0x3cb338: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x3cb338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3cb33c: 0x3c034600  lui         $v1, 0x4600
    ctx->pc = 0x3cb33cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17920 << 16));
    // 0x3cb340: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x3cb340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x3cb344: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cb344u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cb348: 0x0  nop
    ctx->pc = 0x3cb348u;
    // NOP
    // 0x3cb34c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3cb34cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3cb350: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x3CB350u;
    {
        const bool branch_taken_0x3cb350 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cb350) {
            ctx->pc = 0x3CB378u;
            goto label_3cb378;
        }
    }
    ctx->pc = 0x3CB358u;
    // 0x3cb358: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x3cb358u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3cb35c: 0x7e030870  sq          $v1, 0x870($s0)
    ctx->pc = 0x3cb35cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 2160), GPR_VEC(ctx, 3));
    // 0x3cb360: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3cb360u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3cb364: 0x7e030880  sq          $v1, 0x880($s0)
    ctx->pc = 0x3cb364u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 2176), GPR_VEC(ctx, 3));
    // 0x3cb368: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3cb368u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3cb36c: 0x7e030890  sq          $v1, 0x890($s0)
    ctx->pc = 0x3cb36cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 2192), GPR_VEC(ctx, 3));
    // 0x3cb370: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3CB370u;
    {
        const bool branch_taken_0x3cb370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB370u;
        // 0x3cb374: 0xa600082a  sh          $zero, 0x82A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2090), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb370) {
            ctx->pc = 0x3CB398u;
            goto label_3cb398;
        }
    }
    ctx->pc = 0x3CB378u;
label_3cb378:
    // 0x3cb378: 0x7ba40020  lq          $a0, 0x20($sp)
    ctx->pc = 0x3cb378u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3cb37c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3cb37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cb380: 0x7e040870  sq          $a0, 0x870($s0)
    ctx->pc = 0x3cb380u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 2160), GPR_VEC(ctx, 4));
    // 0x3cb384: 0x7ba40030  lq          $a0, 0x30($sp)
    ctx->pc = 0x3cb384u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3cb388: 0x7e040880  sq          $a0, 0x880($s0)
    ctx->pc = 0x3cb388u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 2176), GPR_VEC(ctx, 4));
    // 0x3cb38c: 0x7ba40030  lq          $a0, 0x30($sp)
    ctx->pc = 0x3cb38cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3cb390: 0x7e040890  sq          $a0, 0x890($s0)
    ctx->pc = 0x3cb390u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 2192), GPR_VEC(ctx, 4));
    // 0x3cb394: 0xa603082a  sh          $v1, 0x82A($s0)
    ctx->pc = 0x3cb394u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2090), (uint16_t)GPR_U32(ctx, 3));
label_3cb398:
    // 0x3cb398: 0xa6002b32  sh          $zero, 0x2B32($s0)
    ctx->pc = 0x3cb398u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11058), (uint16_t)GPR_U32(ctx, 0));
    // 0x3cb39c: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x3cb39cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3cb3a0: 0x3c044100  lui         $a0, 0x4100
    ctx->pc = 0x3cb3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16640 << 16));
    // 0x3cb3a4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3cb3a4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3cb3a8: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x3cb3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x3cb3ac: 0x24a50b8c  addiu       $a1, $a1, 0xB8C
    ctx->pc = 0x3cb3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2956));
    // 0x3cb3b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3cb3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cb3b4: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x3cb3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x3cb3b8: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x3cb3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x3cb3bc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3cb3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3cb3c0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x3cb3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3cb3c4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3cb3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3cb3c8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3cb3c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3cb3cc: 0xe6002b28  swc1        $f0, 0x2B28($s0)
    ctx->pc = 0x3cb3ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11048), bits); }
    // 0x3cb3d0: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x3CB3D0u;
    {
        const bool branch_taken_0x3cb3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB3D0u;
        // 0x3cb3d4: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb3d0) {
            ctx->pc = 0x3CB590u;
            goto label_3cb590;
        }
    }
    ctx->pc = 0x3CB3D8u;
label_3cb3d8:
    // 0x3cb3d8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x3cb3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x3cb3dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3cb3dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3cb3e0: 0xc0f2a20  jal         func_3CA880
    ctx->pc = 0x3CB3E0u;
    SET_GPR_U32(ctx, 31, 0x3CB3E8u);
    ctx->pc = 0x3CA880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA880u, 0x3CB3E0u, 0x3CB3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB3E8u;
label_3cb3e8:
    // 0x3cb3e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3cb3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3cb3ec: 0x1043001a  beq         $v0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3CB3ECu;
    {
        const bool branch_taken_0x3cb3ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3cb3ec) {
            ctx->pc = 0x3CB458u;
            goto label_3cb458;
        }
    }
    ctx->pc = 0x3CB3F4u;
    // 0x3cb3f4: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3cb3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3cb3f8: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x3cb3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x3cb3fc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3cb3fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3cb400: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3cb400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3cb404: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cb404u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cb408: 0x0  nop
    ctx->pc = 0x3cb408u;
    // NOP
    // 0x3cb40c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3cb40cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3cb410: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3cb410u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3cb414: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3CB414u;
    {
        const bool branch_taken_0x3cb414 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cb414) {
            ctx->pc = 0x3CB42Cu;
            goto label_3cb42c;
        }
    }
    ctx->pc = 0x3CB41Cu;
    // 0x3cb41c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cb41cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3cb420: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3cb420u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3cb424: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3CB424u;
    {
        const bool branch_taken_0x3cb424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB424u;
        // 0x3cb428: 0x96042b32  lhu         $a0, 0x2B32($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11058)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb424) {
            ctx->pc = 0x3CB448u;
            goto label_3cb448;
        }
    }
    ctx->pc = 0x3CB42Cu;
label_3cb42c:
    // 0x3cb42c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3cb42cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3cb430: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3cb430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3cb434: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cb434u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3cb438: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3cb438u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3cb43c: 0x0  nop
    ctx->pc = 0x3cb43cu;
    // NOP
    // 0x3cb440: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3cb440u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x3cb444: 0x96042b32  lhu         $a0, 0x2B32($s0)
    ctx->pc = 0x3cb444u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11058)));
label_3cb448:
    // 0x3cb448: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x3cb448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3cb44c: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x3cb44cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3cb450: 0x1020004f  beqz        $at, . + 4 + (0x4F << 2)
    ctx->pc = 0x3CB450u;
    {
        const bool branch_taken_0x3cb450 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB450u;
        // 0x3cb454: 0xa6032b32  sh          $v1, 0x2B32($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11058), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb450) {
            ctx->pc = 0x3CB590u;
            goto label_3cb590;
        }
    }
    ctx->pc = 0x3CB458u;
label_3cb458:
    // 0x3cb458: 0x7a080870  lq          $t0, 0x870($s0)
    ctx->pc = 0x3cb458u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 16), 2160)));
    // 0x3cb45c: 0x3c070067  lui         $a3, 0x67
    ctx->pc = 0x3cb45cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)103 << 16));
    // 0x3cb460: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3cb460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3cb464: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x3cb464u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3cb468: 0x24e70b8c  addiu       $a3, $a3, 0xB8C
    ctx->pc = 0x3cb468u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2956));
    // 0x3cb46c: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x3cb46cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x3cb470: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x3cb470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3cb474: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3cb474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3cb478: 0x7e080890  sq          $t0, 0x890($s0)
    ctx->pc = 0x3cb478u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 2192), GPR_VEC(ctx, 8));
    // 0x3cb47c: 0x7a080880  lq          $t0, 0x880($s0)
    ctx->pc = 0x3cb47cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 16), 2176)));
    // 0x3cb480: 0x7e080870  sq          $t0, 0x870($s0)
    ctx->pc = 0x3cb480u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 2160), GPR_VEC(ctx, 8));
    // 0x3cb484: 0x92090002  lbu         $t1, 0x2($s0)
    ctx->pc = 0x3cb484u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3cb488: 0x940c0  sll         $t0, $t1, 3
    ctx->pc = 0x3cb488u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x3cb48c: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x3cb48cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x3cb490: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x3cb490u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x3cb494: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x3cb494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x3cb498: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x3cb498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3cb49c: 0xe6002b28  swc1        $f0, 0x2B28($s0)
    ctx->pc = 0x3cb49cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11048), bits); }
    // 0x3cb4a0: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3cb4a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cb4a4: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3cb4a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cb4a8: 0xa60607f2  sh          $a2, 0x7F2($s0)
    ctx->pc = 0x3cb4a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 6));
    // 0x3cb4ac: 0xa20507f5  sb          $a1, 0x7F5($s0)
    ctx->pc = 0x3cb4acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x3cb4b0: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x3cb4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x3cb4b4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x3CB4B4u;
    {
        const bool branch_taken_0x3cb4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB4B4u;
        // 0x3cb4b8: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb4b4) {
            ctx->pc = 0x3CB590u;
            goto label_3cb590;
        }
    }
    ctx->pc = 0x3CB4BCu;
    // 0x3cb4bc: 0x0  nop
    ctx->pc = 0x3cb4bcu;
    // NOP
label_3cb4c0:
    // 0x3cb4c0: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x3cb4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x3cb4c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3cb4c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3cb4c8: 0xc0f2a20  jal         func_3CA880
    ctx->pc = 0x3CB4C8u;
    SET_GPR_U32(ctx, 31, 0x3CB4D0u);
    ctx->pc = 0x3CA880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA880u, 0x3CB4C8u, 0x3CB4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB4D0u;
label_3cb4d0:
    // 0x3cb4d0: 0x920207f6  lbu         $v0, 0x7F6($s0)
    ctx->pc = 0x3cb4d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x3cb4d4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3CB4D4u;
    {
        const bool branch_taken_0x3cb4d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cb4d4) {
            ctx->pc = 0x3CB508u;
            goto label_3cb508;
        }
    }
    ctx->pc = 0x3CB4DCu;
    // 0x3cb4dc: 0xa6002b32  sh          $zero, 0x2B32($s0)
    ctx->pc = 0x3cb4dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11058), (uint16_t)GPR_U32(ctx, 0));
    // 0x3cb4e0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3cb4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3cb4e4: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3cb4e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cb4e8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3cb4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3cb4ec: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3cb4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cb4f0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3cb4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3cb4f4: 0xa60207f2  sh          $v0, 0x7F2($s0)
    ctx->pc = 0x3cb4f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 2));
    // 0x3cb4f8: 0xa20407f5  sb          $a0, 0x7F5($s0)
    ctx->pc = 0x3cb4f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x3cb4fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3cb4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3cb500: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x3cb500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x3cb504: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x3cb504u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
label_3cb508:
    // 0x3cb508: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x3cb508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x3cb50c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3cb50cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3cb510: 0xc0f2a20  jal         func_3CA880
    ctx->pc = 0x3CB510u;
    SET_GPR_U32(ctx, 31, 0x3CB518u);
    ctx->pc = 0x3CB514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB510u;
    // 0x3cb514: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CA880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA880u, 0x3CB510u, 0x3CB518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB518u;
label_3cb518:
    // 0x3cb518: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3cb518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3cb51c: 0x1043001a  beq         $v0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3CB51Cu;
    {
        const bool branch_taken_0x3cb51c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3cb51c) {
            ctx->pc = 0x3CB588u;
            goto label_3cb588;
        }
    }
    ctx->pc = 0x3CB524u;
    // 0x3cb524: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3cb524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3cb528: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x3cb528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x3cb52c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3cb52cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3cb530: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3cb530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3cb534: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cb534u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cb538: 0x0  nop
    ctx->pc = 0x3cb538u;
    // NOP
    // 0x3cb53c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3cb53cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3cb540: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3cb540u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3cb544: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3CB544u;
    {
        const bool branch_taken_0x3cb544 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cb544) {
            ctx->pc = 0x3CB55Cu;
            goto label_3cb55c;
        }
    }
    ctx->pc = 0x3CB54Cu;
    // 0x3cb54c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cb54cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3cb550: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3cb550u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3cb554: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3CB554u;
    {
        const bool branch_taken_0x3cb554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB554u;
        // 0x3cb558: 0x96042b32  lhu         $a0, 0x2B32($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11058)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb554) {
            ctx->pc = 0x3CB578u;
            goto label_3cb578;
        }
    }
    ctx->pc = 0x3CB55Cu;
label_3cb55c:
    // 0x3cb55c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3cb55cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3cb560: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3cb560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3cb564: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cb564u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3cb568: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3cb568u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3cb56c: 0x0  nop
    ctx->pc = 0x3cb56cu;
    // NOP
    // 0x3cb570: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3cb570u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x3cb574: 0x96042b32  lhu         $a0, 0x2B32($s0)
    ctx->pc = 0x3cb574u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11058)));
label_3cb578:
    // 0x3cb578: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x3cb578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3cb57c: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x3cb57cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3cb580: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CB580u;
    {
        const bool branch_taken_0x3cb580 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB580u;
        // 0x3cb584: 0xa6032b32  sh          $v1, 0x2B32($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11058), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb580) {
            ctx->pc = 0x3CB590u;
            goto label_3cb590;
        }
    }
    ctx->pc = 0x3CB588u;
label_3cb588:
    // 0x3cb588: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3cb588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cb58c: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3cb58cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_3cb590:
    // 0x3cb590: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3cb590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3cb594: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3cb594u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3cb598: 0x3e00008  jr          $ra
    ctx->pc = 0x3CB598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CB59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB598u;
        // 0x3cb59c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CB598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CB5A0u;
}
