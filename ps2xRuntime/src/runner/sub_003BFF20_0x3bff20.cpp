#include <cstdio>
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

// Function: sub_003BFF20
// Address: 0x3bff20 - 0x3c04e0
void sub_003BFF20_0x3bff20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BFF20_0x3bff20");
#endif
    { static uint32_t n=0; ++n; if (n<=5 || (n%600)==0) fprintf(stderr,"[probe ipu_show] call %u a0=0x%x ra=0x%x\n",n,GPR_U32(ctx,4),GPR_U32(ctx,31)); }

    switch (ctx->pc) {
        case 0x3bffd0u: goto label_3bffd0;
        case 0x3c01b8u: goto label_3c01b8;
        case 0x3c0498u: goto label_3c0498;
        default: break;
    }

    ctx->pc = 0x3bff20u;

    // 0x3bff20: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3bff20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x3bff24: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3bff24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3bff28: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3bff28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x3bff2c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3bff2cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bff30: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3bff30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x3bff34: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x3bff34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3bff38: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3bff38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3bff3c: 0x2409fff0  addiu       $t1, $zero, -0x10
    ctx->pc = 0x3bff3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x3bff40: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3bff40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3bff44: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x3bff44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x3bff48: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3bff48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3bff4c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3bff4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3bff50: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3bff50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3bff54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3bff54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3bff58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3bff58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3bff5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3bff5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3bff60: 0x80860009  lb          $a2, 0x9($a0)
    ctx->pc = 0x3bff60u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x3bff64: 0x38c50001  xori        $a1, $a2, 0x1
    ctx->pc = 0x3bff64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
    // 0x3bff68: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x3bff68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3bff6c: 0xa0850009  sb          $a1, 0x9($a0)
    ctx->pc = 0x3bff6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 5));
    // 0x3bff70: 0x8c2afc90  lw          $t2, -0x370($at)
    ctx->pc = 0x3bff70u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966416)));
    // 0x3bff74: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x3bff74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3bff78: 0x9082000b  lbu         $v0, 0xB($a0)
    ctx->pc = 0x3bff78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11)));
    // 0x3bff7c: 0x3c011200  lui         $at, 0x1200
    ctx->pc = 0x3bff7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4608 << 16));
    // 0x3bff80: 0x254a000f  addiu       $t2, $t2, 0xF
    ctx->pc = 0x3bff80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 15));
    // 0x3bff84: 0x8c281000  lw          $t0, 0x1000($at)
    ctx->pc = 0x3bff84u;
    SET_GPR_S32(ctx, 8, (int32_t)runtime->Load32(rdram, ctx, 0x12001000u)); // MMIO: 0x12001000
    // 0x3bff88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3bff88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3bff8c: 0x1494824  and         $t1, $t2, $t1
    ctx->pc = 0x3bff8cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & GPR_U64(ctx, 9));
    // 0x3bff90: 0x31082000  andi        $t0, $t0, 0x2000
    ctx->pc = 0x3bff90u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)8192);
    // 0x3bff94: 0x34018000  ori         $at, $zero, 0x8000
    ctx->pc = 0x3bff94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3bff98: 0xe8580a  movz        $t3, $a3, $t0
    ctx->pc = 0x3bff98u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 7));
    // 0x3bff9c: 0x443821  addu        $a3, $v0, $a0
    ctx->pc = 0x3bff9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3bffa0: 0xb4080  sll         $t0, $t3, 2
    ctx->pc = 0x3bffa0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x3bffa4: 0x8ce7000c  lw          $a3, 0xC($a3)
    ctx->pc = 0x3bffa4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x3bffa8: 0x1281021  addu        $v0, $t1, $t0
    ctx->pc = 0x3bffa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x3bffac: 0x1214021  addu        $t0, $t1, $at
    ctx->pc = 0x3bffacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 1)));
    // 0x3bffb0: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x3bffb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x3bffb4: 0x8cec0004  lw          $t4, 0x4($a3)
    ctx->pc = 0x3bffb4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x3bffb8: 0x24eb0010  addiu       $t3, $a3, 0x10
    ctx->pc = 0x3bffb8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x3bffbc: 0x1180001a  beqz        $t4, . + 4 + (0x1A << 2)
    ctx->pc = 0x3BFFBCu;
    {
        const bool branch_taken_0x3bffbc = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BFFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFFBCu;
        // 0x3bffc0: 0xaca80000  sw          $t0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bffbc) {
            ctx->pc = 0x3C0028u;
            goto label_3c0028;
        }
    }
    ctx->pc = 0x3BFFC4u;
    // 0x3bffc4: 0x3c09000f  lui         $t1, 0xF
    ctx->pc = 0x3bffc4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)15 << 16));
    // 0x3bffc8: 0x3c083000  lui         $t0, 0x3000
    ctx->pc = 0x3bffc8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)12288 << 16));
    // 0x3bffcc: 0x0  nop
    ctx->pc = 0x3bffccu;
    // NOP
