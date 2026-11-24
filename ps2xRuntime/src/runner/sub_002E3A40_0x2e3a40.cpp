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

// Function: sub_002E3A40
// Address: 0x2e3a40 - 0x2e43c0
void sub_002E3A40_0x2e3a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3A40_0x2e3a40");
#endif

    switch (ctx->pc) {
        case 0x2e3b18u: goto label_2e3b18;
        case 0x2e3b58u: goto label_2e3b58;
        case 0x2e3b68u: goto label_2e3b68;
        case 0x2e3b84u: goto label_2e3b84;
        case 0x2e3bd4u: goto label_2e3bd4;
        case 0x2e3c0cu: goto label_2e3c0c;
        case 0x2e3c1cu: goto label_2e3c1c;
        case 0x2e3c2cu: goto label_2e3c2c;
        case 0x2e3c3cu: goto label_2e3c3c;
        case 0x2e3c4cu: goto label_2e3c4c;
        case 0x2e3c64u: goto label_2e3c64;
        case 0x2e3c74u: goto label_2e3c74;
        case 0x2e3c7cu: goto label_2e3c7c;
        case 0x2e3ca0u: goto label_2e3ca0;
        case 0x2e3cb0u: goto label_2e3cb0;
        case 0x2e3d18u: goto label_2e3d18;
        case 0x2e3d58u: goto label_2e3d58;
        case 0x2e3d68u: goto label_2e3d68;
        case 0x2e3d88u: goto label_2e3d88;
        case 0x2e3d90u: goto label_2e3d90;
        case 0x2e3dc0u: goto label_2e3dc0;
        case 0x2e3dd0u: goto label_2e3dd0;
        case 0x2e3de0u: goto label_2e3de0;
        case 0x2e3df8u: goto label_2e3df8;
        case 0x2e3e08u: goto label_2e3e08;
        case 0x2e3e10u: goto label_2e3e10;
        case 0x2e3e34u: goto label_2e3e34;
        case 0x2e3e44u: goto label_2e3e44;
        case 0x2e3e54u: goto label_2e3e54;
        case 0x2e3e64u: goto label_2e3e64;
        case 0x2e3e88u: goto label_2e3e88;
        case 0x2e3ed8u: goto label_2e3ed8;
        case 0x2e3f04u: goto label_2e3f04;
        case 0x2e3f14u: goto label_2e3f14;
        case 0x2e3f44u: goto label_2e3f44;
        case 0x2e3f4cu: goto label_2e3f4c;
        case 0x2e3f7cu: goto label_2e3f7c;
        case 0x2e3f8cu: goto label_2e3f8c;
        case 0x2e3fa4u: goto label_2e3fa4;
        case 0x2e3fb4u: goto label_2e3fb4;
        case 0x2e3fe4u: goto label_2e3fe4;
        case 0x2e3fecu: goto label_2e3fec;
        case 0x2e401cu: goto label_2e401c;
        case 0x2e402cu: goto label_2e402c;
        case 0x2e4044u: goto label_2e4044;
        case 0x2e4054u: goto label_2e4054;
        case 0x2e4068u: goto label_2e4068;
        case 0x2e4080u: goto label_2e4080;
        case 0x2e40a8u: goto label_2e40a8;
        case 0x2e40f8u: goto label_2e40f8;
        case 0x2e4124u: goto label_2e4124;
        case 0x2e4134u: goto label_2e4134;
        case 0x2e4164u: goto label_2e4164;
        case 0x2e416cu: goto label_2e416c;
        case 0x2e4194u: goto label_2e4194;
        case 0x2e41a4u: goto label_2e41a4;
        case 0x2e41d4u: goto label_2e41d4;
        case 0x2e41dcu: goto label_2e41dc;
        case 0x2e4210u: goto label_2e4210;
        case 0x2e4220u: goto label_2e4220;
        case 0x2e4230u: goto label_2e4230;
        case 0x2e4248u: goto label_2e4248;
        case 0x2e427cu: goto label_2e427c;
        case 0x2e4298u: goto label_2e4298;
        case 0x2e42a8u: goto label_2e42a8;
        case 0x2e42bcu: goto label_2e42bc;
        case 0x2e42e8u: goto label_2e42e8;
        case 0x2e430cu: goto label_2e430c;
        case 0x2e4318u: goto label_2e4318;
        case 0x2e4348u: goto label_2e4348;
        case 0x2e4358u: goto label_2e4358;
        case 0x2e4368u: goto label_2e4368;
        case 0x2e4378u: goto label_2e4378;
        default: break;
    }

    ctx->pc = 0x2e3a40u;

    // 0x2e3a40: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x2e3a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x2e3a44: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2e3a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2e3a48: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2e3a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2e3a4c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2e3a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2e3a50: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2e3a50u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3a54: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2e3a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2e3a58: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2e3a58u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3a5c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2e3a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2e3a60: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2e3a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2e3a64: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e3a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2e3a68: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e3a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e3a6c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e3a6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3a70: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e3a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e3a74: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2e3a74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3a78: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2e3a78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2e3a7c: 0x3c107000  lui         $s0, 0x7000
    ctx->pc = 0x2e3a7cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)28672 << 16));
    // 0x2e3a80: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x2e3a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2e3a84: 0x26430010  addiu       $v1, $s2, 0x10
    ctx->pc = 0x2e3a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2e3a88: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x2e3a88u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e3a8c: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x2e3a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x2e3a90: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e3a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e3a94: 0x92240002  lbu         $a0, 0x2($s1)
    ctx->pc = 0x2e3a94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2e3a98: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2e3a98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2e3a9c: 0x10830180  beq         $a0, $v1, . + 4 + (0x180 << 2)
    ctx->pc = 0x2E3A9Cu;
    {
        const bool branch_taken_0x2e3a9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e3a9c) {
            ctx->pc = 0x2E40A0u;
            goto label_2e40a0;
        }
    }
    ctx->pc = 0x2E3AA4u;
    // 0x2e3aa4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e3aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e3aa8: 0x108300f5  beq         $a0, $v1, . + 4 + (0xF5 << 2)
    ctx->pc = 0x2E3AA8u;
    {
        const bool branch_taken_0x2e3aa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E3AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3AA8u;
        // 0x2e3aac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3aa8) {
            ctx->pc = 0x2E3E80u;
            goto label_2e3e80;
        }
    }
    ctx->pc = 0x2E3AB0u;
    // 0x2e3ab0: 0x10830087  beq         $a0, $v1, . + 4 + (0x87 << 2)
    ctx->pc = 0x2E3AB0u;
    {
        const bool branch_taken_0x2e3ab0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e3ab0) {
            ctx->pc = 0x2E3CD0u;
            goto label_2e3cd0;
        }
    }
    ctx->pc = 0x2E3AB8u;
    // 0x2e3ab8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2e3ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e3abc: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E3ABCu;
    {
        const bool branch_taken_0x2e3abc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e3abc) {
            ctx->pc = 0x2E3AD0u;
            goto label_2e3ad0;
        }
    }
    ctx->pc = 0x2E3AC4u;
    // 0x2e3ac4: 0x10000232  b           . + 4 + (0x232 << 2)
    ctx->pc = 0x2E3AC4u;
    {
        const bool branch_taken_0x2e3ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3ac4) {
            ctx->pc = 0x2E4390u;
            goto label_2e4390;
        }
    }
    ctx->pc = 0x2E3ACCu;
    // 0x2e3acc: 0x0  nop
    ctx->pc = 0x2e3accu;
    // NOP
