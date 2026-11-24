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

// Function: sub_00265690
// Address: 0x265690 - 0x265a88
void sub_00265690_0x265690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265690_0x265690");
#endif

    switch (ctx->pc) {
        case 0x265860u: goto label_265860;
        case 0x26587cu: goto label_26587c;
        case 0x26588cu: goto label_26588c;
        case 0x2658b4u: goto label_2658b4;
        case 0x2658c0u: goto label_2658c0;
        case 0x265994u: goto label_265994;
        case 0x2659b0u: goto label_2659b0;
        case 0x2659e4u: goto label_2659e4;
        default: break;
    }

    ctx->pc = 0x265690u;

    // 0x265690: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x265690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x265694: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x265694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x265698: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x265698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26569c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26569cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2656a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2656a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2656a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2656a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2656a8: 0xac910168  sw          $s1, 0x168($a0)
    ctx->pc = 0x2656a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 360), GPR_U32(ctx, 17));
    // 0x2656ac: 0xdc830020  ld          $v1, 0x20($a0)
    ctx->pc = 0x2656acu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2656b0: 0xfc830018  sd          $v1, 0x18($a0)
    ctx->pc = 0x2656b0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 3));
    // 0x2656b4: 0x9083000f  lbu         $v1, 0xF($a0)
    ctx->pc = 0x2656b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 15)));
    // 0x2656b8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2656B8u;
    {
        const bool branch_taken_0x2656b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2656BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2656B8u;
        // 0x2656bc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2656b8) {
            ctx->pc = 0x2656C8u;
            goto label_2656c8;
        }
    }
    ctx->pc = 0x2656C0u;
    // 0x2656c0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2656c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2656c4: 0xa243000f  sb          $v1, 0xF($s2)
    ctx->pc = 0x2656c4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 15), (uint8_t)GPR_U32(ctx, 3));
label_2656c8:
    // 0x2656c8: 0x92430011  lbu         $v1, 0x11($s2)
    ctx->pc = 0x2656c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 17)));
    // 0x2656cc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2656CCu;
    {
        const bool branch_taken_0x2656cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2656cc) {
            ctx->pc = 0x2656E0u;
            goto label_2656e0;
        }
    }
    ctx->pc = 0x2656D4u;
    // 0x2656d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2656d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2656d8: 0xa2430011  sb          $v1, 0x11($s2)
    ctx->pc = 0x2656d8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x2656dc: 0x0  nop
    ctx->pc = 0x2656dcu;
    // NOP
label_2656e0:
    // 0x2656e0: 0x92430010  lbu         $v1, 0x10($s2)
    ctx->pc = 0x2656e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2656e4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2656E4u;
    {
        const bool branch_taken_0x2656e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2656e4) {
            ctx->pc = 0x2656F8u;
            goto label_2656f8;
        }
    }
    ctx->pc = 0x2656ECu;
    // 0x2656ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2656ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2656f0: 0xa2430010  sb          $v1, 0x10($s2)
    ctx->pc = 0x2656f0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x2656f4: 0x0  nop
    ctx->pc = 0x2656f4u;
    // NOP
label_2656f8:
    // 0x2656f8: 0x97858858  lhu         $a1, -0x77A8($gp)
    ctx->pc = 0x2656f8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936664)));
    // 0x2656fc: 0x14a0000a  bnez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x2656FCu;
    {
        const bool branch_taken_0x2656fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2656fc) {
            ctx->pc = 0x265728u;
            goto label_265728;
        }
    }
    ctx->pc = 0x265704u;
    // 0x265704: 0x8e240148  lw          $a0, 0x148($s1)
    ctx->pc = 0x265704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x265708: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x265708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x26570c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x26570cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x265710: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x265710u;
    {
        const bool branch_taken_0x265710 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x265710) {
            ctx->pc = 0x265728u;
            goto label_265728;
        }
    }
    ctx->pc = 0x265718u;
    // 0x265718: 0x92430014  lbu         $v1, 0x14($s2)
    ctx->pc = 0x265718u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x26571c: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x26571Cu;
    {
        const bool branch_taken_0x26571c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26571c) {
            ctx->pc = 0x265760u;
            goto label_265760;
        }
    }
    ctx->pc = 0x265724u;
    // 0x265724: 0x0  nop
    ctx->pc = 0x265724u;
    // NOP
