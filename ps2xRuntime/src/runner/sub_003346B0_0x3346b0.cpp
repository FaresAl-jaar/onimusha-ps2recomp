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

// Function: sub_003346B0
// Address: 0x3346b0 - 0x334c6c
void sub_003346B0_0x3346b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003346B0_0x3346b0");
#endif

    switch (ctx->pc) {
        case 0x334720u: goto label_334720;
        case 0x334788u: goto label_334788;
        case 0x334798u: goto label_334798;
        case 0x3347c8u: goto label_3347c8;
        case 0x3347e4u: goto label_3347e4;
        case 0x3347f4u: goto label_3347f4;
        case 0x334808u: goto label_334808;
        case 0x334828u: goto label_334828;
        case 0x334840u: goto label_334840;
        case 0x334850u: goto label_334850;
        case 0x334870u: goto label_334870;
        case 0x334898u: goto label_334898;
        case 0x3348b0u: goto label_3348b0;
        case 0x3348b8u: goto label_3348b8;
        case 0x334904u: goto label_334904;
        case 0x33494cu: goto label_33494c;
        case 0x334a38u: goto label_334a38;
        case 0x334a40u: goto label_334a40;
        case 0x334a70u: goto label_334a70;
        case 0x334a78u: goto label_334a78;
        case 0x334a88u: goto label_334a88;
        case 0x334aa8u: goto label_334aa8;
        case 0x334ad0u: goto label_334ad0;
        case 0x334ae8u: goto label_334ae8;
        case 0x334af0u: goto label_334af0;
        case 0x334b3cu: goto label_334b3c;
        case 0x334b84u: goto label_334b84;
        case 0x334c50u: goto label_334c50;
        default: break;
    }

    ctx->pc = 0x3346b0u;

    // 0x3346b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3346b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3346b4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3346b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3346b8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3346b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3346bc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3346bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3346c0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3346c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3346c4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3346c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3346c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3346c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3346cc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3346ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3346d0: 0x90850521  lbu         $a1, 0x521($a0)
    ctx->pc = 0x3346d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x3346d4: 0x10a300d4  beq         $a1, $v1, . + 4 + (0xD4 << 2)
    ctx->pc = 0x3346D4u;
    {
        const bool branch_taken_0x3346d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3346D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3346D4u;
        // 0x3346d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3346d4) {
            ctx->pc = 0x334A28u;
            goto label_334a28;
        }
    }
    ctx->pc = 0x3346DCu;
    // 0x3346dc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3346dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3346e0: 0x10a300c9  beq         $a1, $v1, . + 4 + (0xC9 << 2)
    ctx->pc = 0x3346E0u;
    {
        const bool branch_taken_0x3346e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3346E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3346E0u;
        // 0x3346e4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3346e0) {
            ctx->pc = 0x334A08u;
            goto label_334a08;
        }
    }
    ctx->pc = 0x3346E8u;
    // 0x3346e8: 0x10a30019  beq         $a1, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x3346E8u;
    {
        const bool branch_taken_0x3346e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3346e8) {
            ctx->pc = 0x334750u;
            goto label_334750;
        }
    }
    ctx->pc = 0x3346F0u;
    // 0x3346f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3346f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3346f4: 0x10a3000e  beq         $a1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3346F4u;
    {
        const bool branch_taken_0x3346f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3346f4) {
            ctx->pc = 0x334730u;
            goto label_334730;
        }
    }
    ctx->pc = 0x3346FCu;
    // 0x3346fc: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3346FCu;
    {
        const bool branch_taken_0x3346fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3346fc) {
            ctx->pc = 0x334710u;
            goto label_334710;
        }
    }
    ctx->pc = 0x334704u;
    // 0x334704: 0x10000152  b           . + 4 + (0x152 << 2)
    ctx->pc = 0x334704u;
    {
        const bool branch_taken_0x334704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x334704) {
            ctx->pc = 0x334C50u;
            goto label_334c50;
        }
    }
    ctx->pc = 0x33470Cu;
    // 0x33470c: 0x0  nop
    ctx->pc = 0x33470cu;
    // NOP