label_2e3ad0:
    // 0x2e3ad0: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x2e3ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2e3ad4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2e3ad4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3ad8: 0x8ec40094  lw          $a0, 0x94($s6)
    ctx->pc = 0x2e3ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 148)));
    // 0x2e3adc: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2e3adcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e3ae0: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x2e3ae0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e3ae4: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x2e3ae4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e3ae8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2e3ae8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2e3aec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2e3aecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e3af0: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x2e3af0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x2e3af4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2e3af4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2e3af8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2e3af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2e3afc: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2e3afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2e3b00: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x2e3b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2e3b04: 0x24650040  addiu       $a1, $v1, 0x40
    ctx->pc = 0x2e3b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x2e3b08: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x2e3b08u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e3b0c: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x2E3B0Cu;
    {
        const bool branch_taken_0x2e3b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3B0Cu;
        // 0x2e3b10: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3b0c) {
            ctx->pc = 0x2E3CB8u;
            goto label_2e3cb8;
        }
    }
    ctx->pc = 0x2E3B14u;
    // 0x2e3b14: 0x0  nop
    ctx->pc = 0x2e3b14u;
    // NOP
label_2e3b18:
    // 0x2e3b18: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x2e3b18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2e3b1c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2e3b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2e3b20: 0x8c530020  lw          $s3, 0x20($v0)
    ctx->pc = 0x2e3b20u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2e3b24: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x2e3b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2e3b28: 0xc66c0008  lwc1        $f12, 0x8($s3)
    ctx->pc = 0x2e3b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e3b2c: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x2e3b2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e3b30: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2e3b30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e3b34: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2e3b34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2e3b38: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2e3b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2e3b3c: 0x24700040  addiu       $s0, $v1, 0x40
    ctx->pc = 0x2e3b3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x2e3b40: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2e3b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e3b44: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2e3b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3b48: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2e3b48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2e3b4c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2e3b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2e3b50: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E3B50u;
    SET_GPR_U32(ctx, 31, 0x2E3B58u);
    ctx->pc = 0x2E3B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3B50u;
    // 0x2e3b54: 0x24550040  addiu       $s5, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E3B50u, 0x2E3B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3B58u;
label_2e3b58:
    // 0x2e3b58: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2e3b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e3b5c: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x2e3b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2e3b60: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E3B60u;
    SET_GPR_U32(ctx, 31, 0x2E3B68u);
    ctx->pc = 0x2E3B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3B60u;
    // 0x2e3b64: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E3B60u, 0x2E3B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3B68u;
label_2e3b68:
    // 0x2e3b68: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x2e3b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3b6c: 0x27a30130  addiu       $v1, $sp, 0x130
    ctx->pc = 0x2e3b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2e3b70: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x2e3b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3b74: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2e3b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2e3b78: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2e3b78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2e3b7c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E3B7Cu;
    {
        const bool branch_taken_0x2e3b7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3B7Cu;
        // 0x2e3b80: 0xe6000014  swc1        $f0, 0x14($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3b7c) {
            ctx->pc = 0x2E3BA0u;
            goto label_2e3ba0;
        }
    }
    ctx->pc = 0x2E3B84u;
label_2e3b84:
    // 0x2e3b84: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2e3b84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e3b88: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e3b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e3b8c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e3b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e3b90: 0x0  nop
    ctx->pc = 0x2e3b90u;
    // NOP
    // 0x2e3b94: 0x0  nop
    ctx->pc = 0x2e3b94u;
    // NOP
    // 0x2e3b98: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E3B98u;
    {
        const bool branch_taken_0x2e3b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e3b98) {
            ctx->pc = 0x2E3B84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e3b84;
        }
    }
    ctx->pc = 0x2E3BA0u;
label_2e3ba0:
    // 0x2e3ba0: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2e3ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3ba4: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2e3ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2e3ba8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2e3ba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3bac: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x2e3bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x2e3bb0: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2e3bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3bb4: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x2e3bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x2e3bb8: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x2e3bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3bbc: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x2e3bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x2e3bc0: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x2e3bc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e3bc4: 0x8ec20094  lw          $v0, 0x94($s6)
    ctx->pc = 0x2e3bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 148)));
    // 0x2e3bc8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2e3bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2e3bcc: 0xc041442  jal         func_105108
    ctx->pc = 0x2E3BCCu;
    SET_GPR_U32(ctx, 31, 0x2E3BD4u);
    ctx->pc = 0x2E3BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3BCCu;
    // 0x2e3bd0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x2E3BCCu, 0x2E3BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3BD4u;
label_2e3bd4:
    // 0x2e3bd4: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2e3bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2e3bd8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e3bd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3bdc: 0x27a30120  addiu       $v1, $sp, 0x120
    ctx->pc = 0x2e3bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2e3be0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2e3be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2e3be4: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x2e3be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2e3be8: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x2e3be8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2e3bec: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2e3becu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e3bf0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e3bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e3bf4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2e3bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2e3bf8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2e3bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2e3bfc: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2e3bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2e3c00: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x2e3c00u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e3c04: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E3C04u;
    SET_GPR_U32(ctx, 31, 0x2E3C0Cu);
    ctx->pc = 0x2E3C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3C04u;
    // 0x2e3c08: 0x7c670000  sq          $a3, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E3C04u, 0x2E3C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3C0Cu;
label_2e3c0c:
    // 0x2e3c0c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2e3c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2e3c10: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2e3c10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3c14: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2E3C14u;
    SET_GPR_U32(ctx, 31, 0x2E3C1Cu);
    ctx->pc = 0x2E3C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3C14u;
    // 0x2e3c18: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2E3C14u, 0x2E3C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3C1Cu;
label_2e3c1c:
    // 0x2e3c1c: 0xc66c000c  lwc1        $f12, 0xC($s3)
    ctx->pc = 0x2e3c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e3c20: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2e3c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2e3c24: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E3C24u;
    SET_GPR_U32(ctx, 31, 0x2E3C2Cu);
    ctx->pc = 0x2E3C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3C24u;
    // 0x2e3c28: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E3C24u, 0x2E3C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3C2Cu;