label_3bffd0:
    // 0x3bffd0: 0x3c01000f  lui         $at, 0xF
    ctx->pc = 0x3bffd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15 << 16));
    // 0x3bffd4: 0x3421fff0  ori         $at, $at, 0xFFF0
    ctx->pc = 0x3bffd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65520);
    // 0x3bffd8: 0x181082a  slt         $at, $t4, $at
    ctx->pc = 0x3bffd8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x3bffdc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x3BFFDCu;
    {
        const bool branch_taken_0x3bffdc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BFFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFFDCu;
        // 0x3bffe0: 0x352afff0  ori         $t2, $t1, 0xFFF0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65520);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bffdc) {
            ctx->pc = 0x3BFFE8u;
            goto label_3bffe8;
        }
    }
    ctx->pc = 0x3BFFE4u;
    // 0x3bffe4: 0x180502d  daddu       $t2, $t4, $zero
    ctx->pc = 0x3bffe4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_3bffe8:
    // 0x3bffe8: 0xb383c  dsll32      $a3, $t3, 0
    ctx->pc = 0x3bffe8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 11) << (32 + 0));
    // 0x3bffec: 0x2545000f  addiu       $a1, $t2, 0xF
    ctx->pc = 0x3bffecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 15));
    // 0x3bfff0: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x3bfff0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x3bfff4: 0x52902  srl         $a1, $a1, 4
    ctx->pc = 0x3bfff4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x3bfff8: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x3bfff8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x3bfffc: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x3bfffcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3c0000: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x3c0000u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x3c0004: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x3c0004u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x3c0008: 0xe52825  or          $a1, $a3, $a1
    ctx->pc = 0x3c0008u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x3c000c: 0x18a6023  subu        $t4, $t4, $t2
    ctx->pc = 0x3c000cu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x3c0010: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x3c0010u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x3c0014: 0x16a5821  addu        $t3, $t3, $t2
    ctx->pc = 0x3c0014u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x3c0018: 0xfc600008  sd          $zero, 0x8($v1)
    ctx->pc = 0x3c0018u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 0));
    // 0x3c001c: 0x1580ffec  bnez        $t4, . + 4 + (-0x14 << 2)
    ctx->pc = 0x3C001Cu;
    {
        const bool branch_taken_0x3c001c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C0020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C001Cu;
        // 0x3c0020: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c001c) {
            ctx->pc = 0x3BFFD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bffd0;
        }
    }
    ctx->pc = 0x3C0024u;
    // 0x3c0024: 0x0  nop
    ctx->pc = 0x3c0024u;
    // NOP
label_3c0028:
    // 0x3c0028: 0xdc68fff0  ld          $t0, -0x10($v1)
    ctx->pc = 0x3c0028u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x3c002c: 0x3c07cfff  lui         $a3, 0xCFFF
    ctx->pc = 0x3c002cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)53247 << 16));
    // 0x3c0030: 0x3c05dfff  lui         $a1, 0xDFFF
    ctx->pc = 0x3c0030u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57343 << 16));
    // 0x3c0034: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x3c0034u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x3c0038: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x3c0038u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x3c003c: 0x70073b89  pcpyld      $a3, $zero, $a3
    ctx->pc = 0x3c003cu;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 7)));
    // 0x3c0040: 0x652824  and         $a1, $v1, $a1
    ctx->pc = 0x3c0040u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x3c0044: 0x1073824  and         $a3, $t0, $a3
    ctx->pc = 0x3c0044u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
    // 0x3c0048: 0xfc67fff0  sd          $a3, -0x10($v1)
    ctx->pc = 0x3c0048u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294967280), GPR_U64(ctx, 7));
    // 0x3c004c: 0x9083004d  lbu         $v1, 0x4D($a0)
    ctx->pc = 0x3c004cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 77)));
    // 0x3c0050: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C0050u;
    {
        const bool branch_taken_0x3c0050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0050u;
        // 0x3c0054: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0050) {
            ctx->pc = 0x3C0060u;
            goto label_3c0060;
        }
    }
    ctx->pc = 0x3C0058u;
    // 0x3c0058: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3C0058u;
    {
        const bool branch_taken_0x3c0058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C005Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0058u;
        // 0x3c005c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0058) {
            ctx->pc = 0x3C006Cu;
            goto label_3c006c;
        }
    }
    ctx->pc = 0x3C0060u;