label_334710:
    // 0x334710: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x334710u;
    {
        const bool branch_taken_0x334710 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x334714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334710u;
        // 0x334714: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334710) {
            ctx->pc = 0x334720u;
            goto label_334720;
        }
    }
    ctx->pc = 0x334718u;
    // 0x334718: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x334718u;
    SET_GPR_U32(ctx, 31, 0x334720u);
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x334718u, 0x334720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334720u;
label_334720:
    // 0x334720: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x334720u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x334724: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x334724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x334728: 0x10000149  b           . + 4 + (0x149 << 2)
    ctx->pc = 0x334728u;
    {
        const bool branch_taken_0x334728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33472Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334728u;
        // 0x33472c: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334728) {
            ctx->pc = 0x334C50u;
            goto label_334c50;
        }
    }
    ctx->pc = 0x334730u;
label_334730:
    // 0x334730: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x334730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x334734: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x334734u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x334738: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x334738u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x33473c: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x33473cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x334740: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x334740u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x334744: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x334744u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x334748: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x334748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33474c: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x33474cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_334750:
    // 0x334750: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x334750u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x334754: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x334754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x334758: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x334758u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x33475c: 0x0  nop
    ctx->pc = 0x33475cu;
    // NOP
    // 0x334760: 0x0  nop
    ctx->pc = 0x334760u;
    // NOP
    // 0x334764: 0x1010  mfhi        $v0
    ctx->pc = 0x334764u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x334768: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x334768u;
    {
        const bool branch_taken_0x334768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x334768) {
            ctx->pc = 0x334838u;
            goto label_334838;
        }
    }
    ctx->pc = 0x334770u;
    // 0x334770: 0x12200029  beqz        $s1, . + 4 + (0x29 << 2)
    ctx->pc = 0x334770u;
    {
        const bool branch_taken_0x334770 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x334774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334770u;
        // 0x334774: 0x921206e0  lbu         $s2, 0x6E0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1760)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334770) {
            ctx->pc = 0x334818u;
            goto label_334818;
        }
    }
    ctx->pc = 0x334778u;
    // 0x334778: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x334778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x33477c: 0x27a5008c  addiu       $a1, $sp, 0x8C
    ctx->pc = 0x33477cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x334780: 0xc096cb8  jal         func_25B2E0
    ctx->pc = 0x334780u;
    SET_GPR_U32(ctx, 31, 0x334788u);
    ctx->pc = 0x334784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334780u;
    // 0x334784: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2E0u, 0x334780u, 0x334788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334788u;
label_334788:
    // 0x334788: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x334788u;
    {
        const bool branch_taken_0x334788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33478Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334788u;
        // 0x33478c: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334788) {
            ctx->pc = 0x334818u;
            goto label_334818;
        }
    }
    ctx->pc = 0x334790u;
    // 0x334790: 0xc096cf8  jal         func_25B3E0
    ctx->pc = 0x334790u;
    SET_GPR_U32(ctx, 31, 0x334798u);
    ctx->pc = 0x334794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334790u;
    // 0x334794: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B3E0u, 0x334790u, 0x334798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334798u;
label_334798:
    // 0x334798: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x334798u;
    {
        const bool branch_taken_0x334798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33479Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334798u;
        // 0x33479c: 0x324300ff  andi        $v1, $s2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x334798) {
            ctx->pc = 0x334818u;
            goto label_334818;
        }
    }
    ctx->pc = 0x3347A0u;
    // 0x3347a0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x3347a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3347a4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3347a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3347a8: 0x26060090  addiu       $a2, $s0, 0x90
    ctx->pc = 0x3347a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x3347ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3347acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3347b0: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x3347b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3347b4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3347b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3347b8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3347b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3347bc: 0x24520550  addiu       $s2, $v0, 0x550
    ctx->pc = 0x3347bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x3347c0: 0xc097340  jal         func_25CD00
    ctx->pc = 0x3347C0u;
    SET_GPR_U32(ctx, 31, 0x3347C8u);
    ctx->pc = 0x3347C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3347C0u;
    // 0x3347c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CD00u, 0x3347C0u, 0x3347C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3347C8u;
label_3347c8:
    // 0x3347c8: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x3347c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3347cc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3347ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x3347d0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3347d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3347d4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3347d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3347d8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x3347d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3347dc: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3347DCu;
    SET_GPR_U32(ctx, 31, 0x3347E4u);
    ctx->pc = 0x3347E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3347DCu;
    // 0x3347e0: 0xe6400034  swc1        $f0, 0x34($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3347DCu, 0x3347E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3347E4u;
label_3347e4:
    // 0x3347e4: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x3347e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x3347e8: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x3347e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3347ec: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x3347ECu;
    SET_GPR_U32(ctx, 31, 0x3347F4u);
    ctx->pc = 0x3347F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3347ECu;
    // 0x3347f0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x3347ECu, 0x3347F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3347F4u;