label_2e3c2c:
    // 0x2e3c2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e3c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3c30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e3c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3c34: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E3C34u;
    SET_GPR_U32(ctx, 31, 0x2E3C3Cu);
    ctx->pc = 0x2E3C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3C34u;
    // 0x2e3c38: 0x27a60120  addiu       $a2, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E3C34u, 0x2E3C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3C3Cu;
label_2e3c3c:
    // 0x2e3c3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e3c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3c40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e3c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3c44: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E3C44u;
    SET_GPR_U32(ctx, 31, 0x2E3C4Cu);
    ctx->pc = 0x2E3C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3C44u;
    // 0x2e3c48: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E3C44u, 0x2E3C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3C4Cu;
label_2e3c4c:
    // 0x2e3c4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e3c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3c50: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2e3c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3c54: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2e3c54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3c58: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2e3c58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3c5c: 0xc0b8d18  jal         func_2E3460
    ctx->pc = 0x2E3C5Cu;
    SET_GPR_U32(ctx, 31, 0x2E3C64u);
    ctx->pc = 0x2E3C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3C5Cu;
    // 0x2e3c60: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3460u, 0x2E3C5Cu, 0x2E3C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3C64u;
label_2e3c64:
    // 0x2e3c64: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2e3c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3c68: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2e3c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2e3c6c: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2E3C6Cu;
    SET_GPR_U32(ctx, 31, 0x2E3C74u);
    ctx->pc = 0x2E3C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3C6Cu;
    // 0x2e3c70: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2E3C6Cu, 0x2E3C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3C74u;
label_2e3c74:
    // 0x2e3c74: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x2E3C74u;
    SET_GPR_U32(ctx, 31, 0x2E3C7Cu);
    ctx->pc = 0x2E3C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3C74u;
    // 0x2e3c78: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x2E3C74u, 0x2E3C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3C7Cu;
label_2e3c7c:
    // 0x2e3c7c: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x2e3c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3c80: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2e3c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2e3c84: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2e3c84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3c88: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x2e3c88u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2e3c8c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x2e3c8cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2e3c90: 0x0  nop
    ctx->pc = 0x2e3c90u;
    // NOP
    // 0x2e3c94: 0x0  nop
    ctx->pc = 0x2e3c94u;
    // NOP
    // 0x2e3c98: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E3C98u;
    SET_GPR_U32(ctx, 31, 0x2E3CA0u);
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E3C98u, 0x2E3CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3CA0u;
label_2e3ca0:
    // 0x2e3ca0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e3ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3ca4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e3ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3ca8: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E3CA8u;
    SET_GPR_U32(ctx, 31, 0x2E3CB0u);
    ctx->pc = 0x2E3CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3CA8u;
    // 0x2e3cac: 0x27a60140  addiu       $a2, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E3CA8u, 0x2E3CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3CB0u;
label_2e3cb0:
    // 0x2e3cb0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2e3cb0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2e3cb4: 0x0  nop
    ctx->pc = 0x2e3cb4u;
    // NOP
label_2e3cb8:
    // 0x2e3cb8: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x2e3cb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x2e3cbc: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x2e3cbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e3cc0: 0x1460ff95  bnez        $v1, . + 4 + (-0x6B << 2)
    ctx->pc = 0x2E3CC0u;
    {
        const bool branch_taken_0x2e3cc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e3cc0) {
            ctx->pc = 0x2E3B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e3b18;
        }
    }
    ctx->pc = 0x2E3CC8u;
    // 0x2e3cc8: 0x100001b1  b           . + 4 + (0x1B1 << 2)
    ctx->pc = 0x2E3CC8u;
    {
        const bool branch_taken_0x2e3cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3cc8) {
            ctx->pc = 0x2E4390u;
            goto label_2e4390;
        }
    }
    ctx->pc = 0x2E3CD0u;
label_2e3cd0:
    // 0x2e3cd0: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x2e3cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2e3cd4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2e3cd4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3cd8: 0x8ec40094  lw          $a0, 0x94($s6)
    ctx->pc = 0x2e3cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 148)));
    // 0x2e3cdc: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2e3cdcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e3ce0: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x2e3ce0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e3ce4: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x2e3ce4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e3ce8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2e3ce8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2e3cec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2e3cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e3cf0: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x2e3cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x2e3cf4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2e3cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2e3cf8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2e3cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2e3cfc: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2e3cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2e3d00: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x2e3d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2e3d04: 0x24650040  addiu       $a1, $v1, 0x40
    ctx->pc = 0x2e3d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x2e3d08: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x2e3d08u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e3d0c: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x2E3D0Cu;
    {
        const bool branch_taken_0x2e3d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3D0Cu;
        // 0x2e3d10: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3d0c) {
            ctx->pc = 0x2E3E68u;
            goto label_2e3e68;
        }
    }
    ctx->pc = 0x2E3D14u;
    // 0x2e3d14: 0x0  nop
    ctx->pc = 0x2e3d14u;
    // NOP
label_2e3d18:
    // 0x2e3d18: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x2e3d18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2e3d1c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2e3d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2e3d20: 0x8c530020  lw          $s3, 0x20($v0)
    ctx->pc = 0x2e3d20u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2e3d24: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x2e3d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2e3d28: 0xc66c0008  lwc1        $f12, 0x8($s3)
    ctx->pc = 0x2e3d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e3d2c: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x2e3d2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e3d30: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2e3d30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e3d34: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2e3d34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2e3d38: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2e3d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2e3d3c: 0x24700040  addiu       $s0, $v1, 0x40
    ctx->pc = 0x2e3d3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x2e3d40: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2e3d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e3d44: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2e3d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3d48: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2e3d48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2e3d4c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2e3d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2e3d50: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E3D50u;
    SET_GPR_U32(ctx, 31, 0x2E3D58u);
    ctx->pc = 0x2E3D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3D50u;
    // 0x2e3d54: 0x24550040  addiu       $s5, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E3D50u, 0x2E3D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3D58u;
label_2e3d58:
    // 0x2e3d58: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2e3d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e3d5c: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x2e3d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2e3d60: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E3D60u;
    SET_GPR_U32(ctx, 31, 0x2E3D68u);
    ctx->pc = 0x2E3D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3D60u;
    // 0x2e3d64: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E3D60u, 0x2E3D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3D68u;
label_2e3d68:
    // 0x2e3d68: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x2e3d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3d6c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2e3d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2e3d70: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x2e3d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3d74: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2e3d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3d78: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2e3d78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3d7c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2e3d7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2e3d80: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2E3D80u;
    SET_GPR_U32(ctx, 31, 0x2E3D88u);
    ctx->pc = 0x2E3D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3D80u;
    // 0x2e3d84: 0xe6000014  swc1        $f0, 0x14($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2E3D80u, 0x2E3D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3D88u;
