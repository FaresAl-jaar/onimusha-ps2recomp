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

// Function: sub_00376680
// Address: 0x376680 - 0x376b0c
void sub_00376680_0x376680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00376680_0x376680");
#endif

    switch (ctx->pc) {
        case 0x3766f0u: goto label_3766f0;
        case 0x376728u: goto label_376728;
        case 0x376738u: goto label_376738;
        case 0x37678cu: goto label_37678c;
        case 0x37679cu: goto label_37679c;
        case 0x3767acu: goto label_3767ac;
        case 0x376808u: goto label_376808;
        case 0x376818u: goto label_376818;
        case 0x376848u: goto label_376848;
        case 0x376860u: goto label_376860;
        case 0x376918u: goto label_376918;
        case 0x376930u: goto label_376930;
        case 0x376948u: goto label_376948;
        case 0x376954u: goto label_376954;
        case 0x376968u: goto label_376968;
        case 0x37699cu: goto label_37699c;
        case 0x3769d0u: goto label_3769d0;
        case 0x3769e0u: goto label_3769e0;
        case 0x376a4cu: goto label_376a4c;
        case 0x376af8u: goto label_376af8;
        default: break;
    }

    ctx->pc = 0x376680u;

    // 0x376680: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x376680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x376684: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x376684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x376688: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x376688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x37668c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37668cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x376690: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x376690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x376694: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x376694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376698: 0x90850521  lbu         $a1, 0x521($a0)
    ctx->pc = 0x376698u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x37669c: 0x10a300c8  beq         $a1, $v1, . + 4 + (0xC8 << 2)
    ctx->pc = 0x37669Cu;
    {
        const bool branch_taken_0x37669c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3766A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37669Cu;
        // 0x3766a0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37669c) {
            ctx->pc = 0x3769C0u;
            goto label_3769c0;
        }
    }
    ctx->pc = 0x3766A4u;
    // 0x3766a4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3766a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3766a8: 0x10a3009d  beq         $a1, $v1, . + 4 + (0x9D << 2)
    ctx->pc = 0x3766A8u;
    {
        const bool branch_taken_0x3766a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3766ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3766A8u;
        // 0x3766ac: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3766a8) {
            ctx->pc = 0x376920u;
            goto label_376920;
        }
    }
    ctx->pc = 0x3766B0u;
    // 0x3766b0: 0x10a3002d  beq         $a1, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x3766B0u;
    {
        const bool branch_taken_0x3766b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3766b0) {
            ctx->pc = 0x376768u;
            goto label_376768;
        }
    }
    ctx->pc = 0x3766B8u;
    // 0x3766b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3766b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3766bc: 0x10a30022  beq         $a1, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x3766BCu;
    {
        const bool branch_taken_0x3766bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3766bc) {
            ctx->pc = 0x376748u;
            goto label_376748;
        }
    }
    ctx->pc = 0x3766C4u;
    // 0x3766c4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3766C4u;
    {
        const bool branch_taken_0x3766c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3766c4) {
            ctx->pc = 0x3766D8u;
            goto label_3766d8;
        }
    }
    ctx->pc = 0x3766CCu;
    // 0x3766cc: 0x1000010a  b           . + 4 + (0x10A << 2)
    ctx->pc = 0x3766CCu;
    {
        const bool branch_taken_0x3766cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3766cc) {
            ctx->pc = 0x376AF8u;
            goto label_376af8;
        }
    }
    ctx->pc = 0x3766D4u;
    // 0x3766d4: 0x0  nop
    ctx->pc = 0x3766d4u;
    // NOP
label_3766d8:
    // 0x3766d8: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3766D8u;
    {
        const bool branch_taken_0x3766d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3766d8) {
            ctx->pc = 0x376730u;
            goto label_376730;
        }
    }
    ctx->pc = 0x3766E0u;
    // 0x3766e0: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x3766e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x3766e4: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x3766e4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3766e8: 0xc0aa088  jal         func_2A8220
    ctx->pc = 0x3766E8u;
    SET_GPR_U32(ctx, 31, 0x3766F0u);
    ctx->pc = 0x3766ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3766E8u;
    // 0x3766ec: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8220u, 0x3766E8u, 0x3766F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3766F0u;