label_3347f4:
    // 0x3347f4: 0x8e26085c  lw          $a2, 0x85C($s1)
    ctx->pc = 0x3347f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2140)));
    // 0x3347f8: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x3347f8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x3347fc: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x3347fcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x334800: 0xc0aade8  jal         func_2AB7A0
    ctx->pc = 0x334800u;
    SET_GPR_U32(ctx, 31, 0x334808u);
    ctx->pc = 0x334804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334800u;
    // 0x334804: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB7A0u, 0x334800u, 0x334808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334808u;
label_334808:
    // 0x334808: 0xae420040  sw          $v0, 0x40($s2)
    ctx->pc = 0x334808u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
    // 0x33480c: 0x920206e1  lbu         $v0, 0x6E1($s0)
    ctx->pc = 0x33480cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1761)));
    // 0x334810: 0xa2420046  sb          $v0, 0x46($s2)
    ctx->pc = 0x334810u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 70), (uint8_t)GPR_U32(ctx, 2));
    // 0x334814: 0xa6400044  sh          $zero, 0x44($s2)
    ctx->pc = 0x334814u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 68), (uint16_t)GPR_U32(ctx, 0));
label_334818:
    // 0x334818: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x334818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x33481c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x33481cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334820: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x334820u;
    SET_GPR_U32(ctx, 31, 0x334828u);
    ctx->pc = 0x334824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334820u;
    // 0x334824: 0x26060090  addiu       $a2, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x334820u, 0x334828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334828u;
label_334828:
    // 0x334828: 0x920206e0  lbu         $v0, 0x6E0($s0)
    ctx->pc = 0x334828u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1760)));
    // 0x33482c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33482cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x334830: 0xa20206e0  sb          $v0, 0x6E0($s0)
    ctx->pc = 0x334830u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1760), (uint8_t)GPR_U32(ctx, 2));
    // 0x334834: 0x0  nop
    ctx->pc = 0x334834u;
    // NOP
label_334838:
    // 0x334838: 0xc0c0818  jal         func_302060
    ctx->pc = 0x334838u;
    SET_GPR_U32(ctx, 31, 0x334840u);
    ctx->pc = 0x33483Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334838u;
    // 0x33483c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302060u, 0x334838u, 0x334840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334840u;
label_334840:
    // 0x334840: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x334840u;
    {
        const bool branch_taken_0x334840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x334844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334840u;
        // 0x334844: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334840) {
            ctx->pc = 0x3348A8u;
            goto label_3348a8;
        }
    }
    ctx->pc = 0x334848u;
    // 0x334848: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x334848u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33484c: 0x0  nop
    ctx->pc = 0x33484cu;
    // NOP
label_334850:
    // 0x334850: 0x86230594  lh          $v1, 0x594($s1)
    ctx->pc = 0x334850u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1428)));
    // 0x334854: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x334854u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x334858: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x334858u;
    {
        const bool branch_taken_0x334858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33485Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334858u;
        // 0x33485c: 0x28610074  slti        $at, $v1, 0x74 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)116) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x334858) {
            ctx->pc = 0x334898u;
            goto label_334898;
        }
    }
    ctx->pc = 0x334860u;
    // 0x334860: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x334860u;
    {
        const bool branch_taken_0x334860 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x334860) {
            ctx->pc = 0x334898u;
            goto label_334898;
        }
    }
    ctx->pc = 0x334868u;
    // 0x334868: 0xc096c80  jal         func_25B200
    ctx->pc = 0x334868u;
    SET_GPR_U32(ctx, 31, 0x334870u);
    ctx->pc = 0x33486Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334868u;
    // 0x33486c: 0x8e240590  lw          $a0, 0x590($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1424)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x334868u, 0x334870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334870u;
label_334870:
    // 0x334870: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x334870u;
    {
        const bool branch_taken_0x334870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x334870) {
            ctx->pc = 0x334898u;
            goto label_334898;
        }
    }
    ctx->pc = 0x334878u;
    // 0x334878: 0x92260596  lbu         $a2, 0x596($s1)
    ctx->pc = 0x334878u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1430)));
    // 0x33487c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x33487cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x334880: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x334880u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x334884: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x334884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334888: 0x26250550  addiu       $a1, $s1, 0x550
    ctx->pc = 0x334888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x33488c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33488cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334890: 0xc0c079c  jal         func_301E70
    ctx->pc = 0x334890u;
    SET_GPR_U32(ctx, 31, 0x334898u);
    ctx->pc = 0x334894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334890u;
    // 0x334894: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301E70u, 0x334890u, 0x334898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334898u;