label_265728:
    // 0x265728: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x265728u;
    {
        const bool branch_taken_0x265728 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x26572Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265728u;
        // 0x26572c: 0x3c040001  lui         $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265728) {
            ctx->pc = 0x265748u;
            goto label_265748;
        }
    }
    ctx->pc = 0x265730u;
    // 0x265730: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x265730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x265734: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x265734u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x265738: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x265738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x26573c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26573Cu;
    {
        const bool branch_taken_0x26573c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26573Cu;
        // 0x265740: 0xfe430020  sd          $v1, 0x20($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 32), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26573c) {
            ctx->pc = 0x265750u;
            goto label_265750;
        }
    }
    ctx->pc = 0x265744u;
    // 0x265744: 0x0  nop
    ctx->pc = 0x265744u;
    // NOP
label_265748:
    // 0x265748: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x265748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x26574c: 0xfe430020  sd          $v1, 0x20($s2)
    ctx->pc = 0x26574cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 32), GPR_U64(ctx, 3));
label_265750:
    // 0x265750: 0xfe400028  sd          $zero, 0x28($s2)
    ctx->pc = 0x265750u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 40), GPR_U64(ctx, 0));
    // 0x265754: 0xfe400030  sd          $zero, 0x30($s2)
    ctx->pc = 0x265754u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 48), GPR_U64(ctx, 0));
    // 0x265758: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x265758u;
    {
        const bool branch_taken_0x265758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26575Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265758u;
        // 0x26575c: 0xfe400038  sd          $zero, 0x38($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 56), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265758) {
            ctx->pc = 0x2658D8u;
            goto label_2658d8;
        }
    }
    ctx->pc = 0x265760u;
label_265760:
    // 0x265760: 0x92440160  lbu         $a0, 0x160($s2)
    ctx->pc = 0x265760u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 352)));
    // 0x265764: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x265764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x265768: 0x1083004b  beq         $a0, $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x265768u;
    {
        const bool branch_taken_0x265768 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x26576Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265768u;
        // 0x26576c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265768) {
            ctx->pc = 0x265898u;
            goto label_265898;
        }
    }
    ctx->pc = 0x265770u;
    // 0x265770: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x265770u;
    {
        const bool branch_taken_0x265770 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x265770) {
            ctx->pc = 0x265780u;
            goto label_265780;
        }
    }
    ctx->pc = 0x265778u;
    // 0x265778: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x265778u;
    {
        const bool branch_taken_0x265778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265778) {
            ctx->pc = 0x2658C8u;
            goto label_2658c8;
        }
    }
    ctx->pc = 0x265780u;