label_3c0060:
    // 0x3c0060: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x3c0060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x3c0064: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x3c0064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x3c0068: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x3c0068u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3c006c:
    // 0x3c006c: 0x307e00ff  andi        $fp, $v1, 0xFF
    ctx->pc = 0x3c006cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3c0070: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3c0070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3c0074: 0x34670003  ori         $a3, $v1, 0x3
    ctx->pc = 0x3c0074u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x3c0078: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x3c0078u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3c007c: 0xfca70000  sd          $a3, 0x0($a1)
    ctx->pc = 0x3c007cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 7));
    // 0x3c0080: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x3c0080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x3c0084: 0x34670003  ori         $a3, $v1, 0x3
    ctx->pc = 0x3c0084u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x3c0088: 0x34038002  ori         $v1, $zero, 0x8002
    ctx->pc = 0x3c0088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x3c008c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x3c008cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3c0090: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x3c0090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x3c0094: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x3c0094u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x3c0098: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x3c0098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3c009c: 0xfca40010  sd          $a0, 0x10($a1)
    ctx->pc = 0x3c009cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 4));
    // 0x3c00a0: 0x13c00007  beqz        $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x3C00A0u;
    {
        const bool branch_taken_0x3c00a0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C00A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C00A0u;
        // 0x3c00a4: 0xfca30018  sd          $v1, 0x18($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c00a0) {
            ctx->pc = 0x3C00C0u;
            goto label_3c00c0;
        }
    }
    ctx->pc = 0x3C00A8u;
    // 0x3c00a8: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x3c00a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x3c00ac: 0x34641000  ori         $a0, $v1, 0x1000
    ctx->pc = 0x3c00acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x3c00b0: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x3c00b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3c00b4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x3c00b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3c00b8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3C00B8u;
    {
        const bool branch_taken_0x3c00b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C00BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C00B8u;
        // 0x3c00bc: 0xfca30020  sd          $v1, 0x20($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c00b8) {
            ctx->pc = 0x3C00E8u;
            goto label_3c00e8;
        }
    }
    ctx->pc = 0x3C00C0u;
label_3c00c0:
    // 0x3c00c0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3c00c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3c00c4: 0x9028cea4  lbu         $t0, -0x315C($at)
    ctx->pc = 0x3c00c4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)FAST_READ8(0x81CEA4u));
    // 0x3c00c8: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x3c00c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x3c00cc: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x3c00ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3c00d0: 0x34870800  ori         $a3, $a0, 0x800
    ctx->pc = 0x3c00d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2048);
    // 0x3c00d4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x3c00d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3c00d8: 0x7203c  dsll32      $a0, $a3, 0
    ctx->pc = 0x3c00d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 0));
    // 0x3c00dc: 0xe42025  or          $a0, $a3, $a0
    ctx->pc = 0x3c00dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x3c00e0: 0x68200a  movz        $a0, $v1, $t0
    ctx->pc = 0x3c00e0u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x3c00e4: 0xfca40020  sd          $a0, 0x20($a1)
    ctx->pc = 0x3c00e4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 4));
label_3c00e8:
    // 0x3c00e8: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x3c00e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x3c00ec: 0xfca40028  sd          $a0, 0x28($a1)
    ctx->pc = 0x3c00ecu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 4));
    // 0x3c00f0: 0x6a200  sll         $s4, $a2, 8
    ctx->pc = 0x3c00f0u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x3c00f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c00f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c00f8: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x3c00f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3c00fc: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x3c00fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3c0100: 0x24b00040  addiu       $s0, $a1, 0x40
    ctx->pc = 0x3c0100u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x3c0104: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x3c0104u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x3c0108: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x3c0108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x3c010c: 0xfca40030  sd          $a0, 0x30($a1)
    ctx->pc = 0x3c010cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 48), GPR_U64(ctx, 4));
    // 0x3c0110: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3c0110u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0114: 0xfca30038  sd          $v1, 0x38($a1)
    ctx->pc = 0x3c0114u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 56), GPR_U64(ctx, 3));
    // 0x3c0118: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3c0118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3c011c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3c011cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c0120: 0x34730003  ori         $s3, $v1, 0x3
    ctx->pc = 0x3c0120u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x3c0124: 0x2419000e  addiu       $t9, $zero, 0xE
    ctx->pc = 0x3c0124u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3c0128: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x3c0128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x3c012c: 0x240f0060  addiu       $t7, $zero, 0x60
    ctx->pc = 0x3c012cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x3c0130: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x3c0130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x3c0134: 0x240b0051  addiu       $t3, $zero, 0x51
    ctx->pc = 0x3c0134u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x3c0138: 0x3903c  dsll32      $s2, $v1, 0
    ctx->pc = 0x3c0138u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3c013c: 0x240a0053  addiu       $t2, $zero, 0x53
    ctx->pc = 0x3c013cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x3c0140: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3c0140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3c0144: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3c0144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3c0148: 0x838825  or          $s1, $a0, $v1
    ctx->pc = 0x3c0148u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3c014c: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x3c014cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x3c0150: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3c0150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c0154: 0x24047fff  addiu       $a0, $zero, 0x7FFF
    ctx->pc = 0x3c0154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x3c0158: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x3c0158u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3c015c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3c015cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3c0160: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x3c0160u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x3c0164: 0x346d0004  ori         $t5, $v1, 0x4
    ctx->pc = 0x3c0164u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x3c0168: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x3c0168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x3c016c: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x3c016cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x3c0170: 0x3603c  dsll32      $t4, $v1, 0
    ctx->pc = 0x3c0170u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3c0174: 0x70047389  pcpyld      $t6, $zero, $a0
    ctx->pc = 0x3c0174u;
    SET_GPR_VEC(ctx, 14, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 4)));
    // 0x3c0178: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x3c0178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x3c017c: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x3c017cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3c0180: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3c0180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3c0184: 0x834825  or          $t1, $a0, $v1
    ctx->pc = 0x3c0184u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3c0188: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x3c0188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x3c018c: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x3c018cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x3c0190: 0x2193c  dsll32      $v1, $v0, 4
    ctx->pc = 0x3c0190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 4));
    // 0x3c0194: 0x34880080  ori         $t0, $a0, 0x80
    ctx->pc = 0x3c0194u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    // 0x3c0198: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x3c0198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x3c019c: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x3c019cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x3c01a0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3c01a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3c01a4: 0x7006c389  pcpyld      $t8, $zero, $a2
    ctx->pc = 0x3c01a4u;
    SET_GPR_VEC(ctx, 24, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 6)));
    // 0x3c01a8: 0x34840080  ori         $a0, $a0, 0x80
    ctx->pc = 0x3c01a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    // 0x3c01ac: 0x683825  or          $a3, $v1, $t0
    ctx->pc = 0x3c01acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x3c01b0: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x3c01b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3c01b4: 0x0  nop
    ctx->pc = 0x3c01b4u;
    // NOP