label_334898:
    // 0x334898: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x334898u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x33489c: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x33489cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3348a0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x3348A0u;
    {
        const bool branch_taken_0x3348a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3348A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3348A0u;
        // 0x3348a4: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3348a0) {
            ctx->pc = 0x334850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334850;
        }
    }
    ctx->pc = 0x3348A8u;
label_3348a8:
    // 0x3348a8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3348a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3348ac: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x3348acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3348b0:
    // 0x3348b0: 0xc096c80  jal         func_25B200
    ctx->pc = 0x3348B0u;
    SET_GPR_U32(ctx, 31, 0x3348B8u);
    ctx->pc = 0x3348B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3348B0u;
    // 0x3348b4: 0x8e440590  lw          $a0, 0x590($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1424)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x3348B0u, 0x3348B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3348B8u;
label_3348b8:
    // 0x3348b8: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x3348B8u;
    {
        const bool branch_taken_0x3348b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3348b8) {
            ctx->pc = 0x334960u;
            goto label_334960;
        }
    }
    ctx->pc = 0x3348C0u;
    // 0x3348c0: 0x86440594  lh          $a0, 0x594($s2)
    ctx->pc = 0x3348c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1428)));
    // 0x3348c4: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x3348c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3348c8: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3348C8u;
    {
        const bool branch_taken_0x3348c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3348c8) {
            ctx->pc = 0x334908u;
            goto label_334908;
        }
    }
    ctx->pc = 0x3348D0u;
    // 0x3348d0: 0x9203052e  lbu         $v1, 0x52E($s0)
    ctx->pc = 0x3348d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x3348d4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3348d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3348d8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3348d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3348dc: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3348dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3348e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3348e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3348e4: 0x34450604  ori         $a1, $v0, 0x604
    ctx->pc = 0x3348e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1540);
    // 0x3348e8: 0x26470580  addiu       $a3, $s2, 0x580
    ctx->pc = 0x3348e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    // 0x3348ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3348ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3348f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3348f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3348f4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3348f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3348f8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3348f8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3348fc: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3348FCu;
    SET_GPR_U32(ctx, 31, 0x334904u);
    ctx->pc = 0x334900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3348FCu;
    // 0x334900: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3348FCu, 0x334904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334904u;
label_334904:
    // 0x334904: 0x0  nop
    ctx->pc = 0x334904u;
    // NOP
label_334908:
    // 0x334908: 0x86440594  lh          $a0, 0x594($s2)
    ctx->pc = 0x334908u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1428)));
    // 0x33490c: 0x24030074  addiu       $v1, $zero, 0x74
    ctx->pc = 0x33490cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x334910: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x334910u;
    {
        const bool branch_taken_0x334910 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x334910) {
            ctx->pc = 0x334950u;
            goto label_334950;
        }
    }
    ctx->pc = 0x334918u;
    // 0x334918: 0x9203052e  lbu         $v1, 0x52E($s0)
    ctx->pc = 0x334918u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x33491c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x33491cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x334920: 0x3c021300  lui         $v0, 0x1300
    ctx->pc = 0x334920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4864 << 16));
    // 0x334924: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x334924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x334928: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x334928u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33492c: 0x34450604  ori         $a1, $v0, 0x604
    ctx->pc = 0x33492cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1540);
    // 0x334930: 0x26470580  addiu       $a3, $s2, 0x580
    ctx->pc = 0x334930u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    // 0x334934: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x334934u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334938: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x334938u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33493c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x33493cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334940: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x334940u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334944: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x334944u;
    SET_GPR_U32(ctx, 31, 0x33494Cu);
    ctx->pc = 0x334948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334944u;
    // 0x334948: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x334944u, 0x33494Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33494Cu;
label_33494c:
    // 0x33494c: 0x0  nop
    ctx->pc = 0x33494cu;
    // NOP
label_334950:
    // 0x334950: 0x86430594  lh          $v1, 0x594($s2)
    ctx->pc = 0x334950u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1428)));
    // 0x334954: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x334954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x334958: 0xa6430594  sh          $v1, 0x594($s2)
    ctx->pc = 0x334958u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1428), (uint16_t)GPR_U32(ctx, 3));
    // 0x33495c: 0x0  nop
    ctx->pc = 0x33495cu;
    // NOP