label_265780:
    // 0x265780: 0x92470161  lbu         $a3, 0x161($s2)
    ctx->pc = 0x265780u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 353)));
    // 0x265784: 0x3c08008c  lui         $t0, 0x8C
    ctx->pc = 0x265784u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)140 << 16));
    // 0x265788: 0x3c05008c  lui         $a1, 0x8C
    ctx->pc = 0x265788u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)140 << 16));
    // 0x26578c: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x26578cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x265790: 0x3c03008c  lui         $v1, 0x8C
    ctx->pc = 0x265790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)140 << 16));
    // 0x265794: 0x3c02008c  lui         $v0, 0x8C
    ctx->pc = 0x265794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)140 << 16));
    // 0x265798: 0x2508f740  addiu       $t0, $t0, -0x8C0
    ctx->pc = 0x265798u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294965056));
    // 0x26579c: 0x24a5f744  addiu       $a1, $a1, -0x8BC
    ctx->pc = 0x26579cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965060));
    // 0x2657a0: 0x2484f748  addiu       $a0, $a0, -0x8B8
    ctx->pc = 0x2657a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965064));
    // 0x2657a4: 0x2463f750  addiu       $v1, $v1, -0x8B0
    ctx->pc = 0x2657a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965072));
    // 0x2657a8: 0x2442f758  addiu       $v0, $v0, -0x8A8
    ctx->pc = 0x2657a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965080));
    // 0x2657ac: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x2657acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2657b0: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2657b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2657b4: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x2657b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2657b8: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x2657b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x2657bc: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x2657bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2657c0: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x2657c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x2657c4: 0x92470161  lbu         $a3, 0x161($s2)
    ctx->pc = 0x2657c4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 353)));
    // 0x2657c8: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x2657c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2657cc: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2657ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2657d0: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x2657d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2657d4: 0x1063821  addu        $a3, $t0, $a2
    ctx->pc = 0x2657d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x2657d8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2657d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2657dc: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x2657dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2657e0: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x2657e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2657e4: 0xc03027  not         $a2, $a2
    ctx->pc = 0x2657e4u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 6) | GPR_U64(ctx, 0)));
    // 0x2657e8: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x2657e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x2657ec: 0xae450004  sw          $a1, 0x4($s2)
    ctx->pc = 0x2657ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 5));
    // 0x2657f0: 0x92460161  lbu         $a2, 0x161($s2)
    ctx->pc = 0x2657f0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 353)));
    // 0x2657f4: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x2657f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2657f8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2657f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2657fc: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2657fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x265800: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x265800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x265804: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x265804u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x265808: 0xa6440008  sh          $a0, 0x8($s2)
    ctx->pc = 0x265808u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x26580c: 0x92450161  lbu         $a1, 0x161($s2)
    ctx->pc = 0x26580cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 353)));
    // 0x265810: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x265810u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x265814: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x265814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x265818: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x265818u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x26581c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26581cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x265820: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x265820u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x265824: 0xfe430020  sd          $v1, 0x20($s2)
    ctx->pc = 0x265824u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 32), GPR_U64(ctx, 3));
    // 0x265828: 0xfe400028  sd          $zero, 0x28($s2)
    ctx->pc = 0x265828u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 40), GPR_U64(ctx, 0));
    // 0x26582c: 0x92440161  lbu         $a0, 0x161($s2)
    ctx->pc = 0x26582cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 353)));
    // 0x265830: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x265830u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x265834: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x265834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x265838: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x265838u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x26583c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26583cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x265840: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x265840u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x265844: 0xfe420030  sd          $v0, 0x30($s2)
    ctx->pc = 0x265844u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 48), GPR_U64(ctx, 2));
    // 0x265848: 0x86430008  lh          $v1, 0x8($s2)
    ctx->pc = 0x265848u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x26584c: 0x8782885c  lh          $v0, -0x77A4($gp)
    ctx->pc = 0x26584cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936668)));
    // 0x265850: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x265850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x265854: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x265854u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x265858: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x265858u;
    SET_GPR_U32(ctx, 31, 0x265860u);
    ctx->pc = 0x26585Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265858u;
    // 0x26585c: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x265858u, 0x265860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265860u;
label_265860:
    // 0x265860: 0xa642000c  sh          $v0, 0xC($s2)
    ctx->pc = 0x265860u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x265864: 0x8643000c  lh          $v1, 0xC($s2)
    ctx->pc = 0x265864u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x265868: 0x862200c2  lh          $v0, 0xC2($s1)
    ctx->pc = 0x265868u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x26586c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x26586cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x265870: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x265870u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x265874: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x265874u;
    SET_GPR_U32(ctx, 31, 0x26587Cu);
    ctx->pc = 0x265878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265874u;
    // 0x265878: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x265874u, 0x26587Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26587Cu;