label_3766f0:
    // 0x3766f0: 0xae220550  sw          $v0, 0x550($s1)
    ctx->pc = 0x3766f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 2));
    // 0x3766f4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3766f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3766f8: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x3766f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3766fc: 0x3c022400  lui         $v0, 0x2400
    ctx->pc = 0x3766fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9216 << 16));
    // 0x376700: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x376700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x376704: 0x34454402  ori         $a1, $v0, 0x4402
    ctx->pc = 0x376704u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17410);
    // 0x376708: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x376708u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37670c: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x37670cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x376710: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x376710u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376714: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x376714u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376718: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x376718u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37671c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x37671cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376720: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x376720u;
    SET_GPR_U32(ctx, 31, 0x376728u);
    ctx->pc = 0x376724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376720u;
    // 0x376724: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x376720u, 0x376728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376728u;
label_376728:
    // 0x376728: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x376728u;
    {
        const bool branch_taken_0x376728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x376728) {
            ctx->pc = 0x376738u;
            goto label_376738;
        }
    }
    ctx->pc = 0x376730u;
label_376730:
    // 0x376730: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x376730u;
    SET_GPR_U32(ctx, 31, 0x376738u);
    ctx->pc = 0x376734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376730u;
    // 0x376734: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x376730u, 0x376738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376738u;
label_376738:
    // 0x376738: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x376738u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x37673c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37673cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x376740: 0x100000ed  b           . + 4 + (0xED << 2)
    ctx->pc = 0x376740u;
    {
        const bool branch_taken_0x376740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x376744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376740u;
        // 0x376744: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376740) {
            ctx->pc = 0x376AF8u;
            goto label_376af8;
        }
    }
    ctx->pc = 0x376748u;
label_376748:
    // 0x376748: 0x86220526  lh          $v0, 0x526($s1)
    ctx->pc = 0x376748u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1318)));
    // 0x37674c: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x37674cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x376750: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x376750u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x376754: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x376754u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x376758: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x376758u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x37675c: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x37675cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x376760: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x376760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x376764: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x376764u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_376768:
    // 0x376768: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x376768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x37676c: 0x34438885  ori         $v1, $v0, 0x8885
    ctx->pc = 0x37676cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x376770: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x376770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x376774: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x376774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x376778: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x376778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x37677c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x37677cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x376780: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x376780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x376784: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x376784u;
    SET_GPR_U32(ctx, 31, 0x37678Cu);
    ctx->pc = 0x376788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376784u;
    // 0x376788: 0x262600a0  addiu       $a2, $s1, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x376784u, 0x37678Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37678Cu;
label_37678c:
    // 0x37678c: 0x8e260550  lw          $a2, 0x550($s1)
    ctx->pc = 0x37678cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    // 0x376790: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x376790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376794: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x376794u;
    SET_GPR_U32(ctx, 31, 0x37679Cu);
    ctx->pc = 0x376798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376794u;
    // 0x376798: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x376794u, 0x37679Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37679Cu;
label_37679c:
    // 0x37679c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37679Cu;
    {
        const bool branch_taken_0x37679c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3767A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37679Cu;
        // 0x3767a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37679c) {
            ctx->pc = 0x3767B0u;
            goto label_3767b0;
        }
    }
    ctx->pc = 0x3767A4u;
    // 0x3767a4: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3767A4u;
    SET_GPR_U32(ctx, 31, 0x3767ACu);
    ctx->pc = 0x3767A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3767A4u;
    // 0x3767a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3767A4u, 0x3767ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3767ACu;
label_3767ac:
    // 0x3767ac: 0x0  nop
    ctx->pc = 0x3767acu;
    // NOP
label_3767b0:
    // 0x3767b0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3767b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3767b4: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x3767b4u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x3767b8: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x3767b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3767bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3767bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3767c0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3767c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3767c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3767c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3767c8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3767c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3767cc: 0x7fa90060  sq          $t1, 0x60($sp)
    ctx->pc = 0x3767ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 9));
    // 0x3767d0: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x3767d0u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x3767d4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3767d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3767d8: 0x7fa60070  sq          $a2, 0x70($sp)
    ctx->pc = 0x3767d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 6));
    // 0x3767dc: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x3767dcu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x3767e0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3767e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3767e4: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x3767e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
    // 0x3767e8: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3767e8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x3767ec: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3767ecu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3767f0: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x3767f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3767f4: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3767f4u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3767f8: 0x92260558  lbu         $a2, 0x558($s1)
    ctx->pc = 0x3767f8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1368)));
    // 0x3767fc: 0xc62c0554  lwc1        $f12, 0x554($s1)
    ctx->pc = 0x3767fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x376800: 0xc0c0900  jal         func_302400
    ctx->pc = 0x376800u;
    SET_GPR_U32(ctx, 31, 0x376808u);
    ctx->pc = 0x376804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376800u;
    // 0x376804: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x376800u, 0x376808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376808u;