label_334960:
    // 0x334960: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x334960u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x334964: 0x2a230005  slti        $v1, $s1, 0x5
    ctx->pc = 0x334964u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x334968: 0x1460ffd1  bnez        $v1, . + 4 + (-0x2F << 2)
    ctx->pc = 0x334968u;
    {
        const bool branch_taken_0x334968 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33496Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334968u;
        // 0x33496c: 0x26520050  addiu       $s2, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334968) {
            ctx->pc = 0x3348B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3348b0;
        }
    }
    ctx->pc = 0x334970u;
    // 0x334970: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x334970u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x334974: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x334974u;
    {
        const bool branch_taken_0x334974 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x334974) {
            ctx->pc = 0x3349E8u;
            goto label_3349e8;
        }
    }
    ctx->pc = 0x33497Cu;
    // 0x33497c: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x33497cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x334980: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x334980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x334984: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x334984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x334988: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x334988u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x33498c: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x33498cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x334990: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x334990u;
    {
        const bool branch_taken_0x334990 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x334990) {
            ctx->pc = 0x3349C8u;
            goto label_3349c8;
        }
    }
    ctx->pc = 0x334998u;
    // 0x334998: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x334998u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x33499c: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x33499cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3349a0: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3349A0u;
    {
        const bool branch_taken_0x3349a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3349A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3349A0u;
        // 0x3349a4: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3349a0) {
            ctx->pc = 0x3349E8u;
            goto label_3349e8;
        }
    }
    ctx->pc = 0x3349A8u;
    // 0x3349a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3349a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3349ac: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3349acu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3349b0: 0x0  nop
    ctx->pc = 0x3349b0u;
    // NOP
    // 0x3349b4: 0x0  nop
    ctx->pc = 0x3349b4u;
    // NOP
    // 0x3349b8: 0x2010  mfhi        $a0
    ctx->pc = 0x3349b8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3349bc: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3349bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3349c0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3349C0u;
    {
        const bool branch_taken_0x3349c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3349C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3349C0u;
        // 0x3349c4: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3349c0) {
            ctx->pc = 0x3349E8u;
            goto label_3349e8;
        }
    }
    ctx->pc = 0x3349C8u;
label_3349c8:
    // 0x3349c8: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x3349c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3349cc: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3349ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3349d0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3349D0u;
    {
        const bool branch_taken_0x3349d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3349d0) {
            ctx->pc = 0x3349E8u;
            goto label_3349e8;
        }
    }
    ctx->pc = 0x3349D8u;
    // 0x3349d8: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3349d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3349dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3349dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3349e0: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x3349e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3349e4: 0x0  nop
    ctx->pc = 0x3349e4u;
    // NOP
label_3349e8:
    // 0x3349e8: 0x920306e0  lbu         $v1, 0x6E0($s0)
    ctx->pc = 0x3349e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1760)));
    // 0x3349ec: 0x28630005  slti        $v1, $v1, 0x5
    ctx->pc = 0x3349ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3349f0: 0x14600097  bnez        $v1, . + 4 + (0x97 << 2)
    ctx->pc = 0x3349F0u;
    {
        const bool branch_taken_0x3349f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3349f0) {
            ctx->pc = 0x334C50u;
            goto label_334c50;
        }
    }
    ctx->pc = 0x3349F8u;
    // 0x3349f8: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x3349f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x3349fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3349fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x334a00: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x334A00u;
    {
        const bool branch_taken_0x334a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334A00u;
        // 0x334a04: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334a00) {
            ctx->pc = 0x334C50u;
            goto label_334c50;
        }
    }
    ctx->pc = 0x334A08u;
label_334a08:
    // 0x334a08: 0x86020526  lh          $v0, 0x526($s0)
    ctx->pc = 0x334a08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1318)));
    // 0x334a0c: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x334a0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x334a10: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x334a10u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x334a14: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x334a14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x334a18: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x334a18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x334a1c: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x334a1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x334a20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x334a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x334a24: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x334a24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_334a28:
    // 0x334a28: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x334a28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334a2c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x334a2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334a30: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x334a30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334a34: 0x0  nop
    ctx->pc = 0x334a34u;
    // NOP