label_3c01b8:
    // 0x3c01b8: 0x32a30007  andi        $v1, $s5, 0x7
    ctx->pc = 0x3c01b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)7);
    // 0x3c01bc: 0x14600020  bnez        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x3C01BCu;
    {
        const bool branch_taken_0x3c01bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C01C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C01BCu;
        // 0x3c01c0: 0x1518c3  sra         $v1, $s5, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 21), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c01bc) {
            ctx->pc = 0x3C0240u;
            goto label_3c0240;
        }
    }
    ctx->pc = 0x3C01C4u;
    // 0x3c01c4: 0xfe130000  sd          $s3, 0x0($s0)
    ctx->pc = 0x3c01c4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 19));
    // 0x3c01c8: 0x2831825  or          $v1, $s4, $v1
    ctx->pc = 0x3c01c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) | GPR_U64(ctx, 3));
    // 0x3c01cc: 0xfe120008  sd          $s2, 0x8($s0)
    ctx->pc = 0x3c01ccu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 18));
    // 0x3c01d0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3c01d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3c01d4: 0xfe110010  sd          $s1, 0x10($s0)
    ctx->pc = 0x3c01d4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 17));
    // 0x3c01d8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3c01d8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3c01dc: 0xfe190018  sd          $t9, 0x18($s0)
    ctx->pc = 0x3c01dcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 25));
    // 0x3c01e0: 0x782025  or          $a0, $v1, $t8
    ctx->pc = 0x3c01e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 24));
    // 0x3c01e4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3c01e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c01e8: 0xfe040020  sd          $a0, 0x20($s0)
    ctx->pc = 0x3c01e8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 4));
    // 0x3c01ec: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x3c01ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x3c01f0: 0xfe0f0028  sd          $t7, 0x28($s0)
    ctx->pc = 0x3c01f0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 15));
    // 0x3c01f4: 0x15203c  dsll32      $a0, $s5, 0
    ctx->pc = 0x3c01f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) << (32 + 0));
    // 0x3c01f8: 0xfe0e0030  sd          $t6, 0x30($s0)
    ctx->pc = 0x3c01f8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 14));
    // 0x3c01fc: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3c01fcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3c0200: 0xfe0f0038  sd          $t7, 0x38($s0)
    ctx->pc = 0x3c0200u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 15));
    // 0x3c0204: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x3c0204u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x3c0208: 0xfe0d0040  sd          $t5, 0x40($s0)
    ctx->pc = 0x3c0208u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 13));
    // 0x3c020c: 0xfe0c0048  sd          $t4, 0x48($s0)
    ctx->pc = 0x3c020cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 12));
    // 0x3c0210: 0xfe110050  sd          $s1, 0x50($s0)
    ctx->pc = 0x3c0210u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 17));
    // 0x3c0214: 0xfe190058  sd          $t9, 0x58($s0)
    ctx->pc = 0x3c0214u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 88), GPR_U64(ctx, 25));
    // 0x3c0218: 0xfe040060  sd          $a0, 0x60($s0)
    ctx->pc = 0x3c0218u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 96), GPR_U64(ctx, 4));
    // 0x3c021c: 0xfe0b0068  sd          $t3, 0x68($s0)
    ctx->pc = 0x3c021cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 11));
    // 0x3c0220: 0xfe000070  sd          $zero, 0x70($s0)
    ctx->pc = 0x3c0220u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 112), GPR_U64(ctx, 0));
    // 0x3c0224: 0xfe0a0078  sd          $t2, 0x78($s0)
    ctx->pc = 0x3c0224u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 120), GPR_U64(ctx, 10));
    // 0x3c0228: 0xfe090080  sd          $t1, 0x80($s0)
    ctx->pc = 0x3c0228u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 128), GPR_U64(ctx, 9));
    // 0x3c022c: 0xfe000088  sd          $zero, 0x88($s0)
    ctx->pc = 0x3c022cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 136), GPR_U64(ctx, 0));
    // 0x3c0230: 0xfe070090  sd          $a3, 0x90($s0)
    ctx->pc = 0x3c0230u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 144), GPR_U64(ctx, 7));
    // 0x3c0234: 0xfe060098  sd          $a2, 0x98($s0)
    ctx->pc = 0x3c0234u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 152), GPR_U64(ctx, 6));
    // 0x3c0238: 0x24700060  addiu       $s0, $v1, 0x60
    ctx->pc = 0x3c0238u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x3c023c: 0x0  nop
    ctx->pc = 0x3c023cu;
    // NOP