label_2e3d88:
    // 0x2e3d88: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x2E3D88u;
    SET_GPR_U32(ctx, 31, 0x2E3D90u);
    ctx->pc = 0x2E3D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3D88u;
    // 0x2e3d8c: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x2E3D88u, 0x2E3D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3D90u;
label_2e3d90:
    // 0x2e3d90: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x2e3d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3d94: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2e3d94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e3d98: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x2E3D98u;
    {
        const bool branch_taken_0x2e3d98 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E3D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3D98u;
        // 0x2e3d9c: 0x46010081  sub.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3d98) {
            ctx->pc = 0x2E3DD0u;
            goto label_2e3dd0;
        }
    }
    ctx->pc = 0x2E3DA0u;
    // 0x2e3da0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2e3da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2e3da4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2e3da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3da8: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2e3da8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x2e3dac: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x2e3dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3db0: 0x0  nop
    ctx->pc = 0x2e3db0u;
    // NOP
    // 0x2e3db4: 0x0  nop
    ctx->pc = 0x2e3db4u;
    // NOP
    // 0x2e3db8: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E3DB8u;
    SET_GPR_U32(ctx, 31, 0x2E3DC0u);
    ctx->pc = 0x2E3DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3DB8u;
    // 0x2e3dbc: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E3DB8u, 0x2E3DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3DC0u;
label_2e3dc0:
    // 0x2e3dc0: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2e3dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e3dc4: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x2e3dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2e3dc8: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E3DC8u;
    SET_GPR_U32(ctx, 31, 0x2E3DD0u);
    ctx->pc = 0x2E3DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3DC8u;
    // 0x2e3dcc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E3DC8u, 0x2E3DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3DD0u;
label_2e3dd0:
    // 0x2e3dd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e3dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3dd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e3dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3dd8: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E3DD8u;
    SET_GPR_U32(ctx, 31, 0x2E3DE0u);
    ctx->pc = 0x2E3DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3DD8u;
    // 0x2e3ddc: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E3DD8u, 0x2E3DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3DE0u;
label_2e3de0:
    // 0x2e3de0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e3de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3de4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2e3de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3de8: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2e3de8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3dec: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2e3decu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3df0: 0xc0b8d18  jal         func_2E3460
    ctx->pc = 0x2E3DF0u;
    SET_GPR_U32(ctx, 31, 0x2E3DF8u);
    ctx->pc = 0x2E3DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3DF0u;
    // 0x2e3df4: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3460u, 0x2E3DF0u, 0x2E3DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3DF8u;
label_2e3df8:
    // 0x2e3df8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2e3df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3dfc: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2e3dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2e3e00: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2E3E00u;
    SET_GPR_U32(ctx, 31, 0x2E3E08u);
    ctx->pc = 0x2E3E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3E00u;
    // 0x2e3e04: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2E3E00u, 0x2E3E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3E08u;
label_2e3e08:
    // 0x2e3e08: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x2E3E08u;
    SET_GPR_U32(ctx, 31, 0x2E3E10u);
    ctx->pc = 0x2E3E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3E08u;
    // 0x2e3e0c: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x2E3E08u, 0x2E3E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3E10u;
label_2e3e10:
    // 0x2e3e10: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x2e3e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3e14: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2e3e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2e3e18: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2e3e18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3e1c: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x2e3e1cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2e3e20: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x2e3e20u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2e3e24: 0x0  nop
    ctx->pc = 0x2e3e24u;
    // NOP
    // 0x2e3e28: 0x0  nop
    ctx->pc = 0x2e3e28u;
    // NOP
    // 0x2e3e2c: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E3E2Cu;
    SET_GPR_U32(ctx, 31, 0x2E3E34u);
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E3E2Cu, 0x2E3E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3E34u;
label_2e3e34:
    // 0x2e3e34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e3e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3e38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e3e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3e3c: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E3E3Cu;
    SET_GPR_U32(ctx, 31, 0x2E3E44u);
    ctx->pc = 0x2E3E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3E3Cu;
    // 0x2e3e40: 0x27a60110  addiu       $a2, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E3E3Cu, 0x2E3E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3E44u;
label_2e3e44:
    // 0x2e3e44: 0xc66c000c  lwc1        $f12, 0xC($s3)
    ctx->pc = 0x2e3e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e3e48: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2e3e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2e3e4c: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E3E4Cu;
    SET_GPR_U32(ctx, 31, 0x2E3E54u);
    ctx->pc = 0x2E3E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3E4Cu;
    // 0x2e3e50: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E3E4Cu, 0x2E3E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3E54u;
label_2e3e54:
    // 0x2e3e54: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2e3e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e3e58: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x2e3e58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2e3e5c: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E3E5Cu;
    SET_GPR_U32(ctx, 31, 0x2E3E64u);
    ctx->pc = 0x2E3E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3E5Cu;
    // 0x2e3e60: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E3E5Cu, 0x2E3E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3E64u;
label_2e3e64:
    // 0x2e3e64: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2e3e64u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2e3e68:
    // 0x2e3e68: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x2e3e68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x2e3e6c: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x2e3e6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e3e70: 0x1460ffa9  bnez        $v1, . + 4 + (-0x57 << 2)
    ctx->pc = 0x2E3E70u;
    {
        const bool branch_taken_0x2e3e70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e3e70) {
            ctx->pc = 0x2E3D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e3d18;
        }
    }
    ctx->pc = 0x2E3E78u;
    // 0x2e3e78: 0x10000145  b           . + 4 + (0x145 << 2)
    ctx->pc = 0x2E3E78u;
    {
        const bool branch_taken_0x2e3e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3e78) {
            ctx->pc = 0x2E4390u;
            goto label_2e4390;
        }
    }
    ctx->pc = 0x2E3E80u;
label_2e3e80:
    // 0x2e3e80: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2E3E80u;
    {
        const bool branch_taken_0x2e3e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3E80u;
        // 0x2e3e84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3e80) {
            ctx->pc = 0x2E3EC0u;
            goto label_2e3ec0;
        }
    }
    ctx->pc = 0x2E3E88u;
label_2e3e88:
    // 0x2e3e88: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2e3e88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2e3e8c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2e3e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2e3e90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e3e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3e94: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x2e3e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2e3e98: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x2e3e98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2e3e9c: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x2e3e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2e3ea0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2e3ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2e3ea4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2e3ea4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e3ea8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2e3ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e3eac: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2e3eacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2e3eb0: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2e3eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2e3eb4: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x2e3eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x2e3eb8: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2e3eb8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e3ebc: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x2e3ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