label_376808:
    // 0x376808: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x376808u;
    {
        const bool branch_taken_0x376808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376808u;
        // 0x37680c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376808) {
            ctx->pc = 0x376820u;
            goto label_376820;
        }
    }
    ctx->pc = 0x376810u;
    // 0x376810: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x376810u;
    SET_GPR_U32(ctx, 31, 0x376818u);
    ctx->pc = 0x376814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376810u;
    // 0x376814: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x376810u, 0x376818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376818u;
label_376818:
    // 0x376818: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x376818u;
    {
        const bool branch_taken_0x376818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x376818) {
            ctx->pc = 0x376AF8u;
            goto label_376af8;
        }
    }
    ctx->pc = 0x376820u;
label_376820:
    // 0x376820: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x376820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x376824: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x376824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x376828: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x376828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37682c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x37682cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x376830: 0x26260080  addiu       $a2, $s1, 0x80
    ctx->pc = 0x376830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x376834: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x376834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x376838: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x376838u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x37683c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x37683cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x376840: 0xc0c0980  jal         func_302600
    ctx->pc = 0x376840u;
    SET_GPR_U32(ctx, 31, 0x376848u);
    ctx->pc = 0x376844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376840u;
    // 0x376844: 0x27aa00ac  addiu       $t2, $sp, 0xAC (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302600u, 0x376840u, 0x376848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376848u;
label_376848:
    // 0x376848: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x376848u;
    {
        const bool branch_taken_0x376848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x376848) {
            ctx->pc = 0x376870u;
            goto label_376870;
        }
    }
    ctx->pc = 0x376850u;
    // 0x376850: 0x8e260550  lw          $a2, 0x550($s1)
    ctx->pc = 0x376850u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    // 0x376854: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x376854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376858: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x376858u;
    SET_GPR_U32(ctx, 31, 0x376860u);
    ctx->pc = 0x37685Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376858u;
    // 0x37685c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x376858u, 0x376860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376860u;
label_376860:
    // 0x376860: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x376860u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x376864: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x376864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x376868: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x376868u;
    {
        const bool branch_taken_0x376868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37686Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376868u;
        // 0x37686c: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376868) {
            ctx->pc = 0x376AF8u;
            goto label_376af8;
        }
    }
    ctx->pc = 0x376870u;
label_376870:
    // 0x376870: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x376870u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x376874: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x376874u;
    {
        const bool branch_taken_0x376874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x376878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376874u;
        // 0x376878: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376874) {
            ctx->pc = 0x376888u;
            goto label_376888;
        }
    }
    ctx->pc = 0x37687Cu;
    // 0x37687c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x37687Cu;
    {
        const bool branch_taken_0x37687c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37687c) {
            ctx->pc = 0x376908u;
            goto label_376908;
        }
    }
    ctx->pc = 0x376884u;
    // 0x376884: 0x0  nop
    ctx->pc = 0x376884u;
    // NOP