label_334a38:
    // 0x334a38: 0xc096c80  jal         func_25B200
    ctx->pc = 0x334A38u;
    SET_GPR_U32(ctx, 31, 0x334A40u);
    ctx->pc = 0x334A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334A38u;
    // 0x334a3c: 0x8e440590  lw          $a0, 0x590($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1424)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x334A38u, 0x334A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334A40u;
label_334a40:
    // 0x334a40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x334A40u;
    {
        const bool branch_taken_0x334a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x334a40) {
            ctx->pc = 0x334A50u;
            goto label_334a50;
        }
    }
    ctx->pc = 0x334A48u;
    // 0x334a48: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x334a48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x334a4c: 0x0  nop
    ctx->pc = 0x334a4cu;
    // NOP
label_334a50:
    // 0x334a50: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x334a50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x334a54: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x334a54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x334a58: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x334A58u;
    {
        const bool branch_taken_0x334a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x334A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334A58u;
        // 0x334a5c: 0x26520050  addiu       $s2, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334a58) {
            ctx->pc = 0x334A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334a38;
        }
    }
    ctx->pc = 0x334A60u;
    // 0x334a60: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x334A60u;
    {
        const bool branch_taken_0x334a60 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x334A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334A60u;
        // 0x334a64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334a60) {
            ctx->pc = 0x334A70u;
            goto label_334a70;
        }
    }
    ctx->pc = 0x334A68u;
    // 0x334a68: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x334A68u;
    SET_GPR_U32(ctx, 31, 0x334A70u);
    ctx->pc = 0x334A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334A68u;
    // 0x334a6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x334A68u, 0x334A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334A70u;
label_334a70:
    // 0x334a70: 0xc0c0818  jal         func_302060
    ctx->pc = 0x334A70u;
    SET_GPR_U32(ctx, 31, 0x334A78u);
    ctx->pc = 0x334A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334A70u;
    // 0x334a74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302060u, 0x334A70u, 0x334A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334A78u;
label_334a78:
    // 0x334a78: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x334A78u;
    {
        const bool branch_taken_0x334a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x334A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334A78u;
        // 0x334a7c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334a78) {
            ctx->pc = 0x334AE0u;
            goto label_334ae0;
        }
    }
    ctx->pc = 0x334A80u;
    // 0x334a80: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x334a80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334a84: 0x0  nop
    ctx->pc = 0x334a84u;
    // NOP
label_334a88:
    // 0x334a88: 0x86430594  lh          $v1, 0x594($s2)
    ctx->pc = 0x334a88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1428)));
    // 0x334a8c: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x334a8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x334a90: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x334A90u;
    {
        const bool branch_taken_0x334a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x334A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334A90u;
        // 0x334a94: 0x28610074  slti        $at, $v1, 0x74 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)116) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x334a90) {
            ctx->pc = 0x334AD0u;
            goto label_334ad0;
        }
    }
    ctx->pc = 0x334A98u;
    // 0x334a98: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x334A98u;
    {
        const bool branch_taken_0x334a98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x334a98) {
            ctx->pc = 0x334AD0u;
            goto label_334ad0;
        }
    }
    ctx->pc = 0x334AA0u;
    // 0x334aa0: 0xc096c80  jal         func_25B200
    ctx->pc = 0x334AA0u;
    SET_GPR_U32(ctx, 31, 0x334AA8u);
    ctx->pc = 0x334AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334AA0u;
    // 0x334aa4: 0x8e440590  lw          $a0, 0x590($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1424)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x334AA0u, 0x334AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334AA8u;
label_334aa8:
    // 0x334aa8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x334AA8u;
    {
        const bool branch_taken_0x334aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x334aa8) {
            ctx->pc = 0x334AD0u;
            goto label_334ad0;
        }
    }
    ctx->pc = 0x334AB0u;
    // 0x334ab0: 0x92460596  lbu         $a2, 0x596($s2)
    ctx->pc = 0x334ab0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1430)));
    // 0x334ab4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x334ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x334ab8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x334ab8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x334abc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x334abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334ac0: 0x26450550  addiu       $a1, $s2, 0x550
    ctx->pc = 0x334ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1360));
    // 0x334ac4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x334ac4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334ac8: 0xc0c079c  jal         func_301E70
    ctx->pc = 0x334AC8u;
    SET_GPR_U32(ctx, 31, 0x334AD0u);
    ctx->pc = 0x334ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334AC8u;
    // 0x334acc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301E70u, 0x334AC8u, 0x334AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334AD0u;