label_2e3ec0:
    // 0x2e3ec0: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x2e3ec0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x2e3ec4: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x2e3ec4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e3ec8: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2E3EC8u;
    {
        const bool branch_taken_0x2e3ec8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3EC8u;
        // 0x2e3ecc: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3ec8) {
            ctx->pc = 0x2E3E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e3e88;
        }
    }
    ctx->pc = 0x2E3ED0u;
    // 0x2e3ed0: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x2E3ED0u;
    {
        const bool branch_taken_0x2e3ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3ed0) {
            ctx->pc = 0x2E4088u;
            goto label_2e4088;
        }
    }
    ctx->pc = 0x2E3ED8u;
label_2e3ed8:
    // 0x2e3ed8: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x2e3ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x2e3edc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2e3edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2e3ee0: 0x8c540020  lw          $s4, 0x20($v0)
    ctx->pc = 0x2e3ee0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2e3ee4: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x2e3ee4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2e3ee8: 0xc68c0008  lwc1        $f12, 0x8($s4)
    ctx->pc = 0x2e3ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e3eec: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2e3eecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2e3ef0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2e3ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2e3ef4: 0x24530040  addiu       $s3, $v0, 0x40
    ctx->pc = 0x2e3ef4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2e3ef8: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x2e3ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2e3efc: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E3EFCu;
    SET_GPR_U32(ctx, 31, 0x2E3F04u);
    ctx->pc = 0x2E3F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3EFCu;
    // 0x2e3f00: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E3EFCu, 0x2E3F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3F04u;
label_2e3f04:
    // 0x2e3f04: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x2e3f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2e3f08: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x2e3f08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2e3f0c: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E3F0Cu;
    SET_GPR_U32(ctx, 31, 0x2E3F14u);
    ctx->pc = 0x2E3F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3F0Cu;
    // 0x2e3f10: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E3F0Cu, 0x2E3F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3F14u;
label_2e3f14:
    // 0x2e3f14: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x2e3f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3f18: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x2e3f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3f1c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2e3f1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2e3f20: 0x12a00025  beqz        $s5, . + 4 + (0x25 << 2)
    ctx->pc = 0x2E3F20u;
    {
        const bool branch_taken_0x2e3f20 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3F20u;
        // 0x2e3f24: 0xe6600014  swc1        $f0, 0x14($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3f20) {
            ctx->pc = 0x2E3FB8u;
            goto label_2e3fb8;
        }
    }
    ctx->pc = 0x2E3F28u;
    // 0x2e3f28: 0x26a3ffff  addiu       $v1, $s5, -0x1
    ctx->pc = 0x2e3f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x2e3f2c: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x2e3f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x2e3f30: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2e3f30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e3f34: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x2e3f34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2e3f38: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x2e3f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2e3f3c: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2E3F3Cu;
    SET_GPR_U32(ctx, 31, 0x2E3F44u);
    ctx->pc = 0x2E3F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3F3Cu;
    // 0x2e3f40: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2E3F3Cu, 0x2E3F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3F44u;
label_2e3f44:
    // 0x2e3f44: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x2E3F44u;
    SET_GPR_U32(ctx, 31, 0x2E3F4Cu);
    ctx->pc = 0x2E3F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3F44u;
    // 0x2e3f48: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x2E3F44u, 0x2E3F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3F4Cu;
label_2e3f4c:
    // 0x2e3f4c: 0xc6810010  lwc1        $f1, 0x10($s4)
    ctx->pc = 0x2e3f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3f50: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2e3f50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e3f54: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x2E3F54u;
    {
        const bool branch_taken_0x2e3f54 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E3F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3F54u;
        // 0x2e3f58: 0x46010081  sub.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3f54) {
            ctx->pc = 0x2E3FB8u;
            goto label_2e3fb8;
        }
    }
    ctx->pc = 0x2E3F5Cu;
    // 0x2e3f5c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2e3f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2e3f60: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x2e3f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2e3f64: 0x46001503  div.s       $f20, $f2, $f0
    ctx->pc = 0x2e3f64u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x2e3f68: 0xc681000c  lwc1        $f1, 0xC($s4)
    ctx->pc = 0x2e3f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3f6c: 0x0  nop
    ctx->pc = 0x2e3f6cu;
    // NOP
    // 0x2e3f70: 0x0  nop
    ctx->pc = 0x2e3f70u;
    // NOP
    // 0x2e3f74: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E3F74u;
    SET_GPR_U32(ctx, 31, 0x2E3F7Cu);
    ctx->pc = 0x2E3F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3F74u;
    // 0x2e3f78: 0x4601a302  mul.s       $f12, $f20, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E3F74u, 0x2E3F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3F7Cu;
label_2e3f7c:
    // 0x2e3f7c: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x2e3f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2e3f80: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x2e3f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2e3f84: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E3F84u;
    SET_GPR_U32(ctx, 31, 0x2E3F8Cu);
    ctx->pc = 0x2E3F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3F84u;
    // 0x2e3f88: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E3F84u, 0x2E3F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3F8Cu;
label_2e3f8c:
    // 0x2e3f8c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2e3f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2e3f90: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2e3f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2e3f94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e3f94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3f98: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x2e3f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2e3f9c: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E3F9Cu;
    SET_GPR_U32(ctx, 31, 0x2E3FA4u);
    ctx->pc = 0x2E3FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3F9Cu;
    // 0x2e3fa0: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E3F9Cu, 0x2E3FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3FA4u;
label_2e3fa4:
    // 0x2e3fa4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e3fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3fa8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e3fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3fac: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E3FACu;
    SET_GPR_U32(ctx, 31, 0x2E3FB4u);
    ctx->pc = 0x2E3FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3FACu;
    // 0x2e3fb0: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E3FACu, 0x2E3FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3FB4u;
label_2e3fb4:
    // 0x2e3fb4: 0x0  nop
    ctx->pc = 0x2e3fb4u;
    // NOP
label_2e3fb8:
    // 0x2e3fb8: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x2e3fb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x2e3fbc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e3fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e3fc0: 0x2a2082a  slt         $at, $s5, $v0
    ctx->pc = 0x2e3fc0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e3fc4: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x2E3FC4u;
    {
        const bool branch_taken_0x2e3fc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3FC4u;
        // 0x2e3fc8: 0x26a30001  addiu       $v1, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3fc4) {
            ctx->pc = 0x2E4058u;
            goto label_2e4058;
        }
    }
    ctx->pc = 0x2E3FCCu;
    // 0x2e3fcc: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x2e3fccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x2e3fd0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2e3fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e3fd4: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x2e3fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2e3fd8: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x2e3fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2e3fdc: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2E3FDCu;
    SET_GPR_U32(ctx, 31, 0x2E3FE4u);
    ctx->pc = 0x2E3FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3FDCu;
    // 0x2e3fe0: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2E3FDCu, 0x2E3FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3FE4u;