label_26587c:
    // 0x26587c: 0xa642000a  sh          $v0, 0xA($s2)
    ctx->pc = 0x26587cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x265880: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x265880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265884: 0xc099404  jal         func_265010
    ctx->pc = 0x265884u;
    SET_GPR_U32(ctx, 31, 0x26588Cu);
    ctx->pc = 0x265888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265884u;
    // 0x265888: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265010u, 0x265884u, 0x26588Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26588Cu;
label_26588c:
    // 0x26588c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x26588Cu;
    {
        const bool branch_taken_0x26588c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26588c) {
            ctx->pc = 0x2658D8u;
            goto label_2658d8;
        }
    }
    ctx->pc = 0x265894u;
    // 0x265894: 0x0  nop
    ctx->pc = 0x265894u;
    // NOP
label_265898:
    // 0x265898: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x265898u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x26589c: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x26589cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x2658a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2658a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2658a4: 0xfe400028  sd          $zero, 0x28($s2)
    ctx->pc = 0x2658a4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 40), GPR_U64(ctx, 0));
    // 0x2658a8: 0x92460161  lbu         $a2, 0x161($s2)
    ctx->pc = 0x2658a8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 353)));
    // 0x2658ac: 0xc099130  jal         func_2644C0
    ctx->pc = 0x2658ACu;
    SET_GPR_U32(ctx, 31, 0x2658B4u);
    ctx->pc = 0x2658B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2658ACu;
    // 0x2658b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2644C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2644C0u, 0x2658ACu, 0x2658B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2658B4u;
label_2658b4:
    // 0x2658b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2658b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2658b8: 0xc0994d8  jal         func_265360
    ctx->pc = 0x2658B8u;
    SET_GPR_U32(ctx, 31, 0x2658C0u);
    ctx->pc = 0x2658BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2658B8u;
    // 0x2658bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265360u, 0x2658B8u, 0x2658C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2658C0u;
label_2658c0:
    // 0x2658c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2658C0u;
    {
        const bool branch_taken_0x2658c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2658c0) {
            ctx->pc = 0x2658D8u;
            goto label_2658d8;
        }
    }
    ctx->pc = 0x2658C8u;
label_2658c8:
    // 0x2658c8: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x2658c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2658cc: 0xfe430020  sd          $v1, 0x20($s2)
    ctx->pc = 0x2658ccu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 32), GPR_U64(ctx, 3));
    // 0x2658d0: 0xfe400028  sd          $zero, 0x28($s2)
    ctx->pc = 0x2658d0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 40), GPR_U64(ctx, 0));
    // 0x2658d4: 0xfe400030  sd          $zero, 0x30($s2)
    ctx->pc = 0x2658d4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 48), GPR_U64(ctx, 0));
label_2658d8:
    // 0x2658d8: 0xde440020  ld          $a0, 0x20($s2)
    ctx->pc = 0x2658d8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2658dc: 0xde430038  ld          $v1, 0x38($s2)
    ctx->pc = 0x2658dcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x2658e0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2658e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2658e4: 0xfe430020  sd          $v1, 0x20($s2)
    ctx->pc = 0x2658e4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 32), GPR_U64(ctx, 3));
    // 0x2658e8: 0xfe400038  sd          $zero, 0x38($s2)
    ctx->pc = 0x2658e8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 56), GPR_U64(ctx, 0));
    // 0x2658ec: 0xde500020  ld          $s0, 0x20($s2)
    ctx->pc = 0x2658ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2658f0: 0x32030800  andi        $v1, $s0, 0x800
    ctx->pc = 0x2658f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2048);
    // 0x2658f4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2658F4u;
    {
        const bool branch_taken_0x2658f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2658F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2658F4u;
        // 0x2658f8: 0x320300c0  andi        $v1, $s0, 0xC0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2658f4) {
            ctx->pc = 0x265908u;
            goto label_265908;
        }
    }
    ctx->pc = 0x2658FCu;
    // 0x2658fc: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2658FCu;
    {
        const bool branch_taken_0x2658fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2658fc) {
            ctx->pc = 0x265908u;
            goto label_265908;
        }
    }
    ctx->pc = 0x265904u;
    // 0x265904: 0x36100001  ori         $s0, $s0, 0x1
    ctx->pc = 0x265904u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