label_334ad0:
    // 0x334ad0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x334ad0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x334ad4: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x334ad4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x334ad8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x334AD8u;
    {
        const bool branch_taken_0x334ad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x334ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334AD8u;
        // 0x334adc: 0x26520050  addiu       $s2, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334ad8) {
            ctx->pc = 0x334A88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334a88;
        }
    }
    ctx->pc = 0x334AE0u;
label_334ae0:
    // 0x334ae0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x334ae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334ae4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x334ae4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_334ae8:
    // 0x334ae8: 0xc096c80  jal         func_25B200
    ctx->pc = 0x334AE8u;
    SET_GPR_U32(ctx, 31, 0x334AF0u);
    ctx->pc = 0x334AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334AE8u;
    // 0x334aec: 0x8e440590  lw          $a0, 0x590($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1424)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x334AE8u, 0x334AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334AF0u;
label_334af0:
    // 0x334af0: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x334AF0u;
    {
        const bool branch_taken_0x334af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x334af0) {
            ctx->pc = 0x334B98u;
            goto label_334b98;
        }
    }
    ctx->pc = 0x334AF8u;
    // 0x334af8: 0x86440594  lh          $a0, 0x594($s2)
    ctx->pc = 0x334af8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1428)));
    // 0x334afc: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x334afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x334b00: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x334B00u;
    {
        const bool branch_taken_0x334b00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x334b00) {
            ctx->pc = 0x334B40u;
            goto label_334b40;
        }
    }
    ctx->pc = 0x334B08u;
    // 0x334b08: 0x9203052e  lbu         $v1, 0x52E($s0)
    ctx->pc = 0x334b08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x334b0c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x334b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x334b10: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x334b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x334b14: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x334b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x334b18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x334b18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334b1c: 0x34450604  ori         $a1, $v0, 0x604
    ctx->pc = 0x334b1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1540);
    // 0x334b20: 0x26470580  addiu       $a3, $s2, 0x580
    ctx->pc = 0x334b20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    // 0x334b24: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x334b24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334b28: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x334b28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334b2c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x334b2cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334b30: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x334b30u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334b34: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x334B34u;
    SET_GPR_U32(ctx, 31, 0x334B3Cu);
    ctx->pc = 0x334B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334B34u;
    // 0x334b38: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x334B34u, 0x334B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334B3Cu;
label_334b3c:
    // 0x334b3c: 0x0  nop
    ctx->pc = 0x334b3cu;
    // NOP
label_334b40:
    // 0x334b40: 0x86440594  lh          $a0, 0x594($s2)
    ctx->pc = 0x334b40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1428)));
    // 0x334b44: 0x24030074  addiu       $v1, $zero, 0x74
    ctx->pc = 0x334b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x334b48: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x334B48u;
    {
        const bool branch_taken_0x334b48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x334b48) {
            ctx->pc = 0x334B88u;
            goto label_334b88;
        }
    }
    ctx->pc = 0x334B50u;
    // 0x334b50: 0x9203052e  lbu         $v1, 0x52E($s0)
    ctx->pc = 0x334b50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x334b54: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x334b54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x334b58: 0x3c021300  lui         $v0, 0x1300
    ctx->pc = 0x334b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4864 << 16));
    // 0x334b5c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x334b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x334b60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x334b60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334b64: 0x34450604  ori         $a1, $v0, 0x604
    ctx->pc = 0x334b64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1540);
    // 0x334b68: 0x26470580  addiu       $a3, $s2, 0x580
    ctx->pc = 0x334b68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    // 0x334b6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x334b6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334b70: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x334b70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334b74: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x334b74u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334b78: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x334b78u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334b7c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x334B7Cu;
    SET_GPR_U32(ctx, 31, 0x334B84u);
    ctx->pc = 0x334B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334B7Cu;
    // 0x334b80: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x334B7Cu, 0x334B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334B84u;
label_334b84:
    // 0x334b84: 0x0  nop
    ctx->pc = 0x334b84u;
    // NOP
label_334b88:
    // 0x334b88: 0x86430594  lh          $v1, 0x594($s2)
    ctx->pc = 0x334b88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1428)));
    // 0x334b8c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x334b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x334b90: 0xa6430594  sh          $v1, 0x594($s2)
    ctx->pc = 0x334b90u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1428), (uint16_t)GPR_U32(ctx, 3));
    // 0x334b94: 0x0  nop
    ctx->pc = 0x334b94u;
    // NOP