label_376888:
    // 0x376888: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x376888u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x37688c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x37688cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x376890: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x376890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x376894: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x376894u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x376898: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x376898u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x37689c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x37689Cu;
    {
        const bool branch_taken_0x37689c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x37689c) {
            ctx->pc = 0x3768D8u;
            goto label_3768d8;
        }
    }
    ctx->pc = 0x3768A4u;
    // 0x3768a4: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x3768a4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3768a8: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3768a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3768ac: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3768ACu;
    {
        const bool branch_taken_0x3768ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3768B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3768ACu;
        // 0x3768b0: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3768ac) {
            ctx->pc = 0x376900u;
            goto label_376900;
        }
    }
    ctx->pc = 0x3768B4u;
    // 0x3768b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3768b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3768b8: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3768b8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3768bc: 0x0  nop
    ctx->pc = 0x3768bcu;
    // NOP
    // 0x3768c0: 0x0  nop
    ctx->pc = 0x3768c0u;
    // NOP
    // 0x3768c4: 0x2010  mfhi        $a0
    ctx->pc = 0x3768c4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3768c8: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3768c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3768cc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3768CCu;
    {
        const bool branch_taken_0x3768cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3768D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3768CCu;
        // 0x3768d0: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3768cc) {
            ctx->pc = 0x376900u;
            goto label_376900;
        }
    }
    ctx->pc = 0x3768D4u;
    // 0x3768d4: 0x0  nop
    ctx->pc = 0x3768d4u;
    // NOP
label_3768d8:
    // 0x3768d8: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x3768d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3768dc: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3768dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3768e0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3768E0u;
    {
        const bool branch_taken_0x3768e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3768e0) {
            ctx->pc = 0x376900u;
            goto label_376900;
        }
    }
    ctx->pc = 0x3768E8u;
    // 0x3768e8: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3768e8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3768ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3768ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3768f0: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x3768f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3768f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3768F4u;
    {
        const bool branch_taken_0x3768f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3768F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3768F4u;
        // 0x3768f8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3768f4) {
            ctx->pc = 0x376908u;
            goto label_376908;
        }
    }
    ctx->pc = 0x3768FCu;
    // 0x3768fc: 0x0  nop
    ctx->pc = 0x3768fcu;
    // NOP
label_376900:
    // 0x376900: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x376900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x376904: 0x0  nop
    ctx->pc = 0x376904u;
    // NOP
label_376908:
    // 0x376908: 0x1460007b  bnez        $v1, . + 4 + (0x7B << 2)
    ctx->pc = 0x376908u;
    {
        const bool branch_taken_0x376908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x37690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376908u;
        // 0x37690c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376908) {
            ctx->pc = 0x376AF8u;
            goto label_376af8;
        }
    }
    ctx->pc = 0x376910u;
    // 0x376910: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x376910u;
    SET_GPR_U32(ctx, 31, 0x376918u);
    ctx->pc = 0x376914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376910u;
    // 0x376914: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x376910u, 0x376918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376918u;
label_376918:
    // 0x376918: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x376918u;
    {
        const bool branch_taken_0x376918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x376918) {
            ctx->pc = 0x376AF8u;
            goto label_376af8;
        }
    }
    ctx->pc = 0x376920u;
label_376920:
    // 0x376920: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x376920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x376924: 0xa2220558  sb          $v0, 0x558($s1)
    ctx->pc = 0x376924u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1368), (uint8_t)GPR_U32(ctx, 2));
    // 0x376928: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x376928u;
    SET_GPR_U32(ctx, 31, 0x376930u);
    ctx->pc = 0x37692Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376928u;
    // 0x37692c: 0x8e240550  lw          $a0, 0x550($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x376928u, 0x376930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376930u;
label_376930:
    // 0x376930: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x376930u;
    {
        const bool branch_taken_0x376930 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x376934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376930u;
        // 0x376934: 0xae200550  sw          $zero, 0x550($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376930) {
            ctx->pc = 0x3769A0u;
            goto label_3769a0;
        }
    }
    ctx->pc = 0x376938u;
    // 0x376938: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x376938u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x37693c: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x37693cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x376940: 0xc0aa0a8  jal         func_2A82A0
    ctx->pc = 0x376940u;
    SET_GPR_U32(ctx, 31, 0x376948u);
    ctx->pc = 0x376944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376940u;
    // 0x376944: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A82A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A82A0u, 0x376940u, 0x376948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376948u;
label_376948:
    // 0x376948: 0xae220550  sw          $v0, 0x550($s1)
    ctx->pc = 0x376948u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 2));
    // 0x37694c: 0xc097838  jal         func_25E0E0
    ctx->pc = 0x37694Cu;
    SET_GPR_U32(ctx, 31, 0x376954u);
    ctx->pc = 0x376950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37694Cu;
    // 0x376950: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E0E0u, 0x37694Cu, 0x376954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376954u;