label_2e3fe4:
    // 0x2e3fe4: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x2E3FE4u;
    SET_GPR_U32(ctx, 31, 0x2E3FECu);
    ctx->pc = 0x2E3FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3FE4u;
    // 0x2e3fe8: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x2E3FE4u, 0x2E3FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3FECu;
label_2e3fec:
    // 0x2e3fec: 0xc6810010  lwc1        $f1, 0x10($s4)
    ctx->pc = 0x2e3fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3ff0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2e3ff0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e3ff4: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x2E3FF4u;
    {
        const bool branch_taken_0x2e3ff4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E3FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3FF4u;
        // 0x2e3ff8: 0x46010081  sub.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3ff4) {
            ctx->pc = 0x2E4058u;
            goto label_2e4058;
        }
    }
    ctx->pc = 0x2E3FFCu;
    // 0x2e3ffc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2e3ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2e4000: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2e4000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2e4004: 0x46001503  div.s       $f20, $f2, $f0
    ctx->pc = 0x2e4004u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x2e4008: 0xc681000c  lwc1        $f1, 0xC($s4)
    ctx->pc = 0x2e4008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e400c: 0x0  nop
    ctx->pc = 0x2e400cu;
    // NOP
    // 0x2e4010: 0x0  nop
    ctx->pc = 0x2e4010u;
    // NOP
    // 0x2e4014: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E4014u;
    SET_GPR_U32(ctx, 31, 0x2E401Cu);
    ctx->pc = 0x2E4018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4014u;
    // 0x2e4018: 0x4601a302  mul.s       $f12, $f20, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E4014u, 0x2E401Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E401Cu;
label_2e401c:
    // 0x2e401c: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x2e401cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2e4020: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x2e4020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2e4024: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E4024u;
    SET_GPR_U32(ctx, 31, 0x2E402Cu);
    ctx->pc = 0x2E4028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4024u;
    // 0x2e4028: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E4024u, 0x2E402Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E402Cu;
label_2e402c:
    // 0x2e402c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2e402cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2e4030: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2e4030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2e4034: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e4034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4038: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2e4038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2e403c: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E403Cu;
    SET_GPR_U32(ctx, 31, 0x2E4044u);
    ctx->pc = 0x2E4040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E403Cu;
    // 0x2e4040: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E403Cu, 0x2E4044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4044u;
label_2e4044:
    // 0x2e4044: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e4044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4048: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e4048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e404c: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E404Cu;
    SET_GPR_U32(ctx, 31, 0x2E4054u);
    ctx->pc = 0x2E4050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E404Cu;
    // 0x2e4050: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E404Cu, 0x2E4054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4054u;
label_2e4054:
    // 0x2e4054: 0x0  nop
    ctx->pc = 0x2e4054u;
    // NOP
label_2e4058:
    // 0x2e4058: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e4058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e405c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e405cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4060: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E4060u;
    SET_GPR_U32(ctx, 31, 0x2E4068u);
    ctx->pc = 0x2E4064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4060u;
    // 0x2e4064: 0x26660010  addiu       $a2, $s3, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E4060u, 0x2E4068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4068u;
label_2e4068:
    // 0x2e4068: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e4068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e406c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2e406cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4070: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2e4070u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4074: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2e4074u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4078: 0xc0b8d18  jal         func_2E3460
    ctx->pc = 0x2E4078u;
    SET_GPR_U32(ctx, 31, 0x2E4080u);
    ctx->pc = 0x2E407Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4078u;
    // 0x2e407c: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3460u, 0x2E4078u, 0x2E4080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4080u;
label_2e4080:
    // 0x2e4080: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2e4080u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2e4084: 0x0  nop
    ctx->pc = 0x2e4084u;
    // NOP
label_2e4088:
    // 0x2e4088: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x2e4088u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x2e408c: 0x2a3182a  slt         $v1, $s5, $v1
    ctx->pc = 0x2e408cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e4090: 0x1460ff91  bnez        $v1, . + 4 + (-0x6F << 2)
    ctx->pc = 0x2E4090u;
    {
        const bool branch_taken_0x2e4090 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4090) {
            ctx->pc = 0x2E3ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e3ed8;
        }
    }
    ctx->pc = 0x2E4098u;
    // 0x2e4098: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x2E4098u;
    {
        const bool branch_taken_0x2e4098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4098) {
            ctx->pc = 0x2E4390u;
            goto label_2e4390;
        }
    }
    ctx->pc = 0x2E40A0u;
label_2e40a0:
    // 0x2e40a0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2E40A0u;
    {
        const bool branch_taken_0x2e40a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E40A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E40A0u;
        // 0x2e40a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e40a0) {
            ctx->pc = 0x2E40E0u;
            goto label_2e40e0;
        }
    }
    ctx->pc = 0x2E40A8u;
label_2e40a8:
    // 0x2e40a8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2e40a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2e40ac: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2e40acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2e40b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e40b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e40b4: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x2e40b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2e40b8: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x2e40b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2e40bc: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x2e40bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2e40c0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2e40c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2e40c4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2e40c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e40c8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2e40c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e40cc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2e40ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2e40d0: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2e40d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2e40d4: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x2e40d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x2e40d8: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2e40d8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e40dc: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x2e40dcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
label_2e40e0:
    // 0x2e40e0: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x2e40e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x2e40e4: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x2e40e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e40e8: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2E40E8u;
    {
        const bool branch_taken_0x2e40e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E40ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E40E8u;
        // 0x2e40ec: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e40e8) {
            ctx->pc = 0x2E40A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e40a8;
        }
    }
    ctx->pc = 0x2E40F0u;
    // 0x2e40f0: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x2E40F0u;
    {
        const bool branch_taken_0x2e40f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e40f0) {
            ctx->pc = 0x2E4380u;
            goto label_2e4380;
        }
    }
    ctx->pc = 0x2E40F8u;
label_2e40f8:
    // 0x2e40f8: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x2e40f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x2e40fc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2e40fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2e4100: 0x8c540020  lw          $s4, 0x20($v0)
    ctx->pc = 0x2e4100u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2e4104: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x2e4104u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2e4108: 0xc68c0008  lwc1        $f12, 0x8($s4)
    ctx->pc = 0x2e4108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e410c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2e410cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2e4110: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2e4110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2e4114: 0x24530040  addiu       $s3, $v0, 0x40
    ctx->pc = 0x2e4114u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2e4118: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x2e4118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2e411c: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E411Cu;
    SET_GPR_U32(ctx, 31, 0x2E4124u);
    ctx->pc = 0x2E4120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E411Cu;
    // 0x2e4120: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E411Cu, 0x2E4124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4124u;
label_2e4124:
    // 0x2e4124: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x2e4124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2e4128: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x2e4128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2e412c: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E412Cu;
    SET_GPR_U32(ctx, 31, 0x2E4134u);
    ctx->pc = 0x2E4130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E412Cu;
    // 0x2e4130: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E412Cu, 0x2E4134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4134u;