label_3c0240:
    // 0x3c0240: 0xfe0d0000  sd          $t5, 0x0($s0)
    ctx->pc = 0x3c0240u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 13));
    // 0x3c0244: 0x15183c  dsll32      $v1, $s5, 0
    ctx->pc = 0x3c0244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 0));
    // 0x3c0248: 0xfe0c0008  sd          $t4, 0x8($s0)
    ctx->pc = 0x3c0248u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 12));
    // 0x3c024c: 0xfe110010  sd          $s1, 0x10($s0)
    ctx->pc = 0x3c024cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 17));
    // 0x3c0250: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3c0250u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3c0254: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3c0254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3c0258: 0xfe190018  sd          $t9, 0x18($s0)
    ctx->pc = 0x3c0258u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 25));
    // 0x3c025c: 0xfe030020  sd          $v1, 0x20($s0)
    ctx->pc = 0x3c025cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    // 0x3c0260: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3c0260u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3c0264: 0xfe0b0028  sd          $t3, 0x28($s0)
    ctx->pc = 0x3c0264u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 11));
    // 0x3c0268: 0x16193c  dsll32      $v1, $s6, 4
    ctx->pc = 0x3c0268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << (32 + 4));
    // 0x3c026c: 0xfe000030  sd          $zero, 0x30($s0)
    ctx->pc = 0x3c026cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 0));
    // 0x3c0270: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x3c0270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x3c0274: 0xfe0a0038  sd          $t2, 0x38($s0)
    ctx->pc = 0x3c0274u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 10));
    // 0x3c0278: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3c0278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3c027c: 0xfe090040  sd          $t1, 0x40($s0)
    ctx->pc = 0x3c027cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 9));
    // 0x3c0280: 0x682025  or          $a0, $v1, $t0
    ctx->pc = 0x3c0280u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x3c0284: 0xfe000048  sd          $zero, 0x48($s0)
    ctx->pc = 0x3c0284u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 0));
    // 0x3c0288: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x3c0288u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c028c: 0xfe040050  sd          $a0, 0x50($s0)
    ctx->pc = 0x3c028cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 4));
    // 0x3c0290: 0x2aa300e0  slti        $v1, $s5, 0xE0
    ctx->pc = 0x3c0290u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)224) ? 1 : 0);
    // 0x3c0294: 0xfe060058  sd          $a2, 0x58($s0)
    ctx->pc = 0x3c0294u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 88), GPR_U64(ctx, 6));
    // 0x3c0298: 0x26d61000  addiu       $s6, $s6, 0x1000
    ctx->pc = 0x3c0298u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4096));
    // 0x3c029c: 0x1460ffc6  bnez        $v1, . + 4 + (-0x3A << 2)
    ctx->pc = 0x3C029Cu;
    {
        const bool branch_taken_0x3c029c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C02A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C029Cu;
        // 0x3c02a0: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c029c) {
            ctx->pc = 0x3C01B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c01b8;
        }
    }
    ctx->pc = 0x3C02A4u;
    // 0x3c02a4: 0x13c00070  beqz        $fp, . + 4 + (0x70 << 2)
    ctx->pc = 0x3C02A4u;
    {
        const bool branch_taken_0x3c02a4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C02A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C02A4u;
        // 0x3c02a8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c02a4) {
            ctx->pc = 0x3C0468u;
            goto label_3c0468;
        }
    }
    ctx->pc = 0x3C02ACu;
    // 0x3c02ac: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3c02acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3c02b0: 0x34430014  ori         $v1, $v0, 0x14
    ctx->pc = 0x3c02b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
    // 0x3c02b4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3c02b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c02b8: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x3c02b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x3c02bc: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x3c02bcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x3c02c0: 0x34420014  ori         $v0, $v0, 0x14
    ctx->pc = 0x3c02c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
    // 0x3c02c4: 0x34038013  ori         $v1, $zero, 0x8013
    ctx->pc = 0x3c02c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32787);
    // 0x3c02c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c02c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3c02cc: 0x2407004d  addiu       $a3, $zero, 0x4D
    ctx->pc = 0x3c02ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x3c02d0: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x3c02d0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x3c02d4: 0x240f004f  addiu       $t7, $zero, 0x4F
    ctx->pc = 0x3c02d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x3c02d8: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x3c02d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3c02dc: 0x3c0e0003  lui         $t6, 0x3
    ctx->pc = 0x3c02dcu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)3 << 16));
    // 0x3c02e0: 0x240d0048  addiu       $t5, $zero, 0x48
    ctx->pc = 0x3c02e0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x3c02e4: 0x240c0019  addiu       $t4, $zero, 0x19
    ctx->pc = 0x3c02e4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x3c02e8: 0x19403c  dsll32      $t0, $t9, 0
    ctx->pc = 0x3c02e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 25) << (32 + 0));
    // 0x3c02ec: 0x240a0041  addiu       $t2, $zero, 0x41
    ctx->pc = 0x3c02ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x3c02f0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3c02f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3c02f4: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x3c02f4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x3c02f8: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x3c02f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
    // 0x3c02fc: 0xfe190018  sd          $t9, 0x18($s0)
    ctx->pc = 0x3c02fcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 25));
    // 0x3c0300: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x3c0300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x3c0304: 0x8c29f014  lw          $t1, -0xFEC($at)
    ctx->pc = 0x3c0304u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963220)));
    // 0x3c0308: 0x345100c0  ori         $s1, $v0, 0xC0
    ctx->pc = 0x3c0308u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x3c030c: 0x2233025  or          $a2, $s1, $v1
    ctx->pc = 0x3c030cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x3c0310: 0x24027000  addiu       $v0, $zero, 0x7000
    ctx->pc = 0x3c0310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x3c0314: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x3c0314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x3c0318: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3c0318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3c031c: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x3c031cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3c0320: 0x3c0300df  lui         $v1, 0xDF
    ctx->pc = 0x3c0320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)223 << 16));
    // 0x3c0324: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x3c0324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x3c0328: 0xdd330020  ld          $s3, 0x20($t1)
    ctx->pc = 0x3c0328u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x3c032c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3c032cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3c0330: 0x435825  or          $t3, $v0, $v1
    ctx->pc = 0x3c0330u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3c0334: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3c0334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3c0338: 0x3c026402  lui         $v0, 0x6402
    ctx->pc = 0x3c0338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25602 << 16));
    // 0x3c033c: 0x34431000  ori         $v1, $v0, 0x1000
    ctx->pc = 0x3c033cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x3c0340: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x3c0340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x3c0344: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3c0344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3c0348: 0x24080015  addiu       $t0, $zero, 0x15
    ctx->pc = 0x3c0348u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x3c034c: 0xfe130020  sd          $s3, 0x20($s0)
    ctx->pc = 0x3c034cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 19));
    // 0x3c0350: 0x24090060  addiu       $t1, $zero, 0x60
    ctx->pc = 0x3c0350u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x3c0354: 0xfe070028  sd          $a3, 0x28($s0)
    ctx->pc = 0x3c0354u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 7));
    // 0x3c0358: 0x3c133f80  lui         $s3, 0x3F80
    ctx->pc = 0x3c0358u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)16256 << 16));
    // 0x3c035c: 0xfe060030  sd          $a2, 0x30($s0)
    ctx->pc = 0x3c035cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 6));
    // 0x3c0360: 0x2407003f  addiu       $a3, $zero, 0x3F
    ctx->pc = 0x3c0360u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x3c0364: 0xfe0f0038  sd          $t7, 0x38($s0)
    ctx->pc = 0x3c0364u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 15));
    // 0x3c0368: 0x24060316  addiu       $a2, $zero, 0x316
    ctx->pc = 0x3c0368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    // 0x3c036c: 0xfe0e0040  sd          $t6, 0x40($s0)
    ctx->pc = 0x3c036cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 14));
    // 0x3c0370: 0x13983c  dsll32      $s3, $s3, 0
    ctx->pc = 0x3c0370u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 0));
    // 0x3c0374: 0xfe0d0048  sd          $t5, 0x48($s0)
    ctx->pc = 0x3c0374u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 13));
    // 0x3c0378: 0x340e8080  ori         $t6, $zero, 0x8080
    ctx->pc = 0x3c0378u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3c037c: 0xfe040050  sd          $a0, 0x50($s0)
    ctx->pc = 0x3c037cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 4));
    // 0x3c0380: 0xfe0c0058  sd          $t4, 0x58($s0)
    ctx->pc = 0x3c0380u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 88), GPR_U64(ctx, 12));
    // 0x3c0384: 0xe2438  dsll        $a0, $t6, 16
    ctx->pc = 0x3c0384u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 14) << 16);
    // 0x3c0388: 0xfe0b0060  sd          $t3, 0x60($s0)
    ctx->pc = 0x3c0388u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 96), GPR_U64(ctx, 11));
    // 0x3c038c: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x3c038cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x3c0390: 0xfe0a0068  sd          $t2, 0x68($s0)
    ctx->pc = 0x3c0390u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 10));
    // 0x3c0394: 0x3c0e0008  lui         $t6, 0x8
    ctx->pc = 0x3c0394u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)8 << 16));
    // 0x3c0398: 0xfe030070  sd          $v1, 0x70($s0)
    ctx->pc = 0x3c0398u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 112), GPR_U64(ctx, 3));
    // 0x3c039c: 0x932025  or          $a0, $a0, $s3
    ctx->pc = 0x3c039cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 19));
    // 0x3c03a0: 0xfe020078  sd          $v0, 0x78($s0)
    ctx->pc = 0x3c03a0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 120), GPR_U64(ctx, 2));
    // 0x3c03a4: 0x35c30008  ori         $v1, $t6, 0x8
    ctx->pc = 0x3c03a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)8);
    // 0x3c03a8: 0xfe090080  sd          $t1, 0x80($s0)
    ctx->pc = 0x3c03a8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 128), GPR_U64(ctx, 9));
    // 0x3c03ac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3c03acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3c03b0: 0xfe080088  sd          $t0, 0x88($s0)
    ctx->pc = 0x3c03b0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 136), GPR_U64(ctx, 8));
    // 0x3c03b4: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x3c03b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c03b8: 0xfe000090  sd          $zero, 0x90($s0)
    ctx->pc = 0x3c03b8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 144), GPR_U64(ctx, 0));
    // 0x3c03bc: 0x9703c  dsll32      $t6, $t1, 0
    ctx->pc = 0x3c03bcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 9) << (32 + 0));
    // 0x3c03c0: 0xfe070098  sd          $a3, 0x98($s0)
    ctx->pc = 0x3c03c0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 152), GPR_U64(ctx, 7));
    // 0x3c03c4: 0x3c097900  lui         $t1, 0x7900
    ctx->pc = 0x3c03c4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)30976 << 16));
    // 0x3c03c8: 0xfe0600a0  sd          $a2, 0xA0($s0)
    ctx->pc = 0x3c03c8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 160), GPR_U64(ctx, 6));
    // 0x3c03cc: 0x35277000  ori         $a3, $t1, 0x7000
    ctx->pc = 0x3c03ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)28672);
    // 0x3c03d0: 0xfe0000a8  sd          $zero, 0xA8($s0)
    ctx->pc = 0x3c03d0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 168), GPR_U64(ctx, 0));
    // 0x3c03d4: 0xee3825  or          $a3, $a3, $t6
    ctx->pc = 0x3c03d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 14));
    // 0x3c03d8: 0xfe0400b0  sd          $a0, 0xB0($s0)
    ctx->pc = 0x3c03d8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 176), GPR_U64(ctx, 4));
    // 0x3c03dc: 0x70073b89  pcpyld      $a3, $zero, $a3
    ctx->pc = 0x3c03dcu;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 7)));
    // 0x3c03e0: 0xfe1200b8  sd          $s2, 0xB8($s0)
    ctx->pc = 0x3c03e0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 184), GPR_U64(ctx, 18));
    // 0x3c03e4: 0x3c040df9  lui         $a0, 0xDF9
    ctx->pc = 0x3c03e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3577 << 16));
    // 0x3c03e8: 0xfe0300c0  sd          $v1, 0xC0($s0)
    ctx->pc = 0x3c03e8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 192), GPR_U64(ctx, 3));
    // 0x3c03ec: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x3c03ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3c03f0: 0xfe0200c8  sd          $v0, 0xC8($s0)
    ctx->pc = 0x3c03f0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 200), GPR_U64(ctx, 2));
    // 0x3c03f4: 0x3c038700  lui         $v1, 0x8700
    ctx->pc = 0x3c03f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34560 << 16));
    // 0x3c03f8: 0xfe0700d0  sd          $a3, 0xD0($s0)
    ctx->pc = 0x3c03f8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 208), GPR_U64(ctx, 7));
    // 0x3c03fc: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x3c03fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x3c0400: 0x34841ff9  ori         $a0, $a0, 0x1FF9
    ctx->pc = 0x3c0400u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8185);
    // 0x3c0404: 0xfe0600d8  sd          $a2, 0xD8($s0)
    ctx->pc = 0x3c0404u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 216), GPR_U64(ctx, 6));
    // 0x3c0408: 0xfe0400e0  sd          $a0, 0xE0($s0)
    ctx->pc = 0x3c0408u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 4));
    // 0x3c040c: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x3c040cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x3c0410: 0xfe0200e8  sd          $v0, 0xE8($s0)
    ctx->pc = 0x3c0410u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 232), GPR_U64(ctx, 2));
    // 0x3c0414: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x3c0414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3c0418: 0xfe0300f0  sd          $v1, 0xF0($s0)
    ctx->pc = 0x3c0418u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 240), GPR_U64(ctx, 3));
    // 0x3c041c: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x3c041cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x3c0420: 0xfe0400f8  sd          $a0, 0xF8($s0)
    ctx->pc = 0x3c0420u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 248), GPR_U64(ctx, 4));
    // 0x3c0424: 0x3443020b  ori         $v1, $v0, 0x20B
    ctx->pc = 0x3c0424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)523);
    // 0x3c0428: 0xfe110100  sd          $s1, 0x100($s0)
    ctx->pc = 0x3c0428u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 256), GPR_U64(ctx, 17));
    // 0x3c042c: 0x24020061  addiu       $v0, $zero, 0x61
    ctx->pc = 0x3c042cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x3c0430: 0xfe0f0108  sd          $t7, 0x108($s0)
    ctx->pc = 0x3c0430u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 264), GPR_U64(ctx, 15));
    // 0x3c0434: 0xfe030110  sd          $v1, 0x110($s0)
    ctx->pc = 0x3c0434u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 272), GPR_U64(ctx, 3));
    // 0x3c0438: 0xfe0d0118  sd          $t5, 0x118($s0)
    ctx->pc = 0x3c0438u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 280), GPR_U64(ctx, 13));
    // 0x3c043c: 0x8c23f014  lw          $v1, -0xFEC($at)
    ctx->pc = 0x3c043cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963220)));
    // 0x3c0440: 0xdc630040  ld          $v1, 0x40($v1)
    ctx->pc = 0x3c0440u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x3c0444: 0xfe030120  sd          $v1, 0x120($s0)
    ctx->pc = 0x3c0444u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 288), GPR_U64(ctx, 3));
    // 0x3c0448: 0xfe0c0128  sd          $t4, 0x128($s0)
    ctx->pc = 0x3c0448u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 296), GPR_U64(ctx, 12));
    // 0x3c044c: 0xfe0b0130  sd          $t3, 0x130($s0)
    ctx->pc = 0x3c044cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 304), GPR_U64(ctx, 11));
    // 0x3c0450: 0xfe0a0138  sd          $t2, 0x138($s0)
    ctx->pc = 0x3c0450u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 312), GPR_U64(ctx, 10));
    // 0x3c0454: 0xfe020140  sd          $v0, 0x140($s0)
    ctx->pc = 0x3c0454u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 320), GPR_U64(ctx, 2));
    // 0x3c0458: 0xfe080148  sd          $t0, 0x148($s0)
    ctx->pc = 0x3c0458u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 328), GPR_U64(ctx, 8));
    // 0x3c045c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3C045Cu;
    {
        const bool branch_taken_0x3c045c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C045Cu;
        // 0x3c0460: 0x26100150  addiu       $s0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c045c) {
            ctx->pc = 0x3C0478u;
            goto label_3c0478;
        }
    }
    ctx->pc = 0x3C0464u;
    // 0x3c0464: 0x0  nop
    ctx->pc = 0x3c0464u;
    // NOP