label_376954:
    // 0x376954: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x376954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x376958: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x376958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x37695c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x37695cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x376960: 0xc0ac678  jal         func_2B19E0
    ctx->pc = 0x376960u;
    SET_GPR_U32(ctx, 31, 0x376968u);
    ctx->pc = 0x376964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376960u;
    // 0x376964: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B19E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B19E0u, 0x376960u, 0x376968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376968u;
label_376968:
    // 0x376968: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x376968u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x37696c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x37696cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x376970: 0x3c022500  lui         $v0, 0x2500
    ctx->pc = 0x376970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9472 << 16));
    // 0x376974: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x376974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x376978: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x376978u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37697c: 0x34454402  ori         $a1, $v0, 0x4402
    ctx->pc = 0x37697cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17410);
    // 0x376980: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x376980u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x376984: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x376984u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376988: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x376988u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37698c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x37698cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376990: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x376990u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376994: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x376994u;
    SET_GPR_U32(ctx, 31, 0x37699Cu);
    ctx->pc = 0x376998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376994u;
    // 0x376998: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x376994u, 0x37699Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37699Cu;
label_37699c:
    // 0x37699c: 0x0  nop
    ctx->pc = 0x37699cu;
    // NOP
label_3769a0:
    // 0x3769a0: 0x86220528  lh          $v0, 0x528($s1)
    ctx->pc = 0x3769a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1320)));
    // 0x3769a4: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x3769a4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3769a8: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x3769a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3769ac: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x3769acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3769b0: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x3769b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3769b4: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x3769b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3769b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3769b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3769bc: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x3769bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3769c0:
    // 0x3769c0: 0x8e260550  lw          $a2, 0x550($s1)
    ctx->pc = 0x3769c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    // 0x3769c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3769c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3769c8: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x3769C8u;
    SET_GPR_U32(ctx, 31, 0x3769D0u);
    ctx->pc = 0x3769CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3769C8u;
    // 0x3769cc: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3769C8u, 0x3769D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3769D0u;
label_3769d0:
    // 0x3769d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3769D0u;
    {
        const bool branch_taken_0x3769d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3769D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3769D0u;
        // 0x3769d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3769d0) {
            ctx->pc = 0x3769E0u;
            goto label_3769e0;
        }
    }
    ctx->pc = 0x3769D8u;
    // 0x3769d8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3769D8u;
    SET_GPR_U32(ctx, 31, 0x3769E0u);
    ctx->pc = 0x3769DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3769D8u;
    // 0x3769dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3769D8u, 0x3769E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3769E0u;
label_3769e0:
    // 0x3769e0: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x3769e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3769e4: 0x460001a  bltz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3769E4u;
    {
        const bool branch_taken_0x3769e4 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x3769E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3769E4u;
        // 0x3769e8: 0x28610033  slti        $at, $v1, 0x33 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)51) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3769e4) {
            ctx->pc = 0x376A50u;
            goto label_376a50;
        }
    }
    ctx->pc = 0x3769ECu;
    // 0x3769ec: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x3769ECu;
    {
        const bool branch_taken_0x3769ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3769ec) {
            ctx->pc = 0x376A50u;
            goto label_376a50;
        }
    }
    ctx->pc = 0x3769F4u;
    // 0x3769f4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3769f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3769f8: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x3769f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3769fc: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x3769fcu;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x376a00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x376a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376a04: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x376a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x376a08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x376a08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376a0c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x376a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x376a10: 0x7fa90060  sq          $t1, 0x60($sp)
    ctx->pc = 0x376a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 9));
    // 0x376a14: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x376a14u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x376a18: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x376a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x376a1c: 0x7fa60070  sq          $a2, 0x70($sp)
    ctx->pc = 0x376a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 6));
    // 0x376a20: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x376a20u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x376a24: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x376a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x376a28: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x376a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
    // 0x376a2c: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x376a2cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x376a30: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x376a30u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x376a34: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x376a34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x376a38: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x376a38u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x376a3c: 0x92260558  lbu         $a2, 0x558($s1)
    ctx->pc = 0x376a3cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1368)));
    // 0x376a40: 0xc62c0554  lwc1        $f12, 0x554($s1)
    ctx->pc = 0x376a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x376a44: 0xc0c0900  jal         func_302400
    ctx->pc = 0x376A44u;
    SET_GPR_U32(ctx, 31, 0x376A4Cu);
    ctx->pc = 0x376A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376A44u;
    // 0x376a48: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x376A44u, 0x376A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376A4Cu;