label_2e4134:
    // 0x2e4134: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x2e4134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4138: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x2e4138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e413c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2e413cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2e4140: 0x12a00019  beqz        $s5, . + 4 + (0x19 << 2)
    ctx->pc = 0x2E4140u;
    {
        const bool branch_taken_0x2e4140 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4140u;
        // 0x2e4144: 0xe6600014  swc1        $f0, 0x14($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4140) {
            ctx->pc = 0x2E41A8u;
            goto label_2e41a8;
        }
    }
    ctx->pc = 0x2E4148u;
    // 0x2e4148: 0x26a3ffff  addiu       $v1, $s5, -0x1
    ctx->pc = 0x2e4148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x2e414c: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x2e414cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x2e4150: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2e4150u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e4154: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x2e4154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2e4158: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x2e4158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2e415c: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2E415Cu;
    SET_GPR_U32(ctx, 31, 0x2E4164u);
    ctx->pc = 0x2E4160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E415Cu;
    // 0x2e4160: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2E415Cu, 0x2E4164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4164u;
label_2e4164:
    // 0x2e4164: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x2E4164u;
    SET_GPR_U32(ctx, 31, 0x2E416Cu);
    ctx->pc = 0x2E4168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4164u;
    // 0x2e4168: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x2E4164u, 0x2E416Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E416Cu;
label_2e416c:
    // 0x2e416c: 0xc6820010  lwc1        $f2, 0x10($s4)
    ctx->pc = 0x2e416cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e4170: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2e4170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2e4174: 0xc681000c  lwc1        $f1, 0xC($s4)
    ctx->pc = 0x2e4174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4178: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2e4178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e417c: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x2e417cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2e4180: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2e4180u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x2e4184: 0x0  nop
    ctx->pc = 0x2e4184u;
    // NOP
    // 0x2e4188: 0x0  nop
    ctx->pc = 0x2e4188u;
    // NOP
    // 0x2e418c: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E418Cu;
    SET_GPR_U32(ctx, 31, 0x2E4194u);
    ctx->pc = 0x2E4190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E418Cu;
    // 0x2e4190: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E418Cu, 0x2E4194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4194u;
label_2e4194:
    // 0x2e4194: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x2e4194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2e4198: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2e4198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2e419c: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E419Cu;
    SET_GPR_U32(ctx, 31, 0x2E41A4u);
    ctx->pc = 0x2E41A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E419Cu;
    // 0x2e41a0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E419Cu, 0x2E41A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E41A4u;
label_2e41a4:
    // 0x2e41a4: 0x0  nop
    ctx->pc = 0x2e41a4u;
    // NOP
label_2e41a8:
    // 0x2e41a8: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x2e41a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x2e41ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e41acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e41b0: 0x2a2082a  slt         $at, $s5, $v0
    ctx->pc = 0x2e41b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e41b4: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x2E41B4u;
    {
        const bool branch_taken_0x2e41b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E41B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E41B4u;
        // 0x2e41b8: 0x26a30001  addiu       $v1, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e41b4) {
            ctx->pc = 0x2E4220u;
            goto label_2e4220;
        }
    }
    ctx->pc = 0x2E41BCu;
    // 0x2e41bc: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x2e41bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x2e41c0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2e41c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e41c4: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x2e41c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2e41c8: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x2e41c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2e41cc: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2E41CCu;
    SET_GPR_U32(ctx, 31, 0x2E41D4u);
    ctx->pc = 0x2E41D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E41CCu;
    // 0x2e41d0: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2E41CCu, 0x2E41D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E41D4u;
label_2e41d4:
    // 0x2e41d4: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x2E41D4u;
    SET_GPR_U32(ctx, 31, 0x2E41DCu);
    ctx->pc = 0x2E41D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E41D4u;
    // 0x2e41d8: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x2E41D4u, 0x2E41DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E41DCu;
label_2e41dc:
    // 0x2e41dc: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x2e41dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x2e41e0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2e41e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2e41e4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2e41e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2e41e8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2e41e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e41ec: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x2e41ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2e41f0: 0xc681000c  lwc1        $f1, 0xC($s4)
    ctx->pc = 0x2e41f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e41f4: 0xc4420010  lwc1        $f2, 0x10($v0)
    ctx->pc = 0x2e41f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e41f8: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x2e41f8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2e41fc: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2e41fcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x2e4200: 0x0  nop
    ctx->pc = 0x2e4200u;
    // NOP
    // 0x2e4204: 0x0  nop
    ctx->pc = 0x2e4204u;
    // NOP
    // 0x2e4208: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E4208u;
    SET_GPR_U32(ctx, 31, 0x2E4210u);
    ctx->pc = 0x2E420Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4208u;
    // 0x2e420c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E4208u, 0x2E4210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4210u;
label_2e4210:
    // 0x2e4210: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x2e4210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2e4214: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2e4214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2e4218: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E4218u;
    SET_GPR_U32(ctx, 31, 0x2E4220u);
    ctx->pc = 0x2E421Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4218u;
    // 0x2e421c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E4218u, 0x2E4220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4220u;
label_2e4220:
    // 0x2e4220: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e4220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4224: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e4224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4228: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E4228u;
    SET_GPR_U32(ctx, 31, 0x2E4230u);
    ctx->pc = 0x2E422Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4228u;
    // 0x2e422c: 0x26660010  addiu       $a2, $s3, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E4228u, 0x2E4230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4230u;
label_2e4230:
    // 0x2e4230: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e4230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4234: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2e4234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4238: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2e4238u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e423c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2e423cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4240: 0xc0b8d18  jal         func_2E3460
    ctx->pc = 0x2E4240u;
    SET_GPR_U32(ctx, 31, 0x2E4248u);
    ctx->pc = 0x2E4244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4240u;
    // 0x2e4244: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3460u, 0x2E4240u, 0x2E4248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4248u;
label_2e4248:
    // 0x2e4248: 0x1aa0001f  blez        $s5, . + 4 + (0x1F << 2)
    ctx->pc = 0x2E4248u;
    {
        const bool branch_taken_0x2e4248 = (GPR_S64(ctx, 21) <= 0);
        if (branch_taken_0x2e4248) {
            ctx->pc = 0x2E42C8u;
            goto label_2e42c8;
        }
    }
    ctx->pc = 0x2E4250u;
    // 0x2e4250: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x2e4250u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x2e4254: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e4254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e4258: 0x2a2082a  slt         $at, $s5, $v0
    ctx->pc = 0x2e4258u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e425c: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x2E425Cu;
    {
        const bool branch_taken_0x2e425c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E425Cu;
        // 0x2e4260: 0x26a3ffff  addiu       $v1, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e425c) {
            ctx->pc = 0x2E42C8u;
            goto label_2e42c8;
        }
    }
    ctx->pc = 0x2E4264u;
    // 0x2e4264: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x2e4264u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x2e4268: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2e4268u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e426c: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x2e426cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2e4270: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x2e4270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2e4274: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2E4274u;
    SET_GPR_U32(ctx, 31, 0x2E427Cu);
    ctx->pc = 0x2E4278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4274u;
    // 0x2e4278: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2E4274u, 0x2E427Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E427Cu;