label_265908:
    // 0x265908: 0x32030004  andi        $v1, $s0, 0x4
    ctx->pc = 0x265908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
    // 0x26590c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26590Cu;
    {
        const bool branch_taken_0x26590c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x265910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26590Cu;
        // 0x265910: 0x24030100  addiu       $v1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26590c) {
            ctx->pc = 0x265920u;
            goto label_265920;
        }
    }
    ctx->pc = 0x265914u;
    // 0x265914: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x265914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x265918: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x265918u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x26591c: 0x0  nop
    ctx->pc = 0x26591cu;
    // NOP
label_265920:
    // 0x265920: 0x32030080  andi        $v1, $s0, 0x80
    ctx->pc = 0x265920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)128);
    // 0x265924: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x265924u;
    {
        const bool branch_taken_0x265924 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x265924) {
            ctx->pc = 0x265930u;
            goto label_265930;
        }
    }
    ctx->pc = 0x26592Cu;
    // 0x26592c: 0x36100200  ori         $s0, $s0, 0x200
    ctx->pc = 0x26592cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)512);
label_265930:
    // 0x265930: 0x32030040  andi        $v1, $s0, 0x40
    ctx->pc = 0x265930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)64);
    // 0x265934: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x265934u;
    {
        const bool branch_taken_0x265934 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x265934) {
            ctx->pc = 0x265940u;
            goto label_265940;
        }
    }
    ctx->pc = 0x26593Cu;
    // 0x26593c: 0x36100100  ori         $s0, $s0, 0x100
    ctx->pc = 0x26593cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)256);
label_265940:
    // 0x265940: 0x32030080  andi        $v1, $s0, 0x80
    ctx->pc = 0x265940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)128);
    // 0x265944: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x265944u;
    {
        const bool branch_taken_0x265944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x265948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265944u;
        // 0x265948: 0x2403ffbf  addiu       $v1, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265944) {
            ctx->pc = 0x265958u;
            goto label_265958;
        }
    }
    ctx->pc = 0x26594Cu;
    // 0x26594c: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x26594cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x265950: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x265950u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x265954: 0x0  nop
    ctx->pc = 0x265954u;
    // NOP
label_265958:
    // 0x265958: 0x32030400  andi        $v1, $s0, 0x400
    ctx->pc = 0x265958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1024);
    // 0x26595c: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x26595Cu;
    {
        const bool branch_taken_0x26595c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26595c) {
            ctx->pc = 0x2659C8u;
            goto label_2659c8;
        }
    }
    ctx->pc = 0x265964u;
    // 0x265964: 0x8643000a  lh          $v1, 0xA($s2)
    ctx->pc = 0x265964u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x265968: 0x2861fc00  slti        $at, $v1, -0x400
    ctx->pc = 0x265968u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294966272) ? 1 : 0);
    // 0x26596c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x26596Cu;
    {
        const bool branch_taken_0x26596c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x265970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26596Cu;
        // 0x265970: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26596c) {
            ctx->pc = 0x265978u;
            goto label_265978;
        }
    }
    ctx->pc = 0x265974u;
    // 0x265974: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x265974u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_265978:
    // 0x265978: 0x28610401  slti        $at, $v1, 0x401
    ctx->pc = 0x265978u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x26597c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x26597Cu;
    {
        const bool branch_taken_0x26597c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x265980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26597Cu;
        // 0x265980: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26597c) {
            ctx->pc = 0x265988u;
            goto label_265988;
        }
    }
    ctx->pc = 0x265984u;
    // 0x265984: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x265984u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_265988:
    // 0x265988: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x265988u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x26598c: 0xc0969a4  jal         func_25A690
    ctx->pc = 0x26598Cu;
    SET_GPR_U32(ctx, 31, 0x265994u);
    ctx->pc = 0x265990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26598Cu;
    // 0x265990: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A690u, 0x26598Cu, 0x265994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265994u;