label_3c0468:
    // 0x3c0468: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3c0468u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3c046c: 0x34038080  ori         $v1, $zero, 0x8080
    ctx->pc = 0x3c046cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3c0470: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3c0470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3c0474: 0xfee20040  sd          $v0, 0x40($s7)
    ctx->pc = 0x3c0474u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 64), GPR_U64(ctx, 2));
label_3c0478:
    // 0x3c0478: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x3c0478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x3c047c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3c047cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3c0480: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x3c0480u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x3c0484: 0x2484f250  addiu       $a0, $a0, -0xDB0
    ctx->pc = 0x3c0484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963792));
    // 0x3c0488: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3c0488u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c048c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3c048cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c0490: 0xc061c60  jal         func_187180
    ctx->pc = 0x3C0490u;
    SET_GPR_U32(ctx, 31, 0x3C0498u);
    ctx->pc = 0x3C0494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0490u;
    // 0x3c0494: 0xfe000008  sd          $zero, 0x8($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187180u, 0x3C0490u, 0x3C0498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0498u;
label_3c0498:
    // 0x3c0498: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x3c0498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3c049c: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x3c049cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x3c04a0: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x3c04a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x3c04a4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3c04a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3c04a8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3c04a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3c04ac: 0xac23fc90  sw          $v1, -0x370($at)
    ctx->pc = 0x3c04acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 3));
    // 0x3c04b0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3c04b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3c04b4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3c04b4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3c04b8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3c04b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3c04bc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3c04bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3c04c0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3c04c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3c04c4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3c04c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c04c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3c04c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c04cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c04ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c04d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c04d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c04d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c04d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c04d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C04D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C04DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C04D8u;
        // 0x3c04dc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C04D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C04E0u;
}