label_376a4c:
    // 0x376a4c: 0x0  nop
    ctx->pc = 0x376a4cu;
    // NOP
label_376a50:
    // 0x376a50: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x376a50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x376a54: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x376A54u;
    {
        const bool branch_taken_0x376a54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x376A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376A54u;
        // 0x376a58: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376a54) {
            ctx->pc = 0x376A68u;
            goto label_376a68;
        }
    }
    ctx->pc = 0x376A5Cu;
    // 0x376a5c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x376A5Cu;
    {
        const bool branch_taken_0x376a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x376a5c) {
            ctx->pc = 0x376AE8u;
            goto label_376ae8;
        }
    }
    ctx->pc = 0x376A64u;
    // 0x376a64: 0x0  nop
    ctx->pc = 0x376a64u;
    // NOP
label_376a68:
    // 0x376a68: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x376a68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x376a6c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x376a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x376a70: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x376a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x376a74: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x376a74u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x376a78: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x376a78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x376a7c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x376A7Cu;
    {
        const bool branch_taken_0x376a7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x376a7c) {
            ctx->pc = 0x376AB8u;
            goto label_376ab8;
        }
    }
    ctx->pc = 0x376A84u;
    // 0x376a84: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x376a84u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x376a88: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x376a88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x376a8c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x376A8Cu;
    {
        const bool branch_taken_0x376a8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x376A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376A8Cu;
        // 0x376a90: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376a8c) {
            ctx->pc = 0x376AE0u;
            goto label_376ae0;
        }
    }
    ctx->pc = 0x376A94u;
    // 0x376a94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x376a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x376a98: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x376a98u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x376a9c: 0x0  nop
    ctx->pc = 0x376a9cu;
    // NOP
    // 0x376aa0: 0x0  nop
    ctx->pc = 0x376aa0u;
    // NOP
    // 0x376aa4: 0x2010  mfhi        $a0
    ctx->pc = 0x376aa4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x376aa8: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x376aa8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x376aac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x376AACu;
    {
        const bool branch_taken_0x376aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x376AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376AACu;
        // 0x376ab0: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376aac) {
            ctx->pc = 0x376AE0u;
            goto label_376ae0;
        }
    }
    ctx->pc = 0x376AB4u;
    // 0x376ab4: 0x0  nop
    ctx->pc = 0x376ab4u;
    // NOP
label_376ab8:
    // 0x376ab8: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x376ab8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x376abc: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x376abcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x376ac0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x376AC0u;
    {
        const bool branch_taken_0x376ac0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x376ac0) {
            ctx->pc = 0x376AE0u;
            goto label_376ae0;
        }
    }
    ctx->pc = 0x376AC8u;
    // 0x376ac8: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x376ac8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x376acc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x376accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x376ad0: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x376ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x376ad4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x376AD4u;
    {
        const bool branch_taken_0x376ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x376AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376AD4u;
        // 0x376ad8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376ad4) {
            ctx->pc = 0x376AE8u;
            goto label_376ae8;
        }
    }
    ctx->pc = 0x376ADCu;
    // 0x376adc: 0x0  nop
    ctx->pc = 0x376adcu;
    // NOP
label_376ae0:
    // 0x376ae0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x376ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x376ae4: 0x0  nop
    ctx->pc = 0x376ae4u;
    // NOP
label_376ae8:
    // 0x376ae8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x376AE8u;
    {
        const bool branch_taken_0x376ae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x376AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376AE8u;
        // 0x376aec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376ae8) {
            ctx->pc = 0x376AF8u;
            goto label_376af8;
        }
    }
    ctx->pc = 0x376AF0u;
    // 0x376af0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x376AF0u;
    SET_GPR_U32(ctx, 31, 0x376AF8u);
    ctx->pc = 0x376AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376AF0u;
    // 0x376af4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x376AF0u, 0x376AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376AF8u;
label_376af8:
    // 0x376af8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x376af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x376afc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x376afcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x376b00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x376b00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x376b04: 0x3e00008  jr          $ra
    ctx->pc = 0x376B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376B04u;
        // 0x376b08: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376B04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376B0Cu;
}