label_265994:
    // 0x265994: 0x2c410401  sltiu       $at, $v0, 0x401
    ctx->pc = 0x265994u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
    // 0x265998: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x265998u;
    {
        const bool branch_taken_0x265998 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x265998) {
            ctx->pc = 0x2659A8u;
            goto label_2659a8;
        }
    }
    ctx->pc = 0x2659A0u;
    // 0x2659a0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2659a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2659a4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x2659a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_2659a8:
    // 0x2659a8: 0xc0969a4  jal         func_25A690
    ctx->pc = 0x2659A8u;
    SET_GPR_U32(ctx, 31, 0x2659B0u);
    ctx->pc = 0x2659ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2659A8u;
    // 0x2659ac: 0x8644000a  lh          $a0, 0xA($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A690u, 0x2659A8u, 0x2659B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2659B0u;
label_2659b0:
    // 0x2659b0: 0x2c4107c8  sltiu       $at, $v0, 0x7C8
    ctx->pc = 0x2659b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1992) ? 1 : 0);
    // 0x2659b4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2659B4u;
    {
        const bool branch_taken_0x2659b4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2659B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2659B4u;
        // 0x2659b8: 0x34038000  ori         $v1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2659b4) {
            ctx->pc = 0x2659C8u;
            goto label_2659c8;
        }
    }
    ctx->pc = 0x2659BCu;
    // 0x2659bc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2659bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2659c0: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x2659c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x2659c4: 0x0  nop
    ctx->pc = 0x2659c4u;
    // NOP
label_2659c8:
    // 0x2659c8: 0xfe500020  sd          $s0, 0x20($s2)
    ctx->pc = 0x2659c8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 32), GPR_U64(ctx, 16));
    // 0x2659cc: 0xde430020  ld          $v1, 0x20($s2)
    ctx->pc = 0x2659ccu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2659d0: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x2659d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x2659d4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2659D4u;
    {
        const bool branch_taken_0x2659d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2659D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2659D4u;
        // 0x2659d8: 0xde500028  ld          $s0, 0x28($s2) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2659d4) {
            ctx->pc = 0x2659F8u;
            goto label_2659f8;
        }
    }
    ctx->pc = 0x2659DCu;
    // 0x2659dc: 0xc0969a4  jal         func_25A690
    ctx->pc = 0x2659DCu;
    SET_GPR_U32(ctx, 31, 0x2659E4u);
    ctx->pc = 0x2659E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2659DCu;
    // 0x2659e0: 0x8644000a  lh          $a0, 0xA($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A690u, 0x2659DCu, 0x2659E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2659E4u;
label_2659e4:
    // 0x2659e4: 0x2c41005b  sltiu       $at, $v0, 0x5B
    ctx->pc = 0x2659e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)91) ? 1 : 0);
    // 0x2659e8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2659E8u;
    {
        const bool branch_taken_0x2659e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2659e8) {
            ctx->pc = 0x2659F8u;
            goto label_2659f8;
        }
    }
    ctx->pc = 0x2659F0u;
    // 0x2659f0: 0x36100001  ori         $s0, $s0, 0x1
    ctx->pc = 0x2659f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
    // 0x2659f4: 0x0  nop
    ctx->pc = 0x2659f4u;
    // NOP