label_2e427c:
    // 0x2e427c: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x2e427cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2e4280: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x2e4280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x2e4284: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2e4284u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e4288: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x2e4288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2e428c: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x2e428cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2e4290: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2E4290u;
    SET_GPR_U32(ctx, 31, 0x2E4298u);
    ctx->pc = 0x2E4294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4290u;
    // 0x2e4294: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2E4290u, 0x2E4298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4298u;
label_2e4298:
    // 0x2e4298: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2e4298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2e429c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2e429cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2e42a0: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E42A0u;
    SET_GPR_U32(ctx, 31, 0x2E42A8u);
    ctx->pc = 0x2E42A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E42A0u;
    // 0x2e42a4: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E42A0u, 0x2E42A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E42A8u;
label_2e42a8:
    // 0x2e42a8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2e42a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2e42ac: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2e42acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2e42b0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2e42b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e42b4: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E42B4u;
    SET_GPR_U32(ctx, 31, 0x2E42BCu);
    ctx->pc = 0x2E42B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E42B4u;
    // 0x2e42b8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E42B4u, 0x2E42BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E42BCu;
label_2e42bc:
    // 0x2e42bc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2E42BCu;
    {
        const bool branch_taken_0x2e42bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e42bc) {
            ctx->pc = 0x2E4310u;
            goto label_2e4310;
        }
    }
    ctx->pc = 0x2E42C4u;
    // 0x2e42c4: 0x0  nop
    ctx->pc = 0x2e42c4u;
    // NOP
label_2e42c8:
    // 0x2e42c8: 0x12a00009  beqz        $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E42C8u;
    {
        const bool branch_taken_0x2e42c8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E42CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E42C8u;
        // 0x2e42cc: 0x26a3ffff  addiu       $v1, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e42c8) {
            ctx->pc = 0x2E42F0u;
            goto label_2e42f0;
        }
    }
    ctx->pc = 0x2E42D0u;
    // 0x2e42d0: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x2e42d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x2e42d4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2e42d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e42d8: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x2e42d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2e42dc: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x2e42dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2e42e0: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2E42E0u;
    SET_GPR_U32(ctx, 31, 0x2E42E8u);
    ctx->pc = 0x2E42E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E42E0u;
    // 0x2e42e4: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2E42E0u, 0x2E42E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E42E8u;
label_2e42e8:
    // 0x2e42e8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2E42E8u;
    {
        const bool branch_taken_0x2e42e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e42e8) {
            ctx->pc = 0x2E4310u;
            goto label_2e4310;
        }
    }
    ctx->pc = 0x2E42F0u;
label_2e42f0:
    // 0x2e42f0: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x2e42f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2e42f4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2e42f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e42f8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2e42f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2e42fc: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x2e42fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x2e4300: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x2e4300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2e4304: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2E4304u;
    SET_GPR_U32(ctx, 31, 0x2E430Cu);
    ctx->pc = 0x2E4308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4304u;
    // 0x2e4308: 0x2023021  addu        $a2, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2E4304u, 0x2E430Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E430Cu;
label_2e430c:
    // 0x2e430c: 0x0  nop
    ctx->pc = 0x2e430cu;
    // NOP
label_2e4310:
    // 0x2e4310: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x2E4310u;
    SET_GPR_U32(ctx, 31, 0x2E4318u);
    ctx->pc = 0x2E4314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4310u;
    // 0x2e4314: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x2E4310u, 0x2E4318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4318u;
label_2e4318:
    // 0x2e4318: 0xc6810010  lwc1        $f1, 0x10($s4)
    ctx->pc = 0x2e4318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e431c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2e431cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e4320: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x2E4320u;
    {
        const bool branch_taken_0x2e4320 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e4320) {
            ctx->pc = 0x2E4378u;
            goto label_2e4378;
        }
    }
    ctx->pc = 0x2E4328u;
    // 0x2e4328: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x2e4328u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2e432c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2e432cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2e4330: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2e4330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4334: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x2e4334u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2e4338: 0x0  nop
    ctx->pc = 0x2e4338u;
    // NOP
    // 0x2e433c: 0x0  nop
    ctx->pc = 0x2e433cu;
    // NOP
    // 0x2e4340: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E4340u;
    SET_GPR_U32(ctx, 31, 0x2E4348u);
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E4340u, 0x2E4348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4348u;
label_2e4348:
    // 0x2e4348: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e4348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e434c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e434cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4350: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E4350u;
    SET_GPR_U32(ctx, 31, 0x2E4358u);
    ctx->pc = 0x2E4354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4350u;
    // 0x2e4354: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E4350u, 0x2E4358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4358u;
label_2e4358:
    // 0x2e4358: 0xc68c000c  lwc1        $f12, 0xC($s4)
    ctx->pc = 0x2e4358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e435c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2e435cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2e4360: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E4360u;
    SET_GPR_U32(ctx, 31, 0x2E4368u);
    ctx->pc = 0x2E4364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4360u;
    // 0x2e4364: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E4360u, 0x2E4368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4368u;
label_2e4368:
    // 0x2e4368: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x2e4368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2e436c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2e436cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2e4370: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E4370u;
    SET_GPR_U32(ctx, 31, 0x2E4378u);
    ctx->pc = 0x2E4374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4370u;
    // 0x2e4374: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E4370u, 0x2E4378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4378u;
label_2e4378:
    // 0x2e4378: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2e4378u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2e437c: 0x0  nop
    ctx->pc = 0x2e437cu;
    // NOP
label_2e4380:
    // 0x2e4380: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x2e4380u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x2e4384: 0x2a3182a  slt         $v1, $s5, $v1
    ctx->pc = 0x2e4384u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e4388: 0x1460ff5b  bnez        $v1, . + 4 + (-0xA5 << 2)
    ctx->pc = 0x2E4388u;
    {
        const bool branch_taken_0x2e4388 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4388) {
            ctx->pc = 0x2E40F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e40f8;
        }
    }
    ctx->pc = 0x2E4390u;
label_2e4390:
    // 0x2e4390: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2e4390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e4394: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2e4394u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e4398: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e4398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e439c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2e439cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e43a0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2e43a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e43a4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2e43a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e43a8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2e43a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e43ac: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e43acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e43b0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e43b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e43b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e43b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e43b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E43B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E43BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E43B8u;
        // 0x2e43bc: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E43B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E43C0u;
}