label_334b98:
    // 0x334b98: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x334b98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x334b9c: 0x2a230005  slti        $v1, $s1, 0x5
    ctx->pc = 0x334b9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x334ba0: 0x1460ffd1  bnez        $v1, . + 4 + (-0x2F << 2)
    ctx->pc = 0x334BA0u;
    {
        const bool branch_taken_0x334ba0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x334BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334BA0u;
        // 0x334ba4: 0x26520050  addiu       $s2, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334ba0) {
            ctx->pc = 0x334AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334ae8;
        }
    }
    ctx->pc = 0x334BA8u;
    // 0x334ba8: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x334ba8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x334bac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x334BACu;
    {
        const bool branch_taken_0x334bac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x334BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334BACu;
        // 0x334bb0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334bac) {
            ctx->pc = 0x334BC0u;
            goto label_334bc0;
        }
    }
    ctx->pc = 0x334BB4u;
    // 0x334bb4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x334BB4u;
    {
        const bool branch_taken_0x334bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x334bb4) {
            ctx->pc = 0x334C40u;
            goto label_334c40;
        }
    }
    ctx->pc = 0x334BBCu;
    // 0x334bbc: 0x0  nop
    ctx->pc = 0x334bbcu;
    // NOP
label_334bc0:
    // 0x334bc0: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x334bc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x334bc4: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x334bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x334bc8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x334bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x334bcc: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x334bccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x334bd0: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x334bd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x334bd4: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x334BD4u;
    {
        const bool branch_taken_0x334bd4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x334bd4) {
            ctx->pc = 0x334C10u;
            goto label_334c10;
        }
    }
    ctx->pc = 0x334BDCu;
    // 0x334bdc: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x334bdcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x334be0: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x334be0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x334be4: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x334BE4u;
    {
        const bool branch_taken_0x334be4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x334BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334BE4u;
        // 0x334be8: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334be4) {
            ctx->pc = 0x334C38u;
            goto label_334c38;
        }
    }
    ctx->pc = 0x334BECu;
    // 0x334bec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x334becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x334bf0: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x334bf0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x334bf4: 0x0  nop
    ctx->pc = 0x334bf4u;
    // NOP
    // 0x334bf8: 0x0  nop
    ctx->pc = 0x334bf8u;
    // NOP
    // 0x334bfc: 0x2010  mfhi        $a0
    ctx->pc = 0x334bfcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x334c00: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x334c00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x334c04: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x334C04u;
    {
        const bool branch_taken_0x334c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334C04u;
        // 0x334c08: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334c04) {
            ctx->pc = 0x334C38u;
            goto label_334c38;
        }
    }
    ctx->pc = 0x334C0Cu;
    // 0x334c0c: 0x0  nop
    ctx->pc = 0x334c0cu;
    // NOP
label_334c10:
    // 0x334c10: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x334c10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x334c14: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x334c14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x334c18: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x334C18u;
    {
        const bool branch_taken_0x334c18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x334c18) {
            ctx->pc = 0x334C38u;
            goto label_334c38;
        }
    }
    ctx->pc = 0x334C20u;
    // 0x334c20: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x334c20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x334c24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x334c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x334c28: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x334c28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x334c2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x334C2Cu;
    {
        const bool branch_taken_0x334c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334C2Cu;
        // 0x334c30: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334c2c) {
            ctx->pc = 0x334C40u;
            goto label_334c40;
        }
    }
    ctx->pc = 0x334C34u;
    // 0x334c34: 0x0  nop
    ctx->pc = 0x334c34u;
    // NOP
label_334c38:
    // 0x334c38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x334c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x334c3c: 0x0  nop
    ctx->pc = 0x334c3cu;
    // NOP
label_334c40:
    // 0x334c40: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x334C40u;
    {
        const bool branch_taken_0x334c40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x334C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334C40u;
        // 0x334c44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334c40) {
            ctx->pc = 0x334C50u;
            goto label_334c50;
        }
    }
    ctx->pc = 0x334C48u;
    // 0x334c48: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x334C48u;
    SET_GPR_U32(ctx, 31, 0x334C50u);
    ctx->pc = 0x334C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334C48u;
    // 0x334c4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x334C48u, 0x334C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334C50u;
label_334c50:
    // 0x334c50: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x334c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x334c54: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x334c54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x334c58: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x334c58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x334c5c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x334c5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x334c60: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x334c60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x334c64: 0x3e00008  jr          $ra
    ctx->pc = 0x334C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334C64u;
        // 0x334c68: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334C6Cu;
}