label_2659f8:
    // 0x2659f8: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x2659f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
    // 0x2659fc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2659FCu;
    {
        const bool branch_taken_0x2659fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2659fc) {
            ctx->pc = 0x265A08u;
            goto label_265a08;
        }
    }
    ctx->pc = 0x265A04u;
    // 0x265a04: 0x36100004  ori         $s0, $s0, 0x4
    ctx->pc = 0x265a04u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4);
label_265a08:
    // 0x265a08: 0x8e2406ac  lw          $a0, 0x6AC($s1)
    ctx->pc = 0x265a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1708)));
    // 0x265a0c: 0x30830100  andi        $v1, $a0, 0x100
    ctx->pc = 0x265a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x265a10: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x265A10u;
    {
        const bool branch_taken_0x265a10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x265a10) {
            ctx->pc = 0x265A20u;
            goto label_265a20;
        }
    }
    ctx->pc = 0x265A18u;
    // 0x265a18: 0x36100008  ori         $s0, $s0, 0x8
    ctx->pc = 0x265a18u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8);
    // 0x265a1c: 0x0  nop
    ctx->pc = 0x265a1cu;
    // NOP
label_265a20:
    // 0x265a20: 0x30830020  andi        $v1, $a0, 0x20
    ctx->pc = 0x265a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x265a24: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x265A24u;
    {
        const bool branch_taken_0x265a24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x265a24) {
            ctx->pc = 0x265A30u;
            goto label_265a30;
        }
    }
    ctx->pc = 0x265A2Cu;
    // 0x265a2c: 0x36100020  ori         $s0, $s0, 0x20
    ctx->pc = 0x265a2cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32);
label_265a30:
    // 0x265a30: 0x30830010  andi        $v1, $a0, 0x10
    ctx->pc = 0x265a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x265a34: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x265A34u;
    {
        const bool branch_taken_0x265a34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x265a34) {
            ctx->pc = 0x265A40u;
            goto label_265a40;
        }
    }
    ctx->pc = 0x265A3Cu;
    // 0x265a3c: 0x36100010  ori         $s0, $s0, 0x10
    ctx->pc = 0x265a3cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16);
label_265a40:
    // 0x265a40: 0x32030040  andi        $v1, $s0, 0x40
    ctx->pc = 0x265a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)64);
    // 0x265a44: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x265A44u;
    {
        const bool branch_taken_0x265a44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x265a44) {
            ctx->pc = 0x265A50u;
            goto label_265a50;
        }
    }
    ctx->pc = 0x265A4Cu;
    // 0x265a4c: 0x36100080  ori         $s0, $s0, 0x80
    ctx->pc = 0x265a4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)128);
label_265a50:
    // 0x265a50: 0xde430040  ld          $v1, 0x40($s2)
    ctx->pc = 0x265a50u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x265a54: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x265a54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x265a58: 0xfe400040  sd          $zero, 0x40($s2)
    ctx->pc = 0x265a58u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 64), GPR_U64(ctx, 0));
    // 0x265a5c: 0xfe500028  sd          $s0, 0x28($s2)
    ctx->pc = 0x265a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 40), GPR_U64(ctx, 16));
    // 0x265a60: 0x92430160  lbu         $v1, 0x160($s2)
    ctx->pc = 0x265a60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 352)));
    // 0x265a64: 0xa2430162  sb          $v1, 0x162($s2)
    ctx->pc = 0x265a64u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 354), (uint8_t)GPR_U32(ctx, 3));
    // 0x265a68: 0x92430161  lbu         $v1, 0x161($s2)
    ctx->pc = 0x265a68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 353)));
    // 0x265a6c: 0xa2430163  sb          $v1, 0x163($s2)
    ctx->pc = 0x265a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 355), (uint8_t)GPR_U32(ctx, 3));
    // 0x265a70: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x265a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x265a74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x265a74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x265a78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x265a78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265a7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x265a7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265a80: 0x3e00008  jr          $ra
    ctx->pc = 0x265A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265A80u;
        // 0x265a84: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265A88u;
}
