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

// Function: sub_002956D0
// Address: 0x2956d0 - 0x296ffc
void sub_002956D0_0x2956d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002956D0_0x2956d0");
#endif

    switch (ctx->pc) {
        case 0x29571cu: goto label_29571c;
        case 0x295738u: goto label_295738;
        case 0x29576cu: goto label_29576c;
        case 0x2957acu: goto label_2957ac;
        case 0x2957e0u: goto label_2957e0;
        case 0x2957f8u: goto label_2957f8;
        case 0x295810u: goto label_295810;
        case 0x295828u: goto label_295828;
        case 0x295860u: goto label_295860;
        case 0x295878u: goto label_295878;
        case 0x295888u: goto label_295888;
        case 0x295894u: goto label_295894;
        case 0x295928u: goto label_295928;
        case 0x295930u: goto label_295930;
        case 0x295944u: goto label_295944;
        case 0x295950u: goto label_295950;
        case 0x295a84u: goto label_295a84;
        case 0x295a98u: goto label_295a98;
        case 0x295aa0u: goto label_295aa0;
        case 0x295ab4u: goto label_295ab4;
        case 0x295ac0u: goto label_295ac0;
        case 0x295ae4u: goto label_295ae4;
        case 0x295b20u: goto label_295b20;
        case 0x295b28u: goto label_295b28;
        case 0x295b3cu: goto label_295b3c;
        case 0x295b48u: goto label_295b48;
        case 0x295bb8u: goto label_295bb8;
        case 0x295c50u: goto label_295c50;
        case 0x295c64u: goto label_295c64;
        case 0x295c6cu: goto label_295c6c;
        case 0x295c88u: goto label_295c88;
        case 0x295c94u: goto label_295c94;
        case 0x295d38u: goto label_295d38;
        case 0x295d40u: goto label_295d40;
        case 0x295d54u: goto label_295d54;
        case 0x295d60u: goto label_295d60;
        case 0x295dd0u: goto label_295dd0;
        case 0x295de4u: goto label_295de4;
        case 0x295decu: goto label_295dec;
        case 0x295e08u: goto label_295e08;
        case 0x295e14u: goto label_295e14;
        case 0x296138u: goto label_296138;
        case 0x2961f4u: goto label_2961f4;
        case 0x296208u: goto label_296208;
        case 0x296274u: goto label_296274;
        case 0x296288u: goto label_296288;
        case 0x2963a8u: goto label_2963a8;
        case 0x296440u: goto label_296440;
        case 0x2964a0u: goto label_2964a0;
        case 0x2964ecu: goto label_2964ec;
        case 0x296558u: goto label_296558;
        case 0x2965f0u: goto label_2965f0;
        case 0x296650u: goto label_296650;
        case 0x29669cu: goto label_29669c;
        case 0x296780u: goto label_296780;
        case 0x2967e0u: goto label_2967e0;
        case 0x29682cu: goto label_29682c;
        case 0x29694cu: goto label_29694c;
        case 0x2969a0u: goto label_2969a0;
        case 0x296af8u: goto label_296af8;
        case 0x296b50u: goto label_296b50;
        case 0x296c2cu: goto label_296c2c;
        case 0x296c40u: goto label_296c40;
        case 0x296cacu: goto label_296cac;
        case 0x296cc0u: goto label_296cc0;
        case 0x296ce8u: goto label_296ce8;
        case 0x296e30u: goto label_296e30;
        case 0x296e6cu: goto label_296e6c;
        case 0x296ee4u: goto label_296ee4;
        case 0x296f44u: goto label_296f44;
        case 0x296f94u: goto label_296f94;
        default: break;
    }

    ctx->pc = 0x2956d0u;

    // 0x2956d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2956d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2956d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2956d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2956d8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2956d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2956dc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2956dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2956e0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2956e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2956e4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2956e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2956e8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2956e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2956ec: 0x948529de  lhu         $a1, 0x29DE($a0)
    ctx->pc = 0x2956ecu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10718)));
    // 0x2956f0: 0x949029e0  lhu         $s0, 0x29E0($a0)
    ctx->pc = 0x2956f0u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10720)));
    // 0x2956f4: 0x949229e2  lhu         $s2, 0x29E2($a0)
    ctx->pc = 0x2956f4u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10722)));
    // 0x2956f8: 0xa01827  not         $v1, $a1
    ctx->pc = 0x2956f8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 0)));
    // 0x2956fc: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x2956fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x295700: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x295700u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x295704: 0xa48529e0  sh          $a1, 0x29E0($a0)
    ctx->pc = 0x295704u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10720), (uint16_t)GPR_U32(ctx, 5));
    // 0x295708: 0x32230002  andi        $v1, $s1, 0x2
    ctx->pc = 0x295708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x29570c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29570Cu;
    {
        const bool branch_taken_0x29570c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x295710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29570Cu;
        // 0x295710: 0xa48029e2  sh          $zero, 0x29E2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 10722), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29570c) {
            ctx->pc = 0x295720u;
            goto label_295720;
        }
    }
    ctx->pc = 0x295714u;
    // 0x295714: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x295714u;
    SET_GPR_U32(ctx, 31, 0x29571Cu);
    ctx->pc = 0x295718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295714u;
    // 0x295718: 0x8e642968  lw          $a0, 0x2968($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10600)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x295714u, 0x29571Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29571Cu;
label_29571c:
    // 0x29571c: 0x0  nop
    ctx->pc = 0x29571cu;
    // NOP
label_295720:
    // 0x295720: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x295720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x295724: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x295724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x295728: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x295728u;
    {
        const bool branch_taken_0x295728 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x295728) {
            ctx->pc = 0x2957C8u;
            goto label_2957c8;
        }
    }
    ctx->pc = 0x295730u;
    // 0x295730: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x295730u;
    SET_GPR_U32(ctx, 31, 0x295738u);
    ctx->pc = 0x295734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295730u;
    // 0x295734: 0x8e642968  lw          $a0, 0x2968($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10600)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x295730u, 0x295738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295738u;
label_295738:
    // 0x295738: 0x926308e8  lbu         $v1, 0x8E8($s3)
    ctx->pc = 0x295738u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2280)));
    // 0x29573c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x29573cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x295740: 0x3c025600  lui         $v0, 0x5600
    ctx->pc = 0x295740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22016 << 16));
    // 0x295744: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x295744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x295748: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x295748u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29574c: 0x3445040f  ori         $a1, $v0, 0x40F
    ctx->pc = 0x29574cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1039);
    // 0x295750: 0x26670020  addiu       $a3, $s3, 0x20
    ctx->pc = 0x295750u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x295754: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x295754u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295758: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x295758u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29575c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x29575cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295760: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x295760u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295764: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x295764u;
    SET_GPR_U32(ctx, 31, 0x29576Cu);
    ctx->pc = 0x295768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295764u;
    // 0x295768: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x295764u, 0x29576Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29576Cu;
label_29576c:
    // 0x29576c: 0x8e6329c0  lw          $v1, 0x29C0($s3)
    ctx->pc = 0x29576cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
    // 0x295770: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x295770u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x295774: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x295774u;
    {
        const bool branch_taken_0x295774 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x295774) {
            ctx->pc = 0x2957A0u;
            goto label_2957a0;
        }
    }
    ctx->pc = 0x29577Cu;
    // 0x29577c: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x29577cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x295780: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x295780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x295784: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x295784u;
    {
        const bool branch_taken_0x295784 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x295784) {
            ctx->pc = 0x2957A0u;
            goto label_2957a0;
        }
    }
    ctx->pc = 0x29578Cu;
    // 0x29578c: 0x92632b08  lbu         $v1, 0x2B08($s3)
    ctx->pc = 0x29578cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 11016)));
    // 0x295790: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x295790u;
    {
        const bool branch_taken_0x295790 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x295794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295790u;
        // 0x295794: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295790) {
            ctx->pc = 0x2957A0u;
            goto label_2957a0;
        }
    }
    ctx->pc = 0x295798u;
    // 0x295798: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x295798u;
    {
        const bool branch_taken_0x295798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29579Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295798u;
        // 0x29579c: 0xa6630786  sh          $v1, 0x786($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 1926), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295798) {
            ctx->pc = 0x2957B0u;
            goto label_2957b0;
        }
    }
    ctx->pc = 0x2957A0u;
label_2957a0:
    // 0x2957a0: 0x8e64004c  lw          $a0, 0x4C($s3)
    ctx->pc = 0x2957a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x2957a4: 0xc0a8108  jal         func_2A0420
    ctx->pc = 0x2957A4u;
    SET_GPR_U32(ctx, 31, 0x2957ACu);
    ctx->pc = 0x2957A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2957A4u;
    // 0x2957a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0420u, 0x2957A4u, 0x2957ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2957ACu;
label_2957ac:
    // 0x2957ac: 0x0  nop
    ctx->pc = 0x2957acu;
    // NOP
label_2957b0:
    // 0x2957b0: 0x8e640148  lw          $a0, 0x148($s3)
    ctx->pc = 0x2957b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 328)));
    // 0x2957b4: 0x3c03fff7  lui         $v1, 0xFFF7
    ctx->pc = 0x2957b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65527 << 16));
    // 0x2957b8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2957b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2957bc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2957bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2957c0: 0xae630148  sw          $v1, 0x148($s3)
    ctx->pc = 0x2957c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 328), GPR_U32(ctx, 3));
    // 0x2957c4: 0x0  nop
    ctx->pc = 0x2957c4u;
    // NOP
label_2957c8:
    // 0x2957c8: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x2957c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x2957cc: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x2957ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2957d0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2957D0u;
    {
        const bool branch_taken_0x2957d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2957d0) {
            ctx->pc = 0x2957E0u;
            goto label_2957e0;
        }
    }
    ctx->pc = 0x2957D8u;
    // 0x2957d8: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x2957D8u;
    SET_GPR_U32(ctx, 31, 0x2957E0u);
    ctx->pc = 0x2957DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2957D8u;
    // 0x2957dc: 0x8e642968  lw          $a0, 0x2968($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10600)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x2957D8u, 0x2957E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2957E0u;
label_2957e0:
    // 0x2957e0: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x2957e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x2957e4: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x2957e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2957e8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2957E8u;
    {
        const bool branch_taken_0x2957e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2957e8) {
            ctx->pc = 0x2957F8u;
            goto label_2957f8;
        }
    }
    ctx->pc = 0x2957F0u;
    // 0x2957f0: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x2957F0u;
    SET_GPR_U32(ctx, 31, 0x2957F8u);
    ctx->pc = 0x2957F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2957F0u;
    // 0x2957f4: 0x8e64297c  lw          $a0, 0x297C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10620)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x2957F0u, 0x2957F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2957F8u;
label_2957f8:
    // 0x2957f8: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x2957f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x2957fc: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x2957fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x295800: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x295800u;
    {
        const bool branch_taken_0x295800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x295800) {
            ctx->pc = 0x295810u;
            goto label_295810;
        }
    }
    ctx->pc = 0x295808u;
    // 0x295808: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x295808u;
    SET_GPR_U32(ctx, 31, 0x295810u);
    ctx->pc = 0x29580Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295808u;
    // 0x29580c: 0x8e642968  lw          $a0, 0x2968($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10600)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x295808u, 0x295810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295810u;
label_295810:
    // 0x295810: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x295810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x295814: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x295814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x295818: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x295818u;
    {
        const bool branch_taken_0x295818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x295818) {
            ctx->pc = 0x295828u;
            goto label_295828;
        }
    }
    ctx->pc = 0x295820u;
    // 0x295820: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x295820u;
    SET_GPR_U32(ctx, 31, 0x295828u);
    ctx->pc = 0x295824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295820u;
    // 0x295824: 0x8e64297c  lw          $a0, 0x297C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10620)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x295820u, 0x295828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295828u;
label_295828:
    // 0x295828: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x295828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x29582c: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x29582cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x295830: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x295830u;
    {
        const bool branch_taken_0x295830 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x295830) {
            ctx->pc = 0x2958C0u;
            goto label_2958c0;
        }
    }
    ctx->pc = 0x295838u;
    // 0x295838: 0x926429d0  lbu         $a0, 0x29D0($s3)
    ctx->pc = 0x295838u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10704)));
    // 0x29583c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x29583cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x295840: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x295840u;
    {
        const bool branch_taken_0x295840 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x295840) {
            ctx->pc = 0x2958C0u;
            goto label_2958c0;
        }
    }
    ctx->pc = 0x295848u;
    // 0x295848: 0x92640640  lbu         $a0, 0x640($s3)
    ctx->pc = 0x295848u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1600)));
    // 0x29584c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x29584cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x295850: 0x1483001b  bne         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x295850u;
    {
        const bool branch_taken_0x295850 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x295850) {
            ctx->pc = 0x2958C0u;
            goto label_2958c0;
        }
    }
    ctx->pc = 0x295858u;
    // 0x295858: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x295858u;
    SET_GPR_U32(ctx, 31, 0x295860u);
    ctx->pc = 0x29585Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295858u;
    // 0x29585c: 0x8e642980  lw          $a0, 0x2980($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10624)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x295858u, 0x295860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295860u;
label_295860:
    // 0x295860: 0x9264000a  lbu         $a0, 0xA($s3)
    ctx->pc = 0x295860u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x295864: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x295864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x295868: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x295868u;
    {
        const bool branch_taken_0x295868 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x29586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295868u;
        // 0x29586c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295868) {
            ctx->pc = 0x2958A0u;
            goto label_2958a0;
        }
    }
    ctx->pc = 0x295870u;
    // 0x295870: 0xc0a7308  jal         func_29CC20
    ctx->pc = 0x295870u;
    SET_GPR_U32(ctx, 31, 0x295878u);
    ctx->pc = 0x29CC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CC20u, 0x295870u, 0x295878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295878u;
label_295878:
    // 0x295878: 0x266404e0  addiu       $a0, $s3, 0x4E0
    ctx->pc = 0x295878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1248));
    // 0x29587c: 0x24050170  addiu       $a1, $zero, 0x170
    ctx->pc = 0x29587cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
    // 0x295880: 0xc049590  jal         func_125640
    ctx->pc = 0x295880u;
    SET_GPR_U32(ctx, 31, 0x295888u);
    ctx->pc = 0x295884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295880u;
    // 0x295884: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x295880u, 0x295888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295888u;
label_295888:
    // 0x295888: 0x266404e0  addiu       $a0, $s3, 0x4E0
    ctx->pc = 0x295888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1248));
    // 0x29588c: 0xc0991d0  jal         func_264740
    ctx->pc = 0x29588Cu;
    SET_GPR_U32(ctx, 31, 0x295894u);
    ctx->pc = 0x295890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29588Cu;
    // 0x295890: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264740u, 0x29588Cu, 0x295894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295894u;
label_295894:
    // 0x295894: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x295894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x295898: 0xa2630640  sb          $v1, 0x640($s3)
    ctx->pc = 0x295898u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1600), (uint8_t)GPR_U32(ctx, 3));
    // 0x29589c: 0x0  nop
    ctx->pc = 0x29589cu;
    // NOP
label_2958a0:
    // 0x2958a0: 0x8e6429c8  lw          $a0, 0x29C8($s3)
    ctx->pc = 0x2958a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10696)));
    // 0x2958a4: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x2958a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x2958a8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2958a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2958ac: 0xae6329c8  sw          $v1, 0x29C8($s3)
    ctx->pc = 0x2958acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10696), GPR_U32(ctx, 3));
    // 0x2958b0: 0x8e6306cc  lw          $v1, 0x6CC($s3)
    ctx->pc = 0x2958b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1740)));
    // 0x2958b4: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x2958b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x2958b8: 0xae6306cc  sw          $v1, 0x6CC($s3)
    ctx->pc = 0x2958b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1740), GPR_U32(ctx, 3));
    // 0x2958bc: 0x0  nop
    ctx->pc = 0x2958bcu;
    // NOP
label_2958c0:
    // 0x2958c0: 0x3243ffff  andi        $v1, $s2, 0xFFFF
    ctx->pc = 0x2958c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x2958c4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2958c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2958c8: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x2958C8u;
    {
        const bool branch_taken_0x2958c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2958c8) {
            ctx->pc = 0x2959A8u;
            goto label_2959a8;
        }
    }
    ctx->pc = 0x2958D0u;
    // 0x2958d0: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x2958d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2958d4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2958d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2958d8: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2958D8u;
    {
        const bool branch_taken_0x2958d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2958d8) {
            ctx->pc = 0x2958E8u;
            goto label_2958e8;
        }
    }
    ctx->pc = 0x2958E0u;
    // 0x2958e0: 0xa2632b09  sb          $v1, 0x2B09($s3)
    ctx->pc = 0x2958e0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 11017), (uint8_t)GPR_U32(ctx, 3));
    // 0x2958e4: 0x0  nop
    ctx->pc = 0x2958e4u;
    // NOP
label_2958e8:
    // 0x2958e8: 0x8e6329c0  lw          $v1, 0x29C0($s3)
    ctx->pc = 0x2958e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
    // 0x2958ec: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2958ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2958f0: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2958F0u;
    {
        const bool branch_taken_0x2958f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2958f0) {
            ctx->pc = 0x295920u;
            goto label_295920;
        }
    }
    ctx->pc = 0x2958F8u;
    // 0x2958f8: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x2958f8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2958fc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2958fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x295900: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x295900u;
    {
        const bool branch_taken_0x295900 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x295900) {
            ctx->pc = 0x295920u;
            goto label_295920;
        }
    }
    ctx->pc = 0x295908u;
    // 0x295908: 0x92632b08  lbu         $v1, 0x2B08($s3)
    ctx->pc = 0x295908u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 11016)));
    // 0x29590c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29590Cu;
    {
        const bool branch_taken_0x29590c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x295910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29590Cu;
        // 0x295910: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29590c) {
            ctx->pc = 0x295920u;
            goto label_295920;
        }
    }
    ctx->pc = 0x295914u;
    // 0x295914: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x295914u;
    {
        const bool branch_taken_0x295914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295914u;
        // 0x295918: 0xa6630786  sh          $v1, 0x786($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 1926), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295914) {
            ctx->pc = 0x2959A8u;
            goto label_2959a8;
        }
    }
    ctx->pc = 0x29591Cu;
    // 0x29591c: 0x0  nop
    ctx->pc = 0x29591cu;
    // NOP
label_295920:
    // 0x295920: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x295920u;
    SET_GPR_U32(ctx, 31, 0x295928u);
    ctx->pc = 0x295924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295920u;
    // 0x295924: 0x8e642968  lw          $a0, 0x2968($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10600)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x295920u, 0x295928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295928u;
label_295928:
    // 0x295928: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x295928u;
    SET_GPR_U32(ctx, 31, 0x295930u);
    ctx->pc = 0x29592Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295928u;
    // 0x29592c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x295928u, 0x295930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295930u;
label_295930:
    // 0x295930: 0x926508e8  lbu         $a1, 0x8E8($s3)
    ctx->pc = 0x295930u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2280)));
    // 0x295934: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x295934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295938: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x295938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29593c: 0xc0aa67c  jal         func_2A99F0
    ctx->pc = 0x29593Cu;
    SET_GPR_U32(ctx, 31, 0x295944u);
    ctx->pc = 0x295940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29593Cu;
    // 0x295940: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A99F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A99F0u, 0x29593Cu, 0x295944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295944u;
label_295944:
    // 0x295944: 0x8e642968  lw          $a0, 0x2968($s3)
    ctx->pc = 0x295944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10600)));
    // 0x295948: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x295948u;
    SET_GPR_U32(ctx, 31, 0x295950u);
    ctx->pc = 0x29594Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295948u;
    // 0x29594c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x295948u, 0x295950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295950u;
label_295950:
    // 0x295950: 0xae712968  sw          $s1, 0x2968($s3)
    ctx->pc = 0x295950u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10600), GPR_U32(ctx, 17));
    // 0x295954: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x295954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x295958: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x295958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29595c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x29595cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x295960: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x295960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x295964: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x295964u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x295968: 0x0  nop
    ctx->pc = 0x295968u;
    // NOP
    // 0x29596c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x29596cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x295970: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x295970u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x295974: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x295974u;
    {
        const bool branch_taken_0x295974 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x295974) {
            ctx->pc = 0x29598Cu;
            goto label_29598c;
        }
    }
    ctx->pc = 0x29597Cu;
    // 0x29597c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29597cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x295980: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x295980u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x295984: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x295984u;
    {
        const bool branch_taken_0x295984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295984u;
        // 0x295988: 0xa66429e6  sh          $a0, 0x29E6($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 10726), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295984) {
            ctx->pc = 0x2959A8u;
            goto label_2959a8;
        }
    }
    ctx->pc = 0x29598Cu;
label_29598c:
    // 0x29598c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x29598cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x295990: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x295990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x295994: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x295994u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x295998: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x295998u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x29599c: 0x0  nop
    ctx->pc = 0x29599cu;
    // NOP
    // 0x2959a0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2959a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2959a4: 0xa66429e6  sh          $a0, 0x29E6($s3)
    ctx->pc = 0x2959a4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 10726), (uint16_t)GPR_U32(ctx, 4));
label_2959a8:
    // 0x2959a8: 0x3243ffff  andi        $v1, $s2, 0xFFFF
    ctx->pc = 0x2959a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x2959ac: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x2959acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2959b0: 0x10600055  beqz        $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x2959B0u;
    {
        const bool branch_taken_0x2959b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2959b0) {
            ctx->pc = 0x295B08u;
            goto label_295b08;
        }
    }
    ctx->pc = 0x2959B8u;
    // 0x2959b8: 0x8e6406c8  lw          $a0, 0x6C8($s3)
    ctx->pc = 0x2959b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1736)));
    // 0x2959bc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2959bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2959c0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2959c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2959c4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2959C4u;
    {
        const bool branch_taken_0x2959c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2959c4) {
            ctx->pc = 0x2959E0u;
            goto label_2959e0;
        }
    }
    ctx->pc = 0x2959CCu;
    // 0x2959cc: 0x966329de  lhu         $v1, 0x29DE($s3)
    ctx->pc = 0x2959ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10718)));
    // 0x2959d0: 0x3063fffb  andi        $v1, $v1, 0xFFFB
    ctx->pc = 0x2959d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65531);
    // 0x2959d4: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x2959D4u;
    {
        const bool branch_taken_0x2959d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2959D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2959D4u;
        // 0x2959d8: 0xa66329de  sh          $v1, 0x29DE($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 10718), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2959d4) {
            ctx->pc = 0x295B08u;
            goto label_295b08;
        }
    }
    ctx->pc = 0x2959DCu;
    // 0x2959dc: 0x0  nop
    ctx->pc = 0x2959dcu;
    // NOP
label_2959e0:
    // 0x2959e0: 0x8e6306ac  lw          $v1, 0x6AC($s3)
    ctx->pc = 0x2959e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1708)));
    // 0x2959e4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2959e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2959e8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2959E8u;
    {
        const bool branch_taken_0x2959e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2959ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2959E8u;
        // 0x2959ec: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2959e8) {
            ctx->pc = 0x295A10u;
            goto label_295a10;
        }
    }
    ctx->pc = 0x2959F0u;
    // 0x2959f0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2959f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2959f4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2959F4u;
    {
        const bool branch_taken_0x2959f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2959f4) {
            ctx->pc = 0x295A10u;
            goto label_295a10;
        }
    }
    ctx->pc = 0x2959FCu;
    // 0x2959fc: 0x966329de  lhu         $v1, 0x29DE($s3)
    ctx->pc = 0x2959fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10718)));
    // 0x295a00: 0x3063fffb  andi        $v1, $v1, 0xFFFB
    ctx->pc = 0x295a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65531);
    // 0x295a04: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x295A04u;
    {
        const bool branch_taken_0x295a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295A04u;
        // 0x295a08: 0xa66329de  sh          $v1, 0x29DE($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 10718), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295a04) {
            ctx->pc = 0x295B08u;
            goto label_295b08;
        }
    }
    ctx->pc = 0x295A0Cu;
    // 0x295a0c: 0x0  nop
    ctx->pc = 0x295a0cu;
    // NOP
label_295a10:
    // 0x295a10: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x295a10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x295a14: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x295a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x295a18: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x295A18u;
    {
        const bool branch_taken_0x295a18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x295A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295A18u;
        // 0x295a1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295a18) {
            ctx->pc = 0x295A28u;
            goto label_295a28;
        }
    }
    ctx->pc = 0x295A20u;
    // 0x295a20: 0xa2622b09  sb          $v0, 0x2B09($s3)
    ctx->pc = 0x295a20u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 11017), (uint8_t)GPR_U32(ctx, 2));
    // 0x295a24: 0x0  nop
    ctx->pc = 0x295a24u;
    // NOP
label_295a28:
    // 0x295a28: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x295a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x295a2c: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x295a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295a30: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x295a30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x295a34: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x295a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x295a38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x295a38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x295a3c: 0x0  nop
    ctx->pc = 0x295a3cu;
    // NOP
    // 0x295a40: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x295a40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x295a44: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x295a44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x295a48: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x295A48u;
    {
        const bool branch_taken_0x295a48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x295a48) {
            ctx->pc = 0x295A60u;
            goto label_295a60;
        }
    }
    ctx->pc = 0x295A50u;
    // 0x295a50: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x295a50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x295a54: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x295a54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x295a58: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x295A58u;
    {
        const bool branch_taken_0x295a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295A58u;
        // 0x295a5c: 0x96640784  lhu         $a0, 0x784($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 1924)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295a58) {
            ctx->pc = 0x295A7Cu;
            goto label_295a7c;
        }
    }
    ctx->pc = 0x295A60u;
label_295a60:
    // 0x295a60: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x295a60u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x295a64: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x295a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x295a68: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x295a68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x295a6c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x295a6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x295a70: 0x0  nop
    ctx->pc = 0x295a70u;
    // NOP
    // 0x295a74: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x295a74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x295a78: 0x96640784  lhu         $a0, 0x784($s3)
    ctx->pc = 0x295a78u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 1924)));
label_295a7c:
    // 0x295a7c: 0xc096974  jal         func_25A5D0
    ctx->pc = 0x295A7Cu;
    SET_GPR_U32(ctx, 31, 0x295A84u);
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x295A7Cu, 0x295A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295A84u;
label_295a84:
    // 0x295a84: 0xa66229e8  sh          $v0, 0x29E8($s3)
    ctx->pc = 0x295a84u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 10728), (uint16_t)GPR_U32(ctx, 2));
    // 0x295a88: 0x266207a0  addiu       $v0, $s3, 0x7A0
    ctx->pc = 0x295a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1952));
    // 0x295a8c: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x295a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x295a90: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x295A90u;
    SET_GPR_U32(ctx, 31, 0x295A98u);
    ctx->pc = 0x295A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295A90u;
    // 0x295a94: 0x8e642968  lw          $a0, 0x2968($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10600)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x295A90u, 0x295A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295A98u;
label_295a98:
    // 0x295a98: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x295A98u;
    SET_GPR_U32(ctx, 31, 0x295AA0u);
    ctx->pc = 0x295A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295A98u;
    // 0x295a9c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x295A98u, 0x295AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295AA0u;
label_295aa0:
    // 0x295aa0: 0x926508e8  lbu         $a1, 0x8E8($s3)
    ctx->pc = 0x295aa0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2280)));
    // 0x295aa4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x295aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295aa8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x295aa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295aac: 0xc0aa6c4  jal         func_2A9B10
    ctx->pc = 0x295AACu;
    SET_GPR_U32(ctx, 31, 0x295AB4u);
    ctx->pc = 0x295AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295AACu;
    // 0x295ab0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9B10u, 0x295AACu, 0x295AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295AB4u;
label_295ab4:
    // 0x295ab4: 0x8e642968  lw          $a0, 0x2968($s3)
    ctx->pc = 0x295ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10600)));
    // 0x295ab8: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x295AB8u;
    SET_GPR_U32(ctx, 31, 0x295AC0u);
    ctx->pc = 0x295ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295AB8u;
    // 0x295abc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x295AB8u, 0x295AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295AC0u;
label_295ac0:
    // 0x295ac0: 0xae712968  sw          $s1, 0x2968($s3)
    ctx->pc = 0x295ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10600), GPR_U32(ctx, 17));
    // 0x295ac4: 0x8e64004c  lw          $a0, 0x4C($s3)
    ctx->pc = 0x295ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x295ac8: 0x8c83008c  lw          $v1, 0x8C($a0)
    ctx->pc = 0x295ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x295acc: 0x9063000d  lbu         $v1, 0xD($v1)
    ctx->pc = 0x295accu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13)));
    // 0x295ad0: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x295ad0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x295ad4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x295AD4u;
    {
        const bool branch_taken_0x295ad4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x295AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295AD4u;
        // 0x295ad8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295ad4) {
            ctx->pc = 0x295AE8u;
            goto label_295ae8;
        }
    }
    ctx->pc = 0x295ADCu;
    // 0x295adc: 0xc0a8108  jal         func_2A0420
    ctx->pc = 0x295ADCu;
    SET_GPR_U32(ctx, 31, 0x295AE4u);
    ctx->pc = 0x2A0420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0420u, 0x295ADCu, 0x295AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295AE4u;
label_295ae4:
    // 0x295ae4: 0x0  nop
    ctx->pc = 0x295ae4u;
    // NOP
label_295ae8:
    // 0x295ae8: 0x8e650148  lw          $a1, 0x148($s3)
    ctx->pc = 0x295ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 328)));
    // 0x295aec: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x295aecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x295af0: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x295af0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x295af4: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x295af4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x295af8: 0xae640148  sw          $a0, 0x148($s3)
    ctx->pc = 0x295af8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 328), GPR_U32(ctx, 4));
    // 0x295afc: 0x8e640148  lw          $a0, 0x148($s3)
    ctx->pc = 0x295afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 328)));
    // 0x295b00: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x295b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x295b04: 0xae630148  sw          $v1, 0x148($s3)
    ctx->pc = 0x295b04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 328), GPR_U32(ctx, 3));
label_295b08:
    // 0x295b08: 0x3243ffff  andi        $v1, $s2, 0xFFFF
    ctx->pc = 0x295b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x295b0c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x295b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x295b10: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x295B10u;
    {
        const bool branch_taken_0x295b10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x295b10) {
            ctx->pc = 0x295C18u;
            goto label_295c18;
        }
    }
    ctx->pc = 0x295B18u;
    // 0x295b18: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x295B18u;
    SET_GPR_U32(ctx, 31, 0x295B20u);
    ctx->pc = 0x295B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295B18u;
    // 0x295b1c: 0x8e642968  lw          $a0, 0x2968($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10600)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x295B18u, 0x295B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295B20u;
label_295b20:
    // 0x295b20: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x295B20u;
    SET_GPR_U32(ctx, 31, 0x295B28u);
    ctx->pc = 0x295B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295B20u;
    // 0x295b24: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x295B20u, 0x295B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295B28u;
label_295b28:
    // 0x295b28: 0x926508e8  lbu         $a1, 0x8E8($s3)
    ctx->pc = 0x295b28u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2280)));
    // 0x295b2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x295b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295b30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x295b30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295b34: 0xc0aa6a0  jal         func_2A9A80
    ctx->pc = 0x295B34u;
    SET_GPR_U32(ctx, 31, 0x295B3Cu);
    ctx->pc = 0x295B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295B34u;
    // 0x295b38: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9A80u, 0x295B34u, 0x295B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295B3Cu;
label_295b3c:
    // 0x295b3c: 0x8e642968  lw          $a0, 0x2968($s3)
    ctx->pc = 0x295b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10600)));
    // 0x295b40: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x295B40u;
    SET_GPR_U32(ctx, 31, 0x295B48u);
    ctx->pc = 0x295B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295B40u;
    // 0x295b44: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x295B40u, 0x295B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295B48u;
label_295b48:
    // 0x295b48: 0xae712968  sw          $s1, 0x2968($s3)
    ctx->pc = 0x295b48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10600), GPR_U32(ctx, 17));
    // 0x295b4c: 0x2403008a  addiu       $v1, $zero, 0x8A
    ctx->pc = 0x295b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
    // 0x295b50: 0x9264065c  lbu         $a0, 0x65C($s3)
    ctx->pc = 0x295b50u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1628)));
    // 0x295b54: 0x1483001a  bne         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x295B54u;
    {
        const bool branch_taken_0x295b54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x295b54) {
            ctx->pc = 0x295BC0u;
            goto label_295bc0;
        }
    }
    ctx->pc = 0x295B5Cu;
    // 0x295b5c: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x295b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295b60: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x295b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x295b64: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x295b64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x295b68: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x295b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x295b6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x295b6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x295b70: 0x0  nop
    ctx->pc = 0x295b70u;
    // NOP
    // 0x295b74: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x295b74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x295b78: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x295b78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x295b7c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x295B7Cu;
    {
        const bool branch_taken_0x295b7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x295b7c) {
            ctx->pc = 0x295B94u;
            goto label_295b94;
        }
    }
    ctx->pc = 0x295B84u;
    // 0x295b84: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x295b84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x295b88: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x295b88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x295b8c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x295B8Cu;
    {
        const bool branch_taken_0x295b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295B8Cu;
        // 0x295b90: 0x96650784  lhu         $a1, 0x784($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 1924)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295b8c) {
            ctx->pc = 0x295BB0u;
            goto label_295bb0;
        }
    }
    ctx->pc = 0x295B94u;
label_295b94:
    // 0x295b94: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x295b94u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x295b98: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x295b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x295b9c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x295b9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x295ba0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x295ba0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x295ba4: 0x0  nop
    ctx->pc = 0x295ba4u;
    // NOP
    // 0x295ba8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x295ba8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x295bac: 0x96650784  lhu         $a1, 0x784($s3)
    ctx->pc = 0x295bacu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 1924)));
label_295bb0:
    // 0x295bb0: 0xc096974  jal         func_25A5D0
    ctx->pc = 0x295BB0u;
    SET_GPR_U32(ctx, 31, 0x295BB8u);
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x295BB0u, 0x295BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295BB8u;
label_295bb8:
    // 0x295bb8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x295BB8u;
    {
        const bool branch_taken_0x295bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295BB8u;
        // 0x295bbc: 0xa66229ea  sh          $v0, 0x29EA($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 10730), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295bb8) {
            ctx->pc = 0x295C18u;
            goto label_295c18;
        }
    }
    ctx->pc = 0x295BC0u;
label_295bc0:
    // 0x295bc0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x295bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x295bc4: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x295bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295bc8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x295bc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x295bcc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x295bccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x295bd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x295bd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x295bd4: 0x0  nop
    ctx->pc = 0x295bd4u;
    // NOP
    // 0x295bd8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x295bd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x295bdc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x295bdcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x295be0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x295BE0u;
    {
        const bool branch_taken_0x295be0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x295be0) {
            ctx->pc = 0x295BF8u;
            goto label_295bf8;
        }
    }
    ctx->pc = 0x295BE8u;
    // 0x295be8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x295be8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x295bec: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x295becu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x295bf0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x295BF0u;
    {
        const bool branch_taken_0x295bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295BF0u;
        // 0x295bf4: 0xa66429ea  sh          $a0, 0x29EA($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 10730), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295bf0) {
            ctx->pc = 0x295C14u;
            goto label_295c14;
        }
    }
    ctx->pc = 0x295BF8u;
label_295bf8:
    // 0x295bf8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x295bf8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x295bfc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x295bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x295c00: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x295c00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x295c04: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x295c04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x295c08: 0x0  nop
    ctx->pc = 0x295c08u;
    // NOP
    // 0x295c0c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x295c0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x295c10: 0xa66429ea  sh          $a0, 0x29EA($s3)
    ctx->pc = 0x295c10u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 10730), (uint16_t)GPR_U32(ctx, 4));
label_295c14:
    // 0x295c14: 0x0  nop
    ctx->pc = 0x295c14u;
    // NOP
label_295c18:
    // 0x295c18: 0x3243ffff  andi        $v1, $s2, 0xFFFF
    ctx->pc = 0x295c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x295c1c: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x295c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x295c20: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x295C20u;
    {
        const bool branch_taken_0x295c20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x295c20) {
            ctx->pc = 0x295CA0u;
            goto label_295ca0;
        }
    }
    ctx->pc = 0x295C28u;
    // 0x295c28: 0x8e6306ac  lw          $v1, 0x6AC($s3)
    ctx->pc = 0x295c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1708)));
    // 0x295c2c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x295c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x295c30: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x295C30u;
    {
        const bool branch_taken_0x295c30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x295c30) {
            ctx->pc = 0x295C48u;
            goto label_295c48;
        }
    }
    ctx->pc = 0x295C38u;
    // 0x295c38: 0x966329de  lhu         $v1, 0x29DE($s3)
    ctx->pc = 0x295c38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10718)));
    // 0x295c3c: 0x3063ffef  andi        $v1, $v1, 0xFFEF
    ctx->pc = 0x295c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65519);
    // 0x295c40: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x295C40u;
    {
        const bool branch_taken_0x295c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295C40u;
        // 0x295c44: 0xa66329de  sh          $v1, 0x29DE($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 10718), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295c40) {
            ctx->pc = 0x295CA0u;
            goto label_295ca0;
        }
    }
    ctx->pc = 0x295C48u;
label_295c48:
    // 0x295c48: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x295C48u;
    SET_GPR_U32(ctx, 31, 0x295C50u);
    ctx->pc = 0x295C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295C48u;
    // 0x295c4c: 0x8e64297c  lw          $a0, 0x297C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10620)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x295C48u, 0x295C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295C50u;
label_295c50:
    // 0x295c50: 0x27a4006f  addiu       $a0, $sp, 0x6F
    ctx->pc = 0x295c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 111));
    // 0x295c54: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x295c54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295c58: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x295c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x295c5c: 0xc0a2258  jal         func_288960
    ctx->pc = 0x295C5Cu;
    SET_GPR_U32(ctx, 31, 0x295C64u);
    ctx->pc = 0x295C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295C5Cu;
    // 0x295c60: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288960u, 0x295C5Cu, 0x295C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295C64u;
label_295c64:
    // 0x295c64: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x295C64u;
    SET_GPR_U32(ctx, 31, 0x295C6Cu);
    ctx->pc = 0x295C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295C64u;
    // 0x295c68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x295C64u, 0x295C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295C6Cu;
label_295c6c:
    // 0x295c6c: 0x926508e8  lbu         $a1, 0x8E8($s3)
    ctx->pc = 0x295c6cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2280)));
    // 0x295c70: 0x3c080067  lui         $t0, 0x67
    ctx->pc = 0x295c70u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)103 << 16));
    // 0x295c74: 0x93a7006f  lbu         $a3, 0x6F($sp)
    ctx->pc = 0x295c74u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 111)));
    // 0x295c78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x295c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295c7c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x295c7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295c80: 0xc0aa720  jal         func_2A9C80
    ctx->pc = 0x295C80u;
    SET_GPR_U32(ctx, 31, 0x295C88u);
    ctx->pc = 0x295C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295C80u;
    // 0x295c84: 0x25086ea0  addiu       $t0, $t0, 0x6EA0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9C80u, 0x295C80u, 0x295C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295C88u;
label_295c88:
    // 0x295c88: 0x8e64297c  lw          $a0, 0x297C($s3)
    ctx->pc = 0x295c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10620)));
    // 0x295c8c: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x295C8Cu;
    SET_GPR_U32(ctx, 31, 0x295C94u);
    ctx->pc = 0x295C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295C8Cu;
    // 0x295c90: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x295C8Cu, 0x295C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295C94u;
label_295c94:
    // 0x295c94: 0xae71297c  sw          $s1, 0x297C($s3)
    ctx->pc = 0x295c94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10620), GPR_U32(ctx, 17));
    // 0x295c98: 0x96630784  lhu         $v1, 0x784($s3)
    ctx->pc = 0x295c98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 1924)));
    // 0x295c9c: 0xa66329ec  sh          $v1, 0x29EC($s3)
    ctx->pc = 0x295c9cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 10732), (uint16_t)GPR_U32(ctx, 3));
label_295ca0:
    // 0x295ca0: 0x3243ffff  andi        $v1, $s2, 0xFFFF
    ctx->pc = 0x295ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x295ca4: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x295ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x295ca8: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x295CA8u;
    {
        const bool branch_taken_0x295ca8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x295ca8) {
            ctx->pc = 0x295D00u;
            goto label_295d00;
        }
    }
    ctx->pc = 0x295CB0u;
    // 0x295cb0: 0x8e6329c0  lw          $v1, 0x29C0($s3)
    ctx->pc = 0x295cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
    // 0x295cb4: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x295cb4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x295cb8: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x295CB8u;
    {
        const bool branch_taken_0x295cb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x295cb8) {
            ctx->pc = 0x295CF0u;
            goto label_295cf0;
        }
    }
    ctx->pc = 0x295CC0u;
    // 0x295cc0: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x295cc0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x295cc4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x295cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x295cc8: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x295CC8u;
    {
        const bool branch_taken_0x295cc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x295cc8) {
            ctx->pc = 0x295D00u;
            goto label_295d00;
        }
    }
    ctx->pc = 0x295CD0u;
    // 0x295cd0: 0x92632b08  lbu         $v1, 0x2B08($s3)
    ctx->pc = 0x295cd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 11016)));
    // 0x295cd4: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x295CD4u;
    {
        const bool branch_taken_0x295cd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x295CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295CD4u;
        // 0x295cd8: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295cd4) {
            ctx->pc = 0x295D00u;
            goto label_295d00;
        }
    }
    ctx->pc = 0x295CDCu;
    // 0x295cdc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x295cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x295ce0: 0xa2642b09  sb          $a0, 0x2B09($s3)
    ctx->pc = 0x295ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 11017), (uint8_t)GPR_U32(ctx, 4));
    // 0x295ce4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x295CE4u;
    {
        const bool branch_taken_0x295ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295CE4u;
        // 0x295ce8: 0xa6630786  sh          $v1, 0x786($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 1926), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295ce4) {
            ctx->pc = 0x295D00u;
            goto label_295d00;
        }
    }
    ctx->pc = 0x295CECu;
    // 0x295cec: 0x0  nop
    ctx->pc = 0x295cecu;
    // NOP
label_295cf0:
    // 0x295cf0: 0x966329de  lhu         $v1, 0x29DE($s3)
    ctx->pc = 0x295cf0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10718)));
    // 0x295cf4: 0x3063ffbf  andi        $v1, $v1, 0xFFBF
    ctx->pc = 0x295cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65471);
    // 0x295cf8: 0xa66329de  sh          $v1, 0x29DE($s3)
    ctx->pc = 0x295cf8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 10718), (uint16_t)GPR_U32(ctx, 3));
    // 0x295cfc: 0x0  nop
    ctx->pc = 0x295cfcu;
    // NOP
label_295d00:
    // 0x295d00: 0x3243ffff  andi        $v1, $s2, 0xFFFF
    ctx->pc = 0x295d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x295d04: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x295d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x295d08: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x295D08u;
    {
        const bool branch_taken_0x295d08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x295d08) {
            ctx->pc = 0x295DB8u;
            goto label_295db8;
        }
    }
    ctx->pc = 0x295D10u;
    // 0x295d10: 0x8e6329c0  lw          $v1, 0x29C0($s3)
    ctx->pc = 0x295d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
    // 0x295d14: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x295d14u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x295d18: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x295D18u;
    {
        const bool branch_taken_0x295d18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x295d18) {
            ctx->pc = 0x295D30u;
            goto label_295d30;
        }
    }
    ctx->pc = 0x295D20u;
    // 0x295d20: 0x966329de  lhu         $v1, 0x29DE($s3)
    ctx->pc = 0x295d20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10718)));
    // 0x295d24: 0x3063ff7f  andi        $v1, $v1, 0xFF7F
    ctx->pc = 0x295d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65407);
    // 0x295d28: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x295D28u;
    {
        const bool branch_taken_0x295d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295D28u;
        // 0x295d2c: 0xa66329de  sh          $v1, 0x29DE($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 10718), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295d28) {
            ctx->pc = 0x295DB8u;
            goto label_295db8;
        }
    }
    ctx->pc = 0x295D30u;
label_295d30:
    // 0x295d30: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x295D30u;
    SET_GPR_U32(ctx, 31, 0x295D38u);
    ctx->pc = 0x295D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295D30u;
    // 0x295d34: 0x8e642968  lw          $a0, 0x2968($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10600)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x295D30u, 0x295D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295D38u;
label_295d38:
    // 0x295d38: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x295D38u;
    SET_GPR_U32(ctx, 31, 0x295D40u);
    ctx->pc = 0x295D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295D38u;
    // 0x295d3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x295D38u, 0x295D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295D40u;
label_295d40:
    // 0x295d40: 0x926508e8  lbu         $a1, 0x8E8($s3)
    ctx->pc = 0x295d40u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2280)));
    // 0x295d44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x295d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295d48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x295d48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295d4c: 0xc0aa6e8  jal         func_2A9BA0
    ctx->pc = 0x295D4Cu;
    SET_GPR_U32(ctx, 31, 0x295D54u);
    ctx->pc = 0x295D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295D4Cu;
    // 0x295d50: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9BA0u, 0x295D4Cu, 0x295D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295D54u;
label_295d54:
    // 0x295d54: 0x8e642968  lw          $a0, 0x2968($s3)
    ctx->pc = 0x295d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10600)));
    // 0x295d58: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x295D58u;
    SET_GPR_U32(ctx, 31, 0x295D60u);
    ctx->pc = 0x295D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295D58u;
    // 0x295d5c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x295D58u, 0x295D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295D60u;
label_295d60:
    // 0x295d60: 0xae712968  sw          $s1, 0x2968($s3)
    ctx->pc = 0x295d60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10600), GPR_U32(ctx, 17));
    // 0x295d64: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x295d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x295d68: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x295d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295d6c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x295d6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x295d70: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x295d70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x295d74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x295d74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x295d78: 0x0  nop
    ctx->pc = 0x295d78u;
    // NOP
    // 0x295d7c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x295d7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x295d80: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x295d80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x295d84: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x295D84u;
    {
        const bool branch_taken_0x295d84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x295d84) {
            ctx->pc = 0x295D9Cu;
            goto label_295d9c;
        }
    }
    ctx->pc = 0x295D8Cu;
    // 0x295d8c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x295d8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x295d90: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x295d90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x295d94: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x295D94u;
    {
        const bool branch_taken_0x295d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295D94u;
        // 0x295d98: 0xa66429f2  sh          $a0, 0x29F2($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 10738), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295d94) {
            ctx->pc = 0x295DB8u;
            goto label_295db8;
        }
    }
    ctx->pc = 0x295D9Cu;
label_295d9c:
    // 0x295d9c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x295d9cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x295da0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x295da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x295da4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x295da4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x295da8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x295da8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x295dac: 0x0  nop
    ctx->pc = 0x295dacu;
    // NOP
    // 0x295db0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x295db0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x295db4: 0xa66429f2  sh          $a0, 0x29F2($s3)
    ctx->pc = 0x295db4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 10738), (uint16_t)GPR_U32(ctx, 4));
label_295db8:
    // 0x295db8: 0x3243ffff  andi        $v1, $s2, 0xFFFF
    ctx->pc = 0x295db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x295dbc: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x295dbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x295dc0: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x295DC0u;
    {
        const bool branch_taken_0x295dc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x295dc0) {
            ctx->pc = 0x295E70u;
            goto label_295e70;
        }
    }
    ctx->pc = 0x295DC8u;
    // 0x295dc8: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x295DC8u;
    SET_GPR_U32(ctx, 31, 0x295DD0u);
    ctx->pc = 0x295DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295DC8u;
    // 0x295dcc: 0x8e64297c  lw          $a0, 0x297C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10620)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x295DC8u, 0x295DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295DD0u;
label_295dd0:
    // 0x295dd0: 0x27a4006e  addiu       $a0, $sp, 0x6E
    ctx->pc = 0x295dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 110));
    // 0x295dd4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x295dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295dd8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x295dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x295ddc: 0xc0a2258  jal         func_288960
    ctx->pc = 0x295DDCu;
    SET_GPR_U32(ctx, 31, 0x295DE4u);
    ctx->pc = 0x295DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295DDCu;
    // 0x295de0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288960u, 0x295DDCu, 0x295DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295DE4u;
label_295de4:
    // 0x295de4: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x295DE4u;
    SET_GPR_U32(ctx, 31, 0x295DECu);
    ctx->pc = 0x295DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295DE4u;
    // 0x295de8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x295DE4u, 0x295DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295DECu;
label_295dec:
    // 0x295dec: 0x926508e8  lbu         $a1, 0x8E8($s3)
    ctx->pc = 0x295decu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2280)));
    // 0x295df0: 0x3c080067  lui         $t0, 0x67
    ctx->pc = 0x295df0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)103 << 16));
    // 0x295df4: 0x93a7006e  lbu         $a3, 0x6E($sp)
    ctx->pc = 0x295df4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 110)));
    // 0x295df8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x295df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295dfc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x295dfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295e00: 0xc0aa720  jal         func_2A9C80
    ctx->pc = 0x295E00u;
    SET_GPR_U32(ctx, 31, 0x295E08u);
    ctx->pc = 0x295E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295E00u;
    // 0x295e04: 0x25086eb0  addiu       $t0, $t0, 0x6EB0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9C80u, 0x295E00u, 0x295E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295E08u;
label_295e08:
    // 0x295e08: 0x8e64297c  lw          $a0, 0x297C($s3)
    ctx->pc = 0x295e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10620)));
    // 0x295e0c: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x295E0Cu;
    SET_GPR_U32(ctx, 31, 0x295E14u);
    ctx->pc = 0x295E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295E0Cu;
    // 0x295e10: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x295E0Cu, 0x295E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295E14u;
label_295e14:
    // 0x295e14: 0xae71297c  sw          $s1, 0x297C($s3)
    ctx->pc = 0x295e14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10620), GPR_U32(ctx, 17));
    // 0x295e18: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x295e18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x295e1c: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x295e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295e20: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x295e20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x295e24: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x295e24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x295e28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x295e28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x295e2c: 0x0  nop
    ctx->pc = 0x295e2cu;
    // NOP
    // 0x295e30: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x295e30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x295e34: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x295e34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x295e38: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x295E38u;
    {
        const bool branch_taken_0x295e38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x295e38) {
            ctx->pc = 0x295E50u;
            goto label_295e50;
        }
    }
    ctx->pc = 0x295E40u;
    // 0x295e40: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x295e40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x295e44: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x295e44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x295e48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x295E48u;
    {
        const bool branch_taken_0x295e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295E48u;
        // 0x295e4c: 0xa66429f4  sh          $a0, 0x29F4($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 10740), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295e48) {
            ctx->pc = 0x295E6Cu;
            goto label_295e6c;
        }
    }
    ctx->pc = 0x295E50u;
label_295e50:
    // 0x295e50: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x295e50u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x295e54: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x295e54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x295e58: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x295e58u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x295e5c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x295e5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x295e60: 0x0  nop
    ctx->pc = 0x295e60u;
    // NOP
    // 0x295e64: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x295e64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x295e68: 0xa66429f4  sh          $a0, 0x29F4($s3)
    ctx->pc = 0x295e68u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 10740), (uint16_t)GPR_U32(ctx, 4));
label_295e6c:
    // 0x295e6c: 0x0  nop
    ctx->pc = 0x295e6cu;
    // NOP
label_295e70:
    // 0x295e70: 0x3243ffff  andi        $v1, $s2, 0xFFFF
    ctx->pc = 0x295e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x295e74: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x295e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x295e78: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x295E78u;
    {
        const bool branch_taken_0x295e78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x295e78) {
            ctx->pc = 0x295ED8u;
            goto label_295ed8;
        }
    }
    ctx->pc = 0x295E80u;
    // 0x295e80: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x295e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295e84: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x295e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x295e88: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x295e88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x295e8c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x295e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x295e90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x295e90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x295e94: 0x0  nop
    ctx->pc = 0x295e94u;
    // NOP
    // 0x295e98: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x295e98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x295e9c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x295e9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x295ea0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x295EA0u;
    {
        const bool branch_taken_0x295ea0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x295ea0) {
            ctx->pc = 0x295EB8u;
            goto label_295eb8;
        }
    }
    ctx->pc = 0x295EA8u;
    // 0x295ea8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x295ea8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x295eac: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x295eacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x295eb0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x295EB0u;
    {
        const bool branch_taken_0x295eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295EB0u;
        // 0x295eb4: 0xa66429f8  sh          $a0, 0x29F8($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 10744), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295eb0) {
            ctx->pc = 0x295ED4u;
            goto label_295ed4;
        }
    }
    ctx->pc = 0x295EB8u;
label_295eb8:
    // 0x295eb8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x295eb8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x295ebc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x295ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x295ec0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x295ec0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x295ec4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x295ec4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x295ec8: 0x0  nop
    ctx->pc = 0x295ec8u;
    // NOP
    // 0x295ecc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x295eccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x295ed0: 0xa66429f8  sh          $a0, 0x29F8($s3)
    ctx->pc = 0x295ed0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 10744), (uint16_t)GPR_U32(ctx, 4));
label_295ed4:
    // 0x295ed4: 0x0  nop
    ctx->pc = 0x295ed4u;
    // NOP
label_295ed8:
    // 0x295ed8: 0x3243ffff  andi        $v1, $s2, 0xFFFF
    ctx->pc = 0x295ed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x295edc: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x295edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x295ee0: 0x10600077  beqz        $v1, . + 4 + (0x77 << 2)
    ctx->pc = 0x295EE0u;
    {
        const bool branch_taken_0x295ee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x295ee0) {
            ctx->pc = 0x2960C0u;
            goto label_2960c0;
        }
    }
    ctx->pc = 0x295EE8u;
    // 0x295ee8: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x295ee8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x295eec: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x295eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x295ef0: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x295EF0u;
    {
        const bool branch_taken_0x295ef0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x295ef0) {
            ctx->pc = 0x295F08u;
            goto label_295f08;
        }
    }
    ctx->pc = 0x295EF8u;
    // 0x295ef8: 0x92632b08  lbu         $v1, 0x2B08($s3)
    ctx->pc = 0x295ef8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 11016)));
    // 0x295efc: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x295EFCu;
    {
        const bool branch_taken_0x295efc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x295efc) {
            ctx->pc = 0x295F20u;
            goto label_295f20;
        }
    }
    ctx->pc = 0x295F04u;
    // 0x295f04: 0x0  nop
    ctx->pc = 0x295f04u;
    // NOP
label_295f08:
    // 0x295f08: 0x8e6406c8  lw          $a0, 0x6C8($s3)
    ctx->pc = 0x295f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1736)));
    // 0x295f0c: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x295f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x295f10: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x295f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x295f14: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x295F14u;
    {
        const bool branch_taken_0x295f14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x295f14) {
            ctx->pc = 0x295F30u;
            goto label_295f30;
        }
    }
    ctx->pc = 0x295F1Cu;
    // 0x295f1c: 0x0  nop
    ctx->pc = 0x295f1cu;
    // NOP
label_295f20:
    // 0x295f20: 0x966329de  lhu         $v1, 0x29DE($s3)
    ctx->pc = 0x295f20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10718)));
    // 0x295f24: 0x3063f7ff  andi        $v1, $v1, 0xF7FF
    ctx->pc = 0x295f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63487);
    // 0x295f28: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x295F28u;
    {
        const bool branch_taken_0x295f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295F28u;
        // 0x295f2c: 0xa66329de  sh          $v1, 0x29DE($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 10718), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295f28) {
            ctx->pc = 0x2960C0u;
            goto label_2960c0;
        }
    }
    ctx->pc = 0x295F30u;
label_295f30:
    // 0x295f30: 0x926429d0  lbu         $a0, 0x29D0($s3)
    ctx->pc = 0x295f30u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10704)));
    // 0x295f34: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x295f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x295f38: 0x10830035  beq         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x295F38u;
    {
        const bool branch_taken_0x295f38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x295f38) {
            ctx->pc = 0x296010u;
            goto label_296010;
        }
    }
    ctx->pc = 0x295F40u;
    // 0x295f40: 0x9263000a  lbu         $v1, 0xA($s3)
    ctx->pc = 0x295f40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x295f44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x295f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295f48: 0x14650031  bne         $v1, $a1, . + 4 + (0x31 << 2)
    ctx->pc = 0x295F48u;
    {
        const bool branch_taken_0x295f48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x295f48) {
            ctx->pc = 0x296010u;
            goto label_296010;
        }
    }
    ctx->pc = 0x295F50u;
    // 0x295f50: 0x92640640  lbu         $a0, 0x640($s3)
    ctx->pc = 0x295f50u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1600)));
    // 0x295f54: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x295f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x295f58: 0x1483002d  bne         $a0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x295F58u;
    {
        const bool branch_taken_0x295f58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x295f58) {
            ctx->pc = 0x296010u;
            goto label_296010;
        }
    }
    ctx->pc = 0x295F60u;
    // 0x295f60: 0x8e6329c0  lw          $v1, 0x29C0($s3)
    ctx->pc = 0x295f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
    // 0x295f64: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x295f64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x295f68: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x295F68u;
    {
        const bool branch_taken_0x295f68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x295f68) {
            ctx->pc = 0x295F80u;
            goto label_295f80;
        }
    }
    ctx->pc = 0x295F70u;
    // 0x295f70: 0x966329de  lhu         $v1, 0x29DE($s3)
    ctx->pc = 0x295f70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10718)));
    // 0x295f74: 0x3063f7ff  andi        $v1, $v1, 0xF7FF
    ctx->pc = 0x295f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63487);
    // 0x295f78: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x295F78u;
    {
        const bool branch_taken_0x295f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295F78u;
        // 0x295f7c: 0xa66329de  sh          $v1, 0x29DE($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 10718), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295f78) {
            ctx->pc = 0x2960C0u;
            goto label_2960c0;
        }
    }
    ctx->pc = 0x295F80u;
label_295f80:
    // 0x295f80: 0xa2602aa2  sb          $zero, 0x2AA2($s3)
    ctx->pc = 0x295f80u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 10914), (uint8_t)GPR_U32(ctx, 0));
    // 0x295f84: 0x8e6429c0  lw          $a0, 0x29C0($s3)
    ctx->pc = 0x295f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
    // 0x295f88: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x295f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x295f8c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x295f8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x295f90: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x295f90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x295f94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x295f94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x295f98: 0xa085003a  sb          $a1, 0x3A($a0)
    ctx->pc = 0x295f98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 58), (uint8_t)GPR_U32(ctx, 5));
    // 0x295f9c: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x295f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295fa0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x295fa0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x295fa4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x295fa4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x295fa8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x295FA8u;
    {
        const bool branch_taken_0x295fa8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x295fa8) {
            ctx->pc = 0x295FC0u;
            goto label_295fc0;
        }
    }
    ctx->pc = 0x295FB0u;
    // 0x295fb0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x295fb0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x295fb4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x295fb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x295fb8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x295FB8u;
    {
        const bool branch_taken_0x295fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295FB8u;
        // 0x295fbc: 0xa66429fa  sh          $a0, 0x29FA($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 10746), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295fb8) {
            ctx->pc = 0x295FDCu;
            goto label_295fdc;
        }
    }
    ctx->pc = 0x295FC0u;
label_295fc0:
    // 0x295fc0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x295fc0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x295fc4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x295fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x295fc8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x295fc8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x295fcc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x295fccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x295fd0: 0x0  nop
    ctx->pc = 0x295fd0u;
    // NOP
    // 0x295fd4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x295fd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x295fd8: 0xa66429fa  sh          $a0, 0x29FA($s3)
    ctx->pc = 0x295fd8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 10746), (uint16_t)GPR_U32(ctx, 4));
label_295fdc:
    // 0x295fdc: 0x3c03fbff  lui         $v1, 0xFBFF
    ctx->pc = 0x295fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64511 << 16));
    // 0x295fe0: 0x8e6529c8  lw          $a1, 0x29C8($s3)
    ctx->pc = 0x295fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10696)));
    // 0x295fe4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x295fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x295fe8: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x295fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x295fec: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x295fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x295ff0: 0xae6329c8  sw          $v1, 0x29C8($s3)
    ctx->pc = 0x295ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10696), GPR_U32(ctx, 3));
    // 0x295ff4: 0x8e6306c8  lw          $v1, 0x6C8($s3)
    ctx->pc = 0x295ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1736)));
    // 0x295ff8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x295ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x295ffc: 0xae6306c8  sw          $v1, 0x6C8($s3)
    ctx->pc = 0x295ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1736), GPR_U32(ctx, 3));
    // 0x296000: 0x8e6306cc  lw          $v1, 0x6CC($s3)
    ctx->pc = 0x296000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1740)));
    // 0x296004: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x296004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x296008: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x296008u;
    {
        const bool branch_taken_0x296008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296008u;
        // 0x29600c: 0xae6306cc  sw          $v1, 0x6CC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1740), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296008) {
            ctx->pc = 0x2960C0u;
            goto label_2960c0;
        }
    }
    ctx->pc = 0x296010u;
label_296010:
    // 0x296010: 0x926429d0  lbu         $a0, 0x29D0($s3)
    ctx->pc = 0x296010u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10704)));
    // 0x296014: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x296014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x296018: 0x14830025  bne         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x296018u;
    {
        const bool branch_taken_0x296018 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x296018) {
            ctx->pc = 0x2960B0u;
            goto label_2960b0;
        }
    }
    ctx->pc = 0x296020u;
    // 0x296020: 0x9264000a  lbu         $a0, 0xA($s3)
    ctx->pc = 0x296020u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x296024: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x296024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x296028: 0x14830021  bne         $a0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x296028u;
    {
        const bool branch_taken_0x296028 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x296028) {
            ctx->pc = 0x2960B0u;
            goto label_2960b0;
        }
    }
    ctx->pc = 0x296030u;
    // 0x296030: 0x8e6329c0  lw          $v1, 0x29C0($s3)
    ctx->pc = 0x296030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
    // 0x296034: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x296034u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x296038: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x296038u;
    {
        const bool branch_taken_0x296038 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x296038) {
            ctx->pc = 0x2960A0u;
            goto label_2960a0;
        }
    }
    ctx->pc = 0x296040u;
    // 0x296040: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x296040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x296044: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x296044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x296048: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x296048u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29604c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x29604cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x296050: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x296050u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x296054: 0x0  nop
    ctx->pc = 0x296054u;
    // NOP
    // 0x296058: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x296058u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x29605c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x29605cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x296060: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x296060u;
    {
        const bool branch_taken_0x296060 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x296060) {
            ctx->pc = 0x296078u;
            goto label_296078;
        }
    }
    ctx->pc = 0x296068u;
    // 0x296068: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x296068u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29606c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x29606cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x296070: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x296070u;
    {
        const bool branch_taken_0x296070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296070u;
        // 0x296074: 0xa6640786  sh          $a0, 0x786($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 1926), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296070) {
            ctx->pc = 0x296094u;
            goto label_296094;
        }
    }
    ctx->pc = 0x296078u;
label_296078:
    // 0x296078: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x296078u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29607c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x29607cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x296080: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x296080u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x296084: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x296084u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x296088: 0x0  nop
    ctx->pc = 0x296088u;
    // NOP
    // 0x29608c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x29608cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x296090: 0xa6640786  sh          $a0, 0x786($s3)
    ctx->pc = 0x296090u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1926), (uint16_t)GPR_U32(ctx, 4));
label_296094:
    // 0x296094: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x296094u;
    {
        const bool branch_taken_0x296094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296094) {
            ctx->pc = 0x2960C0u;
            goto label_2960c0;
        }
    }
    ctx->pc = 0x29609Cu;
    // 0x29609c: 0x0  nop
    ctx->pc = 0x29609cu;
    // NOP
label_2960a0:
    // 0x2960a0: 0x966329de  lhu         $v1, 0x29DE($s3)
    ctx->pc = 0x2960a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10718)));
    // 0x2960a4: 0x3063f7ff  andi        $v1, $v1, 0xF7FF
    ctx->pc = 0x2960a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63487);
    // 0x2960a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2960A8u;
    {
        const bool branch_taken_0x2960a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2960ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2960A8u;
        // 0x2960ac: 0xa66329de  sh          $v1, 0x29DE($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 10718), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2960a8) {
            ctx->pc = 0x2960C0u;
            goto label_2960c0;
        }
    }
    ctx->pc = 0x2960B0u;
label_2960b0:
    // 0x2960b0: 0x966329de  lhu         $v1, 0x29DE($s3)
    ctx->pc = 0x2960b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10718)));
    // 0x2960b4: 0x3063f7ff  andi        $v1, $v1, 0xF7FF
    ctx->pc = 0x2960b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63487);
    // 0x2960b8: 0xa66329de  sh          $v1, 0x29DE($s3)
    ctx->pc = 0x2960b8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 10718), (uint16_t)GPR_U32(ctx, 3));
    // 0x2960bc: 0x0  nop
    ctx->pc = 0x2960bcu;
    // NOP
label_2960c0:
    // 0x2960c0: 0x3243ffff  andi        $v1, $s2, 0xFFFF
    ctx->pc = 0x2960c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x2960c4: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x2960c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x2960c8: 0x10600071  beqz        $v1, . + 4 + (0x71 << 2)
    ctx->pc = 0x2960C8u;
    {
        const bool branch_taken_0x2960c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2960CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2960C8u;
        // 0x2960cc: 0x3203ffff  andi        $v1, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2960c8) {
            ctx->pc = 0x296290u;
            goto label_296290;
        }
    }
    ctx->pc = 0x2960D0u;
    // 0x2960d0: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x2960d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x2960d4: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2960D4u;
    {
        const bool branch_taken_0x2960d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2960d4) {
            ctx->pc = 0x296140u;
            goto label_296140;
        }
    }
    ctx->pc = 0x2960DCu;
    // 0x2960dc: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x2960dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2960e0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2960e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2960e4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2960e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2960e8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2960e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2960ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2960ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2960f0: 0x0  nop
    ctx->pc = 0x2960f0u;
    // NOP
    // 0x2960f4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2960f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2960f8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2960f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2960fc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2960FCu;
    {
        const bool branch_taken_0x2960fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x296100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2960FCu;
        // 0x296100: 0x966329fc  lhu         $v1, 0x29FC($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10748)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2960fc) {
            ctx->pc = 0x296114u;
            goto label_296114;
        }
    }
    ctx->pc = 0x296104u;
    // 0x296104: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x296104u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x296108: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x296108u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x29610c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29610Cu;
    {
        const bool branch_taken_0x29610c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29610Cu;
        // 0x296110: 0x3065ffff  andi        $a1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29610c) {
            ctx->pc = 0x296130u;
            goto label_296130;
        }
    }
    ctx->pc = 0x296114u;
label_296114:
    // 0x296114: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x296114u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x296118: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x296118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x29611c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29611cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x296120: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x296120u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x296124: 0x0  nop
    ctx->pc = 0x296124u;
    // NOP
    // 0x296128: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x296128u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x29612c: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x29612cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_296130:
    // 0x296130: 0xc096974  jal         func_25A5D0
    ctx->pc = 0x296130u;
    SET_GPR_U32(ctx, 31, 0x296138u);
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x296130u, 0x296138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296138u;
label_296138:
    // 0x296138: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x296138u;
    {
        const bool branch_taken_0x296138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29613Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296138u;
        // 0x29613c: 0xa66229fc  sh          $v0, 0x29FC($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 10748), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296138) {
            ctx->pc = 0x296198u;
            goto label_296198;
        }
    }
    ctx->pc = 0x296140u;
label_296140:
    // 0x296140: 0x3c0340e0  lui         $v1, 0x40E0
    ctx->pc = 0x296140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16608 << 16));
    // 0x296144: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x296144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x296148: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x296148u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29614c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x29614cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x296150: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x296150u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x296154: 0x0  nop
    ctx->pc = 0x296154u;
    // NOP
    // 0x296158: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x296158u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x29615c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x29615cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x296160: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x296160u;
    {
        const bool branch_taken_0x296160 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x296160) {
            ctx->pc = 0x296178u;
            goto label_296178;
        }
    }
    ctx->pc = 0x296168u;
    // 0x296168: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x296168u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29616c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x29616cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x296170: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x296170u;
    {
        const bool branch_taken_0x296170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296170u;
        // 0x296174: 0xa66429fc  sh          $a0, 0x29FC($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 10748), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296170) {
            ctx->pc = 0x296194u;
            goto label_296194;
        }
    }
    ctx->pc = 0x296178u;
label_296178:
    // 0x296178: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x296178u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29617c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x29617cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x296180: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x296180u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x296184: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x296184u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x296188: 0x0  nop
    ctx->pc = 0x296188u;
    // NOP
    // 0x29618c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x29618cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x296190: 0xa66429fc  sh          $a0, 0x29FC($s3)
    ctx->pc = 0x296190u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 10748), (uint16_t)GPR_U32(ctx, 4));
label_296194:
    // 0x296194: 0x0  nop
    ctx->pc = 0x296194u;
    // NOP
label_296198:
    // 0x296198: 0x8e6329c0  lw          $v1, 0x29C0($s3)
    ctx->pc = 0x296198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
    // 0x29619c: 0x94630006  lhu         $v1, 0x6($v1)
    ctx->pc = 0x29619cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2961a0: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2961A0u;
    {
        const bool branch_taken_0x2961a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2961a0) {
            ctx->pc = 0x296218u;
            goto label_296218;
        }
    }
    ctx->pc = 0x2961A8u;
    // 0x2961a8: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x2961a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2961ac: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2961acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2961b0: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x2961b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x2961b4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2961b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2961b8: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x2961b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2961bc: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x2961bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2961c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2961c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2961c4: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x2961c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x2961c8: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x2961c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x2961cc: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x2961ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2961d0: 0x926508e8  lbu         $a1, 0x8E8($s3)
    ctx->pc = 0x2961d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2280)));
    // 0x2961d4: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x2961d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x2961d8: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x2961d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x2961dc: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x2961dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
    // 0x2961e0: 0x24420294  addiu       $v0, $v0, 0x294
    ctx->pc = 0x2961e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 660));
    // 0x2961e4: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x2961e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2961e8: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x2961e8u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x2961ec: 0xc0aa590  jal         func_2A9640
    ctx->pc = 0x2961ECu;
    SET_GPR_U32(ctx, 31, 0x2961F4u);
    ctx->pc = 0x2961F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2961ECu;
    // 0x2961f0: 0x24670030  addiu       $a3, $v1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9640u, 0x2961ECu, 0x2961F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2961F4u;
label_2961f4:
    // 0x2961f4: 0x8e6229c0  lw          $v0, 0x29C0($s3)
    ctx->pc = 0x2961f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
    // 0x2961f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2961f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2961fc: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x2961fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x296200: 0xc096974  jal         func_25A5D0
    ctx->pc = 0x296200u;
    SET_GPR_U32(ctx, 31, 0x296208u);
    ctx->pc = 0x296204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296200u;
    // 0x296204: 0x2444fdd0  addiu       $a0, $v0, -0x230 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x296200u, 0x296208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296208u;
label_296208:
    // 0x296208: 0x8e6329c0  lw          $v1, 0x29C0($s3)
    ctx->pc = 0x296208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
    // 0x29620c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x29620Cu;
    {
        const bool branch_taken_0x29620c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29620Cu;
        // 0x296210: 0xa4620006  sh          $v0, 0x6($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29620c) {
            ctx->pc = 0x296290u;
            goto label_296290;
        }
    }
    ctx->pc = 0x296214u;
    // 0x296214: 0x0  nop
    ctx->pc = 0x296214u;
    // NOP
label_296218:
    // 0x296218: 0x8f838ba8  lw          $v1, -0x7458($gp)
    ctx->pc = 0x296218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x29621c: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x29621cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x296220: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x296220u;
    {
        const bool branch_taken_0x296220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x296220) {
            ctx->pc = 0x296290u;
            goto label_296290;
        }
    }
    ctx->pc = 0x296228u;
    // 0x296228: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x296228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x29622c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x29622cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x296230: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x296230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x296234: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x296234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x296238: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x296238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x29623c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x29623cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x296240: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x296240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x296244: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x296244u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x296248: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x296248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x29624c: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x29624cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x296250: 0x926508e8  lbu         $a1, 0x8E8($s3)
    ctx->pc = 0x296250u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2280)));
    // 0x296254: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x296254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x296258: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x296258u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x29625c: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x29625cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
    // 0x296260: 0x24420294  addiu       $v0, $v0, 0x294
    ctx->pc = 0x296260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 660));
    // 0x296264: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x296264u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x296268: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x296268u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x29626c: 0xc0aa590  jal         func_2A9640
    ctx->pc = 0x29626Cu;
    SET_GPR_U32(ctx, 31, 0x296274u);
    ctx->pc = 0x296270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29626Cu;
    // 0x296270: 0x24670030  addiu       $a3, $v1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9640u, 0x29626Cu, 0x296274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296274u;
label_296274:
    // 0x296274: 0x8f918ba8  lw          $s1, -0x7458($gp)
    ctx->pc = 0x296274u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x296278: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x296278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29627c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x29627cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x296280: 0xc096974  jal         func_25A5D0
    ctx->pc = 0x296280u;
    SET_GPR_U32(ctx, 31, 0x296288u);
    ctx->pc = 0x296284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296280u;
    // 0x296284: 0x2444fe0c  addiu       $a0, $v0, -0x1F4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966796));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x296280u, 0x296288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296288u;
label_296288:
    // 0x296288: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x296288u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x29628c: 0x0  nop
    ctx->pc = 0x29628cu;
    // NOP
label_296290:
    // 0x296290: 0x3243ffff  andi        $v1, $s2, 0xFFFF
    ctx->pc = 0x296290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x296294: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x296294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x296298: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x296298u;
    {
        const bool branch_taken_0x296298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x296298) {
            ctx->pc = 0x296310u;
            goto label_296310;
        }
    }
    ctx->pc = 0x2962A0u;
    // 0x2962a0: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2962a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2962a4: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x2962a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x2962a8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2962a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2962ac: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2962acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x2962b0: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x2962b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2962b4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2962b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2962b8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2962b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2962bc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2962bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2962c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2962c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2962c4: 0x0  nop
    ctx->pc = 0x2962c4u;
    // NOP
    // 0x2962c8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2962c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2962cc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2962ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2962d0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2962D0u;
    {
        const bool branch_taken_0x2962d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2962d0) {
            ctx->pc = 0x2962E8u;
            goto label_2962e8;
        }
    }
    ctx->pc = 0x2962D8u;
    // 0x2962d8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2962d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2962dc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2962dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2962e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2962E0u;
    {
        const bool branch_taken_0x2962e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2962E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2962E0u;
        // 0x2962e4: 0xa6642a00  sh          $a0, 0x2A00($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 10752), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2962e0) {
            ctx->pc = 0x296304u;
            goto label_296304;
        }
    }
    ctx->pc = 0x2962E8u;
label_2962e8:
    // 0x2962e8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2962e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2962ec: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2962ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2962f0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2962f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2962f4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2962f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2962f8: 0x0  nop
    ctx->pc = 0x2962f8u;
    // NOP
    // 0x2962fc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2962fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x296300: 0xa6642a00  sh          $a0, 0x2A00($s3)
    ctx->pc = 0x296300u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 10752), (uint16_t)GPR_U32(ctx, 4));
label_296304:
    // 0x296304: 0x8e630148  lw          $v1, 0x148($s3)
    ctx->pc = 0x296304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 328)));
    // 0x296308: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x296308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x29630c: 0xae630148  sw          $v1, 0x148($s3)
    ctx->pc = 0x29630cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 328), GPR_U32(ctx, 3));
label_296310:
    // 0x296310: 0x3243ffff  andi        $v1, $s2, 0xFFFF
    ctx->pc = 0x296310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x296314: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x296314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x296318: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x296318u;
    {
        const bool branch_taken_0x296318 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x296318) {
            ctx->pc = 0x296388u;
            goto label_296388;
        }
    }
    ctx->pc = 0x296320u;
    // 0x296320: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x296320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x296324: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x296324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x296328: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x296328u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x29632c: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x29632cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x296330: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x296330u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x296334: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x296334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x296338: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x296338u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x29633c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x29633cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x296340: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x296340u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x296344: 0x0  nop
    ctx->pc = 0x296344u;
    // NOP
    // 0x296348: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x296348u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x29634c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x29634cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x296350: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x296350u;
    {
        const bool branch_taken_0x296350 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x296350) {
            ctx->pc = 0x296368u;
            goto label_296368;
        }
    }
    ctx->pc = 0x296358u;
    // 0x296358: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x296358u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29635c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x29635cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x296360: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x296360u;
    {
        const bool branch_taken_0x296360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296360u;
        // 0x296364: 0xa6642a02  sh          $a0, 0x2A02($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 10754), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296360) {
            ctx->pc = 0x296384u;
            goto label_296384;
        }
    }
    ctx->pc = 0x296368u;
label_296368:
    // 0x296368: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x296368u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29636c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x29636cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x296370: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x296370u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x296374: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x296374u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x296378: 0x0  nop
    ctx->pc = 0x296378u;
    // NOP
    // 0x29637c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x29637cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x296380: 0xa6642a02  sh          $a0, 0x2A02($s3)
    ctx->pc = 0x296380u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 10754), (uint16_t)GPR_U32(ctx, 4));
label_296384:
    // 0x296384: 0x0  nop
    ctx->pc = 0x296384u;
    // NOP
label_296388:
    // 0x296388: 0x8e6406ac  lw          $a0, 0x6AC($s3)
    ctx->pc = 0x296388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1708)));
    // 0x29638c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x29638cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x296390: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x296390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x296394: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x296394u;
    {
        const bool branch_taken_0x296394 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x296398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296394u;
        // 0x296398: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296394) {
            ctx->pc = 0x2963F8u;
            goto label_2963f8;
        }
    }
    ctx->pc = 0x29639Cu;
    // 0x29639c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x29639Cu;
    {
        const bool branch_taken_0x29639c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29639c) {
            ctx->pc = 0x2963D0u;
            goto label_2963d0;
        }
    }
    ctx->pc = 0x2963A4u;
    // 0x2963a4: 0x0  nop
    ctx->pc = 0x2963a4u;
    // NOP
label_2963a8:
    // 0x2963a8: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x2963a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2963ac: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x2963acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2963b0: 0x948329e4  lhu         $v1, 0x29E4($a0)
    ctx->pc = 0x2963b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10724)));
    // 0x2963b4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2963B4u;
    {
        const bool branch_taken_0x2963b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2963b4) {
            ctx->pc = 0x2963C8u;
            goto label_2963c8;
        }
    }
    ctx->pc = 0x2963BCu;
    // 0x2963bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2963bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2963c0: 0xa48329e4  sh          $v1, 0x29E4($a0)
    ctx->pc = 0x2963c0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10724), (uint16_t)GPR_U32(ctx, 3));
    // 0x2963c4: 0x0  nop
    ctx->pc = 0x2963c4u;
    // NOP
label_2963c8:
    // 0x2963c8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2963c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2963cc: 0x0  nop
    ctx->pc = 0x2963ccu;
    // NOP
label_2963d0:
    // 0x2963d0: 0x28a30010  slti        $v1, $a1, 0x10
    ctx->pc = 0x2963d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2963d4: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2963D4u;
    {
        const bool branch_taken_0x2963d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2963d4) {
            ctx->pc = 0x2963A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2963a8;
        }
    }
    ctx->pc = 0x2963DCu;
    // 0x2963dc: 0x92632aa1  lbu         $v1, 0x2AA1($s3)
    ctx->pc = 0x2963dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10913)));
    // 0x2963e0: 0x286100ff  slti        $at, $v1, 0xFF
    ctx->pc = 0x2963e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x2963e4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2963E4u;
    {
        const bool branch_taken_0x2963e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2963e4) {
            ctx->pc = 0x2963F8u;
            goto label_2963f8;
        }
    }
    ctx->pc = 0x2963ECu;
    // 0x2963ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2963ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2963f0: 0xa2632aa1  sb          $v1, 0x2AA1($s3)
    ctx->pc = 0x2963f0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 10913), (uint8_t)GPR_U32(ctx, 3));
    // 0x2963f4: 0x0  nop
    ctx->pc = 0x2963f4u;
    // NOP
label_2963f8:
    // 0x2963f8: 0x966429de  lhu         $a0, 0x29DE($s3)
    ctx->pc = 0x2963f8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10718)));
    // 0x2963fc: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x2963fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x296400: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x296400u;
    {
        const bool branch_taken_0x296400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x296400) {
            ctx->pc = 0x296500u;
            goto label_296500;
        }
    }
    ctx->pc = 0x296408u;
    // 0x296408: 0x966329e6  lhu         $v1, 0x29E6($s3)
    ctx->pc = 0x296408u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10726)));
    // 0x29640c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29640Cu;
    {
        const bool branch_taken_0x29640c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x296410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29640Cu;
        // 0x296410: 0x3083fffd  andi        $v1, $a0, 0xFFFD (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65533);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29640c) {
            ctx->pc = 0x296420u;
            goto label_296420;
        }
    }
    ctx->pc = 0x296414u;
    // 0x296414: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x296414u;
    {
        const bool branch_taken_0x296414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296414u;
        // 0x296418: 0xa66329de  sh          $v1, 0x29DE($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 10718), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296414) {
            ctx->pc = 0x296500u;
            goto label_296500;
        }
    }
    ctx->pc = 0x29641Cu;
    // 0x29641c: 0x0  nop
    ctx->pc = 0x29641cu;
    // NOP
label_296420:
    // 0x296420: 0x92642aa0  lbu         $a0, 0x2AA0($s3)
    ctx->pc = 0x296420u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10912)));
    // 0x296424: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x296424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296428: 0x14830035  bne         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x296428u;
    {
        const bool branch_taken_0x296428 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x296428) {
            ctx->pc = 0x296500u;
            goto label_296500;
        }
    }
    ctx->pc = 0x296430u;
    // 0x296430: 0x8e652a08  lw          $a1, 0x2A08($s3)
    ctx->pc = 0x296430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10760)));
    // 0x296434: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x296434u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x296438: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x296438u;
    SET_GPR_U32(ctx, 31, 0x296440u);
    ctx->pc = 0x29643Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296438u;
    // 0x29643c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x296438u, 0x296440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296440u;
label_296440:
    // 0x296440: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x296440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296444: 0x10a0002a  beqz        $a1, . + 4 + (0x2A << 2)
    ctx->pc = 0x296444u;
    {
        const bool branch_taken_0x296444 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x296444) {
            ctx->pc = 0x2964F0u;
            goto label_2964f0;
        }
    }
    ctx->pc = 0x29644Cu;
    // 0x29644c: 0x8e6206ac  lw          $v0, 0x6AC($s3)
    ctx->pc = 0x29644cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1708)));
    // 0x296450: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x296450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x296454: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x296454u;
    {
        const bool branch_taken_0x296454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x296454) {
            ctx->pc = 0x2964A8u;
            goto label_2964a8;
        }
    }
    ctx->pc = 0x29645Cu;
    // 0x29645c: 0x926a0002  lbu         $t2, 0x2($s3)
    ctx->pc = 0x29645cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x296460: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x296460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x296464: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x296464u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x296468: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x296468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x29646c: 0x2463f38c  addiu       $v1, $v1, -0xC74
    ctx->pc = 0x29646cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964108));
    // 0x296470: 0x266401c0  addiu       $a0, $s3, 0x1C0
    ctx->pc = 0x296470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 448));
    // 0x296474: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x296474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296478: 0x27878964  addiu       $a3, $gp, -0x769C
    ctx->pc = 0x296478u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936932));
    // 0x29647c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x29647cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296480: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x296480u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296484: 0xa1040  sll         $v0, $t2, 1
    ctx->pc = 0x296484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x296488: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x296488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x29648c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x29648cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x296490: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x296490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x296494: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x296494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x296498: 0xc09fa38  jal         func_27E8E0
    ctx->pc = 0x296498u;
    SET_GPR_U32(ctx, 31, 0x2964A0u);
    ctx->pc = 0x29649Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296498u;
    // 0x29649c: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E8E0u, 0x296498u, 0x2964A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2964A0u;
label_2964a0:
    // 0x2964a0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2964A0u;
    {
        const bool branch_taken_0x2964a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2964a0) {
            ctx->pc = 0x2964F0u;
            goto label_2964f0;
        }
    }
    ctx->pc = 0x2964A8u;
label_2964a8:
    // 0x2964a8: 0x926a0002  lbu         $t2, 0x2($s3)
    ctx->pc = 0x2964a8u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2964ac: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2964acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2964b0: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2964b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2964b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2964b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2964b8: 0x2463f38c  addiu       $v1, $v1, -0xC74
    ctx->pc = 0x2964b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964108));
    // 0x2964bc: 0x266401c0  addiu       $a0, $s3, 0x1C0
    ctx->pc = 0x2964bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 448));
    // 0x2964c0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2964c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2964c4: 0x27878964  addiu       $a3, $gp, -0x769C
    ctx->pc = 0x2964c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936932));
    // 0x2964c8: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x2964c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2964cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2964ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2964d0: 0xa1040  sll         $v0, $t2, 1
    ctx->pc = 0x2964d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x2964d4: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2964d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2964d8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2964d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2964dc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2964dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2964e0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2964e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2964e4: 0xc09fa38  jal         func_27E8E0
    ctx->pc = 0x2964E4u;
    SET_GPR_U32(ctx, 31, 0x2964ECu);
    ctx->pc = 0x2964E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2964E4u;
    // 0x2964e8: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E8E0u, 0x2964E4u, 0x2964ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2964ECu;
label_2964ec:
    // 0x2964ec: 0x0  nop
    ctx->pc = 0x2964ecu;
    // NOP
label_2964f0:
    // 0x2964f0: 0x8e630148  lw          $v1, 0x148($s3)
    ctx->pc = 0x2964f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 328)));
    // 0x2964f4: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x2964f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x2964f8: 0xae630148  sw          $v1, 0x148($s3)
    ctx->pc = 0x2964f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 328), GPR_U32(ctx, 3));
    // 0x2964fc: 0x0  nop
    ctx->pc = 0x2964fcu;
    // NOP
label_296500:
    // 0x296500: 0x966329de  lhu         $v1, 0x29DE($s3)
    ctx->pc = 0x296500u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10718)));
    // 0x296504: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x296504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x296508: 0x1060008b  beqz        $v1, . + 4 + (0x8B << 2)
    ctx->pc = 0x296508u;
    {
        const bool branch_taken_0x296508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x296508) {
            ctx->pc = 0x296738u;
            goto label_296738;
        }
    }
    ctx->pc = 0x296510u;
    // 0x296510: 0x8e6306c8  lw          $v1, 0x6C8($s3)
    ctx->pc = 0x296510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1736)));
    // 0x296514: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x296514u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x296518: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x296518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x29651c: 0xae6306c8  sw          $v1, 0x6C8($s3)
    ctx->pc = 0x29651cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1736), GPR_U32(ctx, 3));
    // 0x296520: 0x8e6306cc  lw          $v1, 0x6CC($s3)
    ctx->pc = 0x296520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1740)));
    // 0x296524: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x296524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x296528: 0xae6306cc  sw          $v1, 0x6CC($s3)
    ctx->pc = 0x296528u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1740), GPR_U32(ctx, 3));
    // 0x29652c: 0x966329e8  lhu         $v1, 0x29E8($s3)
    ctx->pc = 0x29652cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10728)));
    // 0x296530: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x296530u;
    {
        const bool branch_taken_0x296530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x296530) {
            ctx->pc = 0x296540u;
            goto label_296540;
        }
    }
    ctx->pc = 0x296538u;
    // 0x296538: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x296538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x29653c: 0xa66329e8  sh          $v1, 0x29E8($s3)
    ctx->pc = 0x29653cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 10728), (uint16_t)GPR_U32(ctx, 3));
label_296540:
    // 0x296540: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x296540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x296544: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x296544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x296548: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x296548u;
    {
        const bool branch_taken_0x296548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29654Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296548u;
        // 0x29654c: 0x266401c0  addiu       $a0, $s3, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296548) {
            ctx->pc = 0x2965C0u;
            goto label_2965c0;
        }
    }
    ctx->pc = 0x296550u;
    // 0x296550: 0xc09e8c0  jal         func_27A300
    ctx->pc = 0x296550u;
    SET_GPR_U32(ctx, 31, 0x296558u);
    ctx->pc = 0x27A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A300u, 0x296550u, 0x296558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296558u;
label_296558:
    // 0x296558: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x296558u;
    {
        const bool branch_taken_0x296558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x296558) {
            ctx->pc = 0x296570u;
            goto label_296570;
        }
    }
    ctx->pc = 0x296560u;
    // 0x296560: 0x966329e8  lhu         $v1, 0x29E8($s3)
    ctx->pc = 0x296560u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10728)));
    // 0x296564: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x296564u;
    {
        const bool branch_taken_0x296564 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x296564) {
            ctx->pc = 0x2965C0u;
            goto label_2965c0;
        }
    }
    ctx->pc = 0x29656Cu;
    // 0x29656c: 0x0  nop
    ctx->pc = 0x29656cu;
    // NOP
label_296570:
    // 0x296570: 0x8e6329c0  lw          $v1, 0x29C0($s3)
    ctx->pc = 0x296570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
    // 0x296574: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x296574u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x296578: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x296578u;
    {
        const bool branch_taken_0x296578 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x296578) {
            ctx->pc = 0x2965A0u;
            goto label_2965a0;
        }
    }
    ctx->pc = 0x296580u;
    // 0x296580: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x296580u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x296584: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x296584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x296588: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x296588u;
    {
        const bool branch_taken_0x296588 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x296588) {
            ctx->pc = 0x2965A0u;
            goto label_2965a0;
        }
    }
    ctx->pc = 0x296590u;
    // 0x296590: 0x92632b08  lbu         $v1, 0x2B08($s3)
    ctx->pc = 0x296590u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 11016)));
    // 0x296594: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x296594u;
    {
        const bool branch_taken_0x296594 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x296598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296594u;
        // 0x296598: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296594) {
            ctx->pc = 0x2965A0u;
            goto label_2965a0;
        }
    }
    ctx->pc = 0x29659Cu;
    // 0x29659c: 0xa6630786  sh          $v1, 0x786($s3)
    ctx->pc = 0x29659cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1926), (uint16_t)GPR_U32(ctx, 3));
label_2965a0:
    // 0x2965a0: 0x3243ffff  andi        $v1, $s2, 0xFFFF
    ctx->pc = 0x2965a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x2965a4: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x2965a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2965a8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2965A8u;
    {
        const bool branch_taken_0x2965a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2965a8) {
            ctx->pc = 0x2965C0u;
            goto label_2965c0;
        }
    }
    ctx->pc = 0x2965B0u;
    // 0x2965b0: 0x966329de  lhu         $v1, 0x29DE($s3)
    ctx->pc = 0x2965b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10718)));
    // 0x2965b4: 0x3063fffb  andi        $v1, $v1, 0xFFFB
    ctx->pc = 0x2965b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65531);
    // 0x2965b8: 0xa66329de  sh          $v1, 0x29DE($s3)
    ctx->pc = 0x2965b8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 10718), (uint16_t)GPR_U32(ctx, 3));
    // 0x2965bc: 0x0  nop
    ctx->pc = 0x2965bcu;
    // NOP
label_2965c0:
    // 0x2965c0: 0x8e650148  lw          $a1, 0x148($s3)
    ctx->pc = 0x2965c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 328)));
    // 0x2965c4: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x2965c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x2965c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2965c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2965cc: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x2965ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2965d0: 0xae640148  sw          $a0, 0x148($s3)
    ctx->pc = 0x2965d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 328), GPR_U32(ctx, 4));
    // 0x2965d4: 0x92642aa0  lbu         $a0, 0x2AA0($s3)
    ctx->pc = 0x2965d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10912)));
    // 0x2965d8: 0x14830035  bne         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x2965D8u;
    {
        const bool branch_taken_0x2965d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2965d8) {
            ctx->pc = 0x2966B0u;
            goto label_2966b0;
        }
    }
    ctx->pc = 0x2965E0u;
    // 0x2965e0: 0x8e652a0c  lw          $a1, 0x2A0C($s3)
    ctx->pc = 0x2965e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10764)));
    // 0x2965e4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2965e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2965e8: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2965E8u;
    SET_GPR_U32(ctx, 31, 0x2965F0u);
    ctx->pc = 0x2965ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2965E8u;
    // 0x2965ec: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2965E8u, 0x2965F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2965F0u;
label_2965f0:
    // 0x2965f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2965f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2965f4: 0x10a0002a  beqz        $a1, . + 4 + (0x2A << 2)
    ctx->pc = 0x2965F4u;
    {
        const bool branch_taken_0x2965f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2965f4) {
            ctx->pc = 0x2966A0u;
            goto label_2966a0;
        }
    }
    ctx->pc = 0x2965FCu;
    // 0x2965fc: 0x8e6206ac  lw          $v0, 0x6AC($s3)
    ctx->pc = 0x2965fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1708)));
    // 0x296600: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x296600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x296604: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x296604u;
    {
        const bool branch_taken_0x296604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x296604) {
            ctx->pc = 0x296658u;
            goto label_296658;
        }
    }
    ctx->pc = 0x29660Cu;
    // 0x29660c: 0x926a0002  lbu         $t2, 0x2($s3)
    ctx->pc = 0x29660cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x296610: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x296610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x296614: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x296614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x296618: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x296618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x29661c: 0x2463f38c  addiu       $v1, $v1, -0xC74
    ctx->pc = 0x29661cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964108));
    // 0x296620: 0x266401c0  addiu       $a0, $s3, 0x1C0
    ctx->pc = 0x296620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 448));
    // 0x296624: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x296624u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296628: 0x27878964  addiu       $a3, $gp, -0x769C
    ctx->pc = 0x296628u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936932));
    // 0x29662c: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x29662cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x296630: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x296630u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296634: 0xa1040  sll         $v0, $t2, 1
    ctx->pc = 0x296634u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x296638: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x296638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x29663c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x29663cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x296640: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x296640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x296644: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x296644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x296648: 0xc09fa38  jal         func_27E8E0
    ctx->pc = 0x296648u;
    SET_GPR_U32(ctx, 31, 0x296650u);
    ctx->pc = 0x29664Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296648u;
    // 0x29664c: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E8E0u, 0x296648u, 0x296650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296650u;
label_296650:
    // 0x296650: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x296650u;
    {
        const bool branch_taken_0x296650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296650) {
            ctx->pc = 0x2966A0u;
            goto label_2966a0;
        }
    }
    ctx->pc = 0x296658u;
label_296658:
    // 0x296658: 0x926a0002  lbu         $t2, 0x2($s3)
    ctx->pc = 0x296658u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x29665c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x29665cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x296660: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x296660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x296664: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x296664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x296668: 0x2463f38c  addiu       $v1, $v1, -0xC74
    ctx->pc = 0x296668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964108));
    // 0x29666c: 0x266401c0  addiu       $a0, $s3, 0x1C0
    ctx->pc = 0x29666cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 448));
    // 0x296670: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x296670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296674: 0x27878964  addiu       $a3, $gp, -0x769C
    ctx->pc = 0x296674u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936932));
    // 0x296678: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x296678u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x29667c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x29667cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296680: 0xa1040  sll         $v0, $t2, 1
    ctx->pc = 0x296680u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x296684: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x296684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x296688: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x296688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x29668c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x29668cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x296690: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x296690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x296694: 0xc09fa38  jal         func_27E8E0
    ctx->pc = 0x296694u;
    SET_GPR_U32(ctx, 31, 0x29669Cu);
    ctx->pc = 0x296698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296694u;
    // 0x296698: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E8E0u, 0x296694u, 0x29669Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29669Cu;
label_29669c:
    // 0x29669c: 0x0  nop
    ctx->pc = 0x29669cu;
    // NOP
label_2966a0:
    // 0x2966a0: 0x8e630148  lw          $v1, 0x148($s3)
    ctx->pc = 0x2966a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 328)));
    // 0x2966a4: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x2966a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x2966a8: 0xae630148  sw          $v1, 0x148($s3)
    ctx->pc = 0x2966a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 328), GPR_U32(ctx, 3));
    // 0x2966ac: 0x0  nop
    ctx->pc = 0x2966acu;
    // NOP
label_2966b0:
    // 0x2966b0: 0x8e6306ac  lw          $v1, 0x6AC($s3)
    ctx->pc = 0x2966b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1708)));
    // 0x2966b4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2966b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2966b8: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2966B8u;
    {
        const bool branch_taken_0x2966b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2966b8) {
            ctx->pc = 0x296738u;
            goto label_296738;
        }
    }
    ctx->pc = 0x2966C0u;
    // 0x2966c0: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2966c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2966c4: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2966c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2966c8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2966c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2966cc: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2966ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x2966d0: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x2966d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2966d4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2966d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2966d8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2966d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2966dc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2966dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2966e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2966e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2966e4: 0x0  nop
    ctx->pc = 0x2966e4u;
    // NOP
    // 0x2966e8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2966e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2966ec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2966ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2966f0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2966F0u;
    {
        const bool branch_taken_0x2966f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2966f0) {
            ctx->pc = 0x296708u;
            goto label_296708;
        }
    }
    ctx->pc = 0x2966F8u;
    // 0x2966f8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2966f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2966fc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2966fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x296700: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x296700u;
    {
        const bool branch_taken_0x296700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296700u;
        // 0x296704: 0x92632aa1  lbu         $v1, 0x2AA1($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10913)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296700) {
            ctx->pc = 0x296724u;
            goto label_296724;
        }
    }
    ctx->pc = 0x296708u;
label_296708:
    // 0x296708: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x296708u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29670c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x29670cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x296710: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x296710u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x296714: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x296714u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x296718: 0x0  nop
    ctx->pc = 0x296718u;
    // NOP
    // 0x29671c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x29671cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x296720: 0x92632aa1  lbu         $v1, 0x2AA1($s3)
    ctx->pc = 0x296720u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10913)));
label_296724:
    // 0x296724: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x296724u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x296728: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x296728u;
    {
        const bool branch_taken_0x296728 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x296728) {
            ctx->pc = 0x296738u;
            goto label_296738;
        }
    }
    ctx->pc = 0x296730u;
    // 0x296730: 0xa2602aa0  sb          $zero, 0x2AA0($s3)
    ctx->pc = 0x296730u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 10912), (uint8_t)GPR_U32(ctx, 0));
    // 0x296734: 0x0  nop
    ctx->pc = 0x296734u;
    // NOP
label_296738:
    // 0x296738: 0x966429de  lhu         $a0, 0x29DE($s3)
    ctx->pc = 0x296738u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10718)));
    // 0x29673c: 0x30830008  andi        $v1, $a0, 0x8
    ctx->pc = 0x29673cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x296740: 0x10600061  beqz        $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x296740u;
    {
        const bool branch_taken_0x296740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x296740) {
            ctx->pc = 0x2968C8u;
            goto label_2968c8;
        }
    }
    ctx->pc = 0x296748u;
    // 0x296748: 0x966329ea  lhu         $v1, 0x29EA($s3)
    ctx->pc = 0x296748u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10730)));
    // 0x29674c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29674Cu;
    {
        const bool branch_taken_0x29674c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x296750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29674Cu;
        // 0x296750: 0x3083fff7  andi        $v1, $a0, 0xFFF7 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65527);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29674c) {
            ctx->pc = 0x296760u;
            goto label_296760;
        }
    }
    ctx->pc = 0x296754u;
    // 0x296754: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x296754u;
    {
        const bool branch_taken_0x296754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296754u;
        // 0x296758: 0xa66329de  sh          $v1, 0x29DE($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 10718), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296754) {
            ctx->pc = 0x2968C8u;
            goto label_2968c8;
        }
    }
    ctx->pc = 0x29675Cu;
    // 0x29675c: 0x0  nop
    ctx->pc = 0x29675cu;
    // NOP
label_296760:
    // 0x296760: 0x92642aa0  lbu         $a0, 0x2AA0($s3)
    ctx->pc = 0x296760u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10912)));
    // 0x296764: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x296764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x296768: 0x14830035  bne         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x296768u;
    {
        const bool branch_taken_0x296768 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x296768) {
            ctx->pc = 0x296840u;
            goto label_296840;
        }
    }
    ctx->pc = 0x296770u;
    // 0x296770: 0x8e652a10  lw          $a1, 0x2A10($s3)
    ctx->pc = 0x296770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10768)));
    // 0x296774: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x296774u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x296778: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x296778u;
    SET_GPR_U32(ctx, 31, 0x296780u);
    ctx->pc = 0x29677Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296778u;
    // 0x29677c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x296778u, 0x296780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296780u;
label_296780:
    // 0x296780: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x296780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296784: 0x10a0002a  beqz        $a1, . + 4 + (0x2A << 2)
    ctx->pc = 0x296784u;
    {
        const bool branch_taken_0x296784 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x296784) {
            ctx->pc = 0x296830u;
            goto label_296830;
        }
    }
    ctx->pc = 0x29678Cu;
    // 0x29678c: 0x8e6206ac  lw          $v0, 0x6AC($s3)
    ctx->pc = 0x29678cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1708)));
    // 0x296790: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x296790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x296794: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x296794u;
    {
        const bool branch_taken_0x296794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x296794) {
            ctx->pc = 0x2967E8u;
            goto label_2967e8;
        }
    }
    ctx->pc = 0x29679Cu;
    // 0x29679c: 0x926a0002  lbu         $t2, 0x2($s3)
    ctx->pc = 0x29679cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2967a0: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2967a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2967a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2967a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2967a8: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2967a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2967ac: 0x2463f38c  addiu       $v1, $v1, -0xC74
    ctx->pc = 0x2967acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964108));
    // 0x2967b0: 0x266401c0  addiu       $a0, $s3, 0x1C0
    ctx->pc = 0x2967b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 448));
    // 0x2967b4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2967b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2967b8: 0x27878964  addiu       $a3, $gp, -0x769C
    ctx->pc = 0x2967b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936932));
    // 0x2967bc: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2967bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2967c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2967c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2967c4: 0xa1040  sll         $v0, $t2, 1
    ctx->pc = 0x2967c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x2967c8: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2967c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2967cc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2967ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2967d0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2967d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2967d4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2967d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2967d8: 0xc09fa38  jal         func_27E8E0
    ctx->pc = 0x2967D8u;
    SET_GPR_U32(ctx, 31, 0x2967E0u);
    ctx->pc = 0x2967DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2967D8u;
    // 0x2967dc: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E8E0u, 0x2967D8u, 0x2967E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2967E0u;
label_2967e0:
    // 0x2967e0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2967E0u;
    {
        const bool branch_taken_0x2967e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2967e0) {
            ctx->pc = 0x296830u;
            goto label_296830;
        }
    }
    ctx->pc = 0x2967E8u;
label_2967e8:
    // 0x2967e8: 0x926a0002  lbu         $t2, 0x2($s3)
    ctx->pc = 0x2967e8u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2967ec: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2967ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2967f0: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2967f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2967f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2967f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2967f8: 0x2463f38c  addiu       $v1, $v1, -0xC74
    ctx->pc = 0x2967f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964108));
    // 0x2967fc: 0x266401c0  addiu       $a0, $s3, 0x1C0
    ctx->pc = 0x2967fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 448));
    // 0x296800: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x296800u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296804: 0x27878964  addiu       $a3, $gp, -0x769C
    ctx->pc = 0x296804u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936932));
    // 0x296808: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x296808u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x29680c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x29680cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296810: 0xa1040  sll         $v0, $t2, 1
    ctx->pc = 0x296810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x296814: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x296814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x296818: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x296818u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x29681c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x29681cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x296820: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x296820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x296824: 0xc09fa38  jal         func_27E8E0
    ctx->pc = 0x296824u;
    SET_GPR_U32(ctx, 31, 0x29682Cu);
    ctx->pc = 0x296828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296824u;
    // 0x296828: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E8E0u, 0x296824u, 0x29682Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29682Cu;
label_29682c:
    // 0x29682c: 0x0  nop
    ctx->pc = 0x29682cu;
    // NOP
label_296830:
    // 0x296830: 0x8e630148  lw          $v1, 0x148($s3)
    ctx->pc = 0x296830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 328)));
    // 0x296834: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x296834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x296838: 0xae630148  sw          $v1, 0x148($s3)
    ctx->pc = 0x296838u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 328), GPR_U32(ctx, 3));
    // 0x29683c: 0x0  nop
    ctx->pc = 0x29683cu;
    // NOP
label_296840:
    // 0x296840: 0x8e6306ac  lw          $v1, 0x6AC($s3)
    ctx->pc = 0x296840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1708)));
    // 0x296844: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x296844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x296848: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x296848u;
    {
        const bool branch_taken_0x296848 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x296848) {
            ctx->pc = 0x2968C8u;
            goto label_2968c8;
        }
    }
    ctx->pc = 0x296850u;
    // 0x296850: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x296850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x296854: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x296854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x296858: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x296858u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x29685c: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x29685cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x296860: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x296860u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x296864: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x296864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x296868: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x296868u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x29686c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x29686cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x296870: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x296870u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x296874: 0x0  nop
    ctx->pc = 0x296874u;
    // NOP
    // 0x296878: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x296878u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x29687c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x29687cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x296880: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x296880u;
    {
        const bool branch_taken_0x296880 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x296880) {
            ctx->pc = 0x296898u;
            goto label_296898;
        }
    }
    ctx->pc = 0x296888u;
    // 0x296888: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x296888u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29688c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x29688cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x296890: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x296890u;
    {
        const bool branch_taken_0x296890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296890u;
        // 0x296894: 0x92632aa1  lbu         $v1, 0x2AA1($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10913)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296890) {
            ctx->pc = 0x2968B4u;
            goto label_2968b4;
        }
    }
    ctx->pc = 0x296898u;
label_296898:
    // 0x296898: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x296898u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29689c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x29689cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2968a0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2968a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2968a4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2968a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2968a8: 0x0  nop
    ctx->pc = 0x2968a8u;
    // NOP
    // 0x2968ac: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2968acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2968b0: 0x92632aa1  lbu         $v1, 0x2AA1($s3)
    ctx->pc = 0x2968b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10913)));
label_2968b4:
    // 0x2968b4: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x2968b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2968b8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2968B8u;
    {
        const bool branch_taken_0x2968b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2968b8) {
            ctx->pc = 0x2968C8u;
            goto label_2968c8;
        }
    }
    ctx->pc = 0x2968C0u;
    // 0x2968c0: 0xa2602aa0  sb          $zero, 0x2AA0($s3)
    ctx->pc = 0x2968c0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 10912), (uint8_t)GPR_U32(ctx, 0));
    // 0x2968c4: 0x0  nop
    ctx->pc = 0x2968c4u;
    // NOP
label_2968c8:
    // 0x2968c8: 0x966429de  lhu         $a0, 0x29DE($s3)
    ctx->pc = 0x2968c8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10718)));
    // 0x2968cc: 0x30830010  andi        $v1, $a0, 0x10
    ctx->pc = 0x2968ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x2968d0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2968D0u;
    {
        const bool branch_taken_0x2968d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2968d0) {
            ctx->pc = 0x2968F0u;
            goto label_2968f0;
        }
    }
    ctx->pc = 0x2968D8u;
    // 0x2968d8: 0x8e6306ac  lw          $v1, 0x6AC($s3)
    ctx->pc = 0x2968d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1708)));
    // 0x2968dc: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x2968dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x2968e0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2968E0u;
    {
        const bool branch_taken_0x2968e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2968E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2968E0u;
        // 0x2968e4: 0x3083ffef  andi        $v1, $a0, 0xFFEF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65519);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2968e0) {
            ctx->pc = 0x2968F0u;
            goto label_2968f0;
        }
    }
    ctx->pc = 0x2968E8u;
    // 0x2968e8: 0xa66329de  sh          $v1, 0x29DE($s3)
    ctx->pc = 0x2968e8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 10718), (uint16_t)GPR_U32(ctx, 3));
    // 0x2968ec: 0x0  nop
    ctx->pc = 0x2968ecu;
    // NOP
label_2968f0:
    // 0x2968f0: 0x966429de  lhu         $a0, 0x29DE($s3)
    ctx->pc = 0x2968f0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10718)));
    // 0x2968f4: 0x30830040  andi        $v1, $a0, 0x40
    ctx->pc = 0x2968f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
    // 0x2968f8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2968F8u;
    {
        const bool branch_taken_0x2968f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2968FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2968F8u;
        // 0x2968fc: 0x3083ffbf  andi        $v1, $a0, 0xFFBF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65471);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2968f8) {
            ctx->pc = 0x296908u;
            goto label_296908;
        }
    }
    ctx->pc = 0x296900u;
    // 0x296900: 0xa66329de  sh          $v1, 0x29DE($s3)
    ctx->pc = 0x296900u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 10718), (uint16_t)GPR_U32(ctx, 3));
    // 0x296904: 0x0  nop
    ctx->pc = 0x296904u;
    // NOP
label_296908:
    // 0x296908: 0x966429de  lhu         $a0, 0x29DE($s3)
    ctx->pc = 0x296908u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10718)));
    // 0x29690c: 0x30830080  andi        $v1, $a0, 0x80
    ctx->pc = 0x29690cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x296910: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x296910u;
    {
        const bool branch_taken_0x296910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x296910) {
            ctx->pc = 0x296958u;
            goto label_296958;
        }
    }
    ctx->pc = 0x296918u;
    // 0x296918: 0x966329f2  lhu         $v1, 0x29F2($s3)
    ctx->pc = 0x296918u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10738)));
    // 0x29691c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29691Cu;
    {
        const bool branch_taken_0x29691c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x296920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29691Cu;
        // 0x296920: 0x3083ff7f  andi        $v1, $a0, 0xFF7F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65407);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29691c) {
            ctx->pc = 0x296930u;
            goto label_296930;
        }
    }
    ctx->pc = 0x296924u;
    // 0x296924: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x296924u;
    {
        const bool branch_taken_0x296924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296924u;
        // 0x296928: 0xa66329de  sh          $v1, 0x29DE($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 10718), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296924) {
            ctx->pc = 0x296958u;
            goto label_296958;
        }
    }
    ctx->pc = 0x29692Cu;
    // 0x29692c: 0x0  nop
    ctx->pc = 0x29692cu;
    // NOP
label_296930:
    // 0x296930: 0x8e6329c0  lw          $v1, 0x29C0($s3)
    ctx->pc = 0x296930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
    // 0x296934: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x296934u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x296938: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x296938u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x29693c: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x29693Cu;
    {
        const bool branch_taken_0x29693c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x296940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29693Cu;
        // 0x296940: 0x2464ffff  addiu       $a0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29693c) {
            ctx->pc = 0x296958u;
            goto label_296958;
        }
    }
    ctx->pc = 0x296944u;
    // 0x296944: 0xc096974  jal         func_25A5D0
    ctx->pc = 0x296944u;
    SET_GPR_U32(ctx, 31, 0x29694Cu);
    ctx->pc = 0x296948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296944u;
    // 0x296948: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x296944u, 0x29694Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29694Cu;
label_29694c:
    // 0x29694c: 0x8e6329c0  lw          $v1, 0x29C0($s3)
    ctx->pc = 0x29694cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
    // 0x296950: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x296950u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x296954: 0x0  nop
    ctx->pc = 0x296954u;
    // NOP
label_296958:
    // 0x296958: 0x966429de  lhu         $a0, 0x29DE($s3)
    ctx->pc = 0x296958u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10718)));
    // 0x29695c: 0x30830100  andi        $v1, $a0, 0x100
    ctx->pc = 0x29695cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x296960: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x296960u;
    {
        const bool branch_taken_0x296960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x296960) {
            ctx->pc = 0x296A20u;
            goto label_296a20;
        }
    }
    ctx->pc = 0x296968u;
    // 0x296968: 0x8e6306ac  lw          $v1, 0x6AC($s3)
    ctx->pc = 0x296968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1708)));
    // 0x29696c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x29696cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x296970: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x296970u;
    {
        const bool branch_taken_0x296970 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x296974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296970u;
        // 0x296974: 0x3083feff  andi        $v1, $a0, 0xFEFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65279);
        ctx->in_delay_slot = false;
        if (branch_taken_0x296970) {
            ctx->pc = 0x296980u;
            goto label_296980;
        }
    }
    ctx->pc = 0x296978u;
    // 0x296978: 0xa66329de  sh          $v1, 0x29DE($s3)
    ctx->pc = 0x296978u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 10718), (uint16_t)GPR_U32(ctx, 3));
    // 0x29697c: 0x0  nop
    ctx->pc = 0x29697cu;
    // NOP
label_296980:
    // 0x296980: 0xde630500  ld          $v1, 0x500($s3)
    ctx->pc = 0x296980u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 1280)));
    // 0x296984: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x296984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x296988: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x296988u;
    {
        const bool branch_taken_0x296988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x296988) {
            ctx->pc = 0x2969A8u;
            goto label_2969a8;
        }
    }
    ctx->pc = 0x296990u;
    // 0x296990: 0x966229f4  lhu         $v0, 0x29F4($s3)
    ctx->pc = 0x296990u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10740)));
    // 0x296994: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x296994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296998: 0xc096974  jal         func_25A5D0
    ctx->pc = 0x296998u;
    SET_GPR_U32(ctx, 31, 0x2969A0u);
    ctx->pc = 0x29699Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296998u;
    // 0x29699c: 0x2445fffe  addiu       $a1, $v0, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x296998u, 0x2969A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2969A0u;
label_2969a0:
    // 0x2969a0: 0xa66229f4  sh          $v0, 0x29F4($s3)
    ctx->pc = 0x2969a0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 10740), (uint16_t)GPR_U32(ctx, 2));
    // 0x2969a4: 0x0  nop
    ctx->pc = 0x2969a4u;
    // NOP
label_2969a8:
    // 0x2969a8: 0x966329f4  lhu         $v1, 0x29F4($s3)
    ctx->pc = 0x2969a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10740)));
    // 0x2969ac: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2969ACu;
    {
        const bool branch_taken_0x2969ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2969ac) {
            ctx->pc = 0x2969C0u;
            goto label_2969c0;
        }
    }
    ctx->pc = 0x2969B4u;
    // 0x2969b4: 0x966329de  lhu         $v1, 0x29DE($s3)
    ctx->pc = 0x2969b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10718)));
    // 0x2969b8: 0x3063feff  andi        $v1, $v1, 0xFEFF
    ctx->pc = 0x2969b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65279);
    // 0x2969bc: 0xa66329de  sh          $v1, 0x29DE($s3)
    ctx->pc = 0x2969bcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 10718), (uint16_t)GPR_U32(ctx, 3));
label_2969c0:
    // 0x2969c0: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2969c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2969c4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2969c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2969c8: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x2969c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x2969cc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2969ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2969d0: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x2969d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x2969d4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2969d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2969d8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2969d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2969dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2969dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2969e0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2969e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2969e4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2969e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2969e8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2969e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2969ec: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2969ECu;
    {
        const bool branch_taken_0x2969ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2969ec) {
            ctx->pc = 0x296A04u;
            goto label_296a04;
        }
    }
    ctx->pc = 0x2969F4u;
    // 0x2969f4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2969f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2969f8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2969f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2969fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2969FCu;
    {
        const bool branch_taken_0x2969fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2969FCu;
        // 0x296a00: 0xa6640784  sh          $a0, 0x784($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 1924), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2969fc) {
            ctx->pc = 0x296A20u;
            goto label_296a20;
        }
    }
    ctx->pc = 0x296A04u;
label_296a04:
    // 0x296a04: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x296a04u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x296a08: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x296a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x296a0c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x296a0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x296a10: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x296a10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x296a14: 0x0  nop
    ctx->pc = 0x296a14u;
    // NOP
    // 0x296a18: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x296a18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x296a1c: 0xa6640784  sh          $a0, 0x784($s3)
    ctx->pc = 0x296a1cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1924), (uint16_t)GPR_U32(ctx, 4));
label_296a20:
    // 0x296a20: 0x966329de  lhu         $v1, 0x29DE($s3)
    ctx->pc = 0x296a20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10718)));
    // 0x296a24: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x296a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x296a28: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x296A28u;
    {
        const bool branch_taken_0x296a28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x296a28) {
            ctx->pc = 0x296A98u;
            goto label_296a98;
        }
    }
    ctx->pc = 0x296A30u;
    // 0x296a30: 0x8e6306c8  lw          $v1, 0x6C8($s3)
    ctx->pc = 0x296a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1736)));
    // 0x296a34: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x296a34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x296a38: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x296a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x296a3c: 0xae6306c8  sw          $v1, 0x6C8($s3)
    ctx->pc = 0x296a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1736), GPR_U32(ctx, 3));
    // 0x296a40: 0x8e6306cc  lw          $v1, 0x6CC($s3)
    ctx->pc = 0x296a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1740)));
    // 0x296a44: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x296a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x296a48: 0xae6306cc  sw          $v1, 0x6CC($s3)
    ctx->pc = 0x296a48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1740), GPR_U32(ctx, 3));
    // 0x296a4c: 0x8e6306ac  lw          $v1, 0x6AC($s3)
    ctx->pc = 0x296a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1708)));
    // 0x296a50: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x296a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x296a54: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x296A54u;
    {
        const bool branch_taken_0x296a54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x296a54) {
            ctx->pc = 0x296A68u;
            goto label_296a68;
        }
    }
    ctx->pc = 0x296A5Cu;
    // 0x296a5c: 0x966329de  lhu         $v1, 0x29DE($s3)
    ctx->pc = 0x296a5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10718)));
    // 0x296a60: 0x3063fbff  andi        $v1, $v1, 0xFBFF
    ctx->pc = 0x296a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64511);
    // 0x296a64: 0xa66329de  sh          $v1, 0x29DE($s3)
    ctx->pc = 0x296a64u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 10718), (uint16_t)GPR_U32(ctx, 3));
label_296a68:
    // 0x296a68: 0x8e6306ac  lw          $v1, 0x6AC($s3)
    ctx->pc = 0x296a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1708)));
    // 0x296a6c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x296a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x296a70: 0xae6306ac  sw          $v1, 0x6AC($s3)
    ctx->pc = 0x296a70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1708), GPR_U32(ctx, 3));
    // 0x296a74: 0x8e6306b4  lw          $v1, 0x6B4($s3)
    ctx->pc = 0x296a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1716)));
    // 0x296a78: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x296a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x296a7c: 0xae6306b4  sw          $v1, 0x6B4($s3)
    ctx->pc = 0x296a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1716), GPR_U32(ctx, 3));
    // 0x296a80: 0x966329f8  lhu         $v1, 0x29F8($s3)
    ctx->pc = 0x296a80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10744)));
    // 0x296a84: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x296A84u;
    {
        const bool branch_taken_0x296a84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x296a84) {
            ctx->pc = 0x296A98u;
            goto label_296a98;
        }
    }
    ctx->pc = 0x296A8Cu;
    // 0x296a8c: 0x966329de  lhu         $v1, 0x29DE($s3)
    ctx->pc = 0x296a8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10718)));
    // 0x296a90: 0x3063fbff  andi        $v1, $v1, 0xFBFF
    ctx->pc = 0x296a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64511);
    // 0x296a94: 0xa66329de  sh          $v1, 0x29DE($s3)
    ctx->pc = 0x296a94u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 10718), (uint16_t)GPR_U32(ctx, 3));
label_296a98:
    // 0x296a98: 0x966429de  lhu         $a0, 0x29DE($s3)
    ctx->pc = 0x296a98u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10718)));
    // 0x296a9c: 0x30831000  andi        $v1, $a0, 0x1000
    ctx->pc = 0x296a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4096);
    // 0x296aa0: 0x106000b7  beqz        $v1, . + 4 + (0xB7 << 2)
    ctx->pc = 0x296AA0u;
    {
        const bool branch_taken_0x296aa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x296aa0) {
            ctx->pc = 0x296D80u;
            goto label_296d80;
        }
    }
    ctx->pc = 0x296AA8u;
    // 0x296aa8: 0x8e6306ac  lw          $v1, 0x6AC($s3)
    ctx->pc = 0x296aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1708)));
    // 0x296aac: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x296aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x296ab0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x296AB0u;
    {
        const bool branch_taken_0x296ab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x296AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296AB0u;
        // 0x296ab4: 0x3083efff  andi        $v1, $a0, 0xEFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61439);
        ctx->in_delay_slot = false;
        if (branch_taken_0x296ab0) {
            ctx->pc = 0x296AC0u;
            goto label_296ac0;
        }
    }
    ctx->pc = 0x296AB8u;
    // 0x296ab8: 0xa66329de  sh          $v1, 0x29DE($s3)
    ctx->pc = 0x296ab8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 10718), (uint16_t)GPR_U32(ctx, 3));
    // 0x296abc: 0x0  nop
    ctx->pc = 0x296abcu;
    // NOP
label_296ac0:
    // 0x296ac0: 0x8e6306ac  lw          $v1, 0x6AC($s3)
    ctx->pc = 0x296ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1708)));
    // 0x296ac4: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x296ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x296ac8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x296AC8u;
    {
        const bool branch_taken_0x296ac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x296ac8) {
            ctx->pc = 0x296AE0u;
            goto label_296ae0;
        }
    }
    ctx->pc = 0x296AD0u;
    // 0x296ad0: 0x966329de  lhu         $v1, 0x29DE($s3)
    ctx->pc = 0x296ad0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10718)));
    // 0x296ad4: 0x3063efff  andi        $v1, $v1, 0xEFFF
    ctx->pc = 0x296ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61439);
    // 0x296ad8: 0xa66329de  sh          $v1, 0x29DE($s3)
    ctx->pc = 0x296ad8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 10718), (uint16_t)GPR_U32(ctx, 3));
    // 0x296adc: 0x0  nop
    ctx->pc = 0x296adcu;
    // NOP
label_296ae0:
    // 0x296ae0: 0x926408e8  lbu         $a0, 0x8E8($s3)
    ctx->pc = 0x296ae0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2280)));
    // 0x296ae4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x296ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x296ae8: 0x1483001b  bne         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x296AE8u;
    {
        const bool branch_taken_0x296ae8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x296AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296AE8u;
        // 0x296aec: 0x240400b4  addiu       $a0, $zero, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296ae8) {
            ctx->pc = 0x296B58u;
            goto label_296b58;
        }
    }
    ctx->pc = 0x296AF0u;
    // 0x296af0: 0xc0969c8  jal         func_25A720
    ctx->pc = 0x296AF0u;
    SET_GPR_U32(ctx, 31, 0x296AF8u);
    ctx->pc = 0x25A720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A720u, 0x296AF0u, 0x296AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296AF8u;
label_296af8:
    // 0x296af8: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x296af8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x296afc: 0x10200072  beqz        $at, . + 4 + (0x72 << 2)
    ctx->pc = 0x296AFCu;
    {
        const bool branch_taken_0x296afc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x296afc) {
            ctx->pc = 0x296CC8u;
            goto label_296cc8;
        }
    }
    ctx->pc = 0x296B04u;
    // 0x296b04: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x296b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x296b08: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x296b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x296b0c: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x296b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x296b10: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x296b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x296b14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x296b14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296b18: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x296b18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x296b1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x296b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x296b20: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x296b20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x296b24: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x296b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x296b28: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x296b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x296b2c: 0x926508e8  lbu         $a1, 0x8E8($s3)
    ctx->pc = 0x296b2cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2280)));
    // 0x296b30: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x296b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x296b34: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x296b34u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x296b38: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x296b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
    // 0x296b3c: 0x24420294  addiu       $v0, $v0, 0x294
    ctx->pc = 0x296b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 660));
    // 0x296b40: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x296b40u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x296b44: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x296b44u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x296b48: 0xc0aa590  jal         func_2A9640
    ctx->pc = 0x296B48u;
    SET_GPR_U32(ctx, 31, 0x296B50u);
    ctx->pc = 0x296B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296B48u;
    // 0x296b4c: 0x24670030  addiu       $a3, $v1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9640u, 0x296B48u, 0x296B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296B50u;
label_296b50:
    // 0x296b50: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x296B50u;
    {
        const bool branch_taken_0x296b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296b50) {
            ctx->pc = 0x296CC8u;
            goto label_296cc8;
        }
    }
    ctx->pc = 0x296B58u;
label_296b58:
    // 0x296b58: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x296b58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x296b5c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x296b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x296b60: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x296b60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x296b64: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x296b64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x296b68: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x296b68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x296b6c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x296b6cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x296b70: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x296b70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x296b74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x296b74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x296b78: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x296b78u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x296b7c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x296b7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x296b80: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x296b80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x296b84: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x296B84u;
    {
        const bool branch_taken_0x296b84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x296b84) {
            ctx->pc = 0x296B9Cu;
            goto label_296b9c;
        }
    }
    ctx->pc = 0x296B8Cu;
    // 0x296b8c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x296b8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x296b90: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x296b90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x296b94: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x296B94u;
    {
        const bool branch_taken_0x296b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296B94u;
        // 0x296b98: 0x966306d6  lhu         $v1, 0x6D6($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 1750)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296b94) {
            ctx->pc = 0x296BB8u;
            goto label_296bb8;
        }
    }
    ctx->pc = 0x296B9Cu;
label_296b9c:
    // 0x296b9c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x296b9cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x296ba0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x296ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x296ba4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x296ba4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x296ba8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x296ba8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x296bac: 0x0  nop
    ctx->pc = 0x296bacu;
    // NOP
    // 0x296bb0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x296bb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x296bb4: 0x966306d6  lhu         $v1, 0x6D6($s3)
    ctx->pc = 0x296bb4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 1750)));
label_296bb8:
    // 0x296bb8: 0x64001b  divu        $zero, $v1, $a0
    ctx->pc = 0x296bb8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x296bbc: 0x0  nop
    ctx->pc = 0x296bbcu;
    // NOP
    // 0x296bc0: 0x0  nop
    ctx->pc = 0x296bc0u;
    // NOP
    // 0x296bc4: 0x1810  mfhi        $v1
    ctx->pc = 0x296bc4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x296bc8: 0x1460003f  bnez        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x296BC8u;
    {
        const bool branch_taken_0x296bc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x296bc8) {
            ctx->pc = 0x296CC8u;
            goto label_296cc8;
        }
    }
    ctx->pc = 0x296BD0u;
    // 0x296bd0: 0x8e6329c0  lw          $v1, 0x29C0($s3)
    ctx->pc = 0x296bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
    // 0x296bd4: 0x94630006  lhu         $v1, 0x6($v1)
    ctx->pc = 0x296bd4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x296bd8: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x296BD8u;
    {
        const bool branch_taken_0x296bd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x296bd8) {
            ctx->pc = 0x296C50u;
            goto label_296c50;
        }
    }
    ctx->pc = 0x296BE0u;
    // 0x296be0: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x296be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x296be4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x296be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x296be8: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x296be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x296bec: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x296becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x296bf0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x296bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296bf4: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x296bf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x296bf8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x296bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x296bfc: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x296bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x296c00: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x296c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x296c04: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x296c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x296c08: 0x926508e8  lbu         $a1, 0x8E8($s3)
    ctx->pc = 0x296c08u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2280)));
    // 0x296c0c: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x296c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x296c10: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x296c10u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x296c14: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x296c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
    // 0x296c18: 0x24420294  addiu       $v0, $v0, 0x294
    ctx->pc = 0x296c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 660));
    // 0x296c1c: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x296c1cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x296c20: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x296c20u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x296c24: 0xc0aa590  jal         func_2A9640
    ctx->pc = 0x296C24u;
    SET_GPR_U32(ctx, 31, 0x296C2Cu);
    ctx->pc = 0x296C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296C24u;
    // 0x296c28: 0x24670030  addiu       $a3, $v1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9640u, 0x296C24u, 0x296C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296C2Cu;
label_296c2c:
    // 0x296c2c: 0x8e6229c0  lw          $v0, 0x29C0($s3)
    ctx->pc = 0x296c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
    // 0x296c30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x296c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296c34: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x296c34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x296c38: 0xc096974  jal         func_25A5D0
    ctx->pc = 0x296C38u;
    SET_GPR_U32(ctx, 31, 0x296C40u);
    ctx->pc = 0x296C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296C38u;
    // 0x296c3c: 0x2444ff74  addiu       $a0, $v0, -0x8C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x296C38u, 0x296C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296C40u;
label_296c40:
    // 0x296c40: 0x8e6329c0  lw          $v1, 0x29C0($s3)
    ctx->pc = 0x296c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
    // 0x296c44: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x296C44u;
    {
        const bool branch_taken_0x296c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296C44u;
        // 0x296c48: 0xa4620006  sh          $v0, 0x6($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296c44) {
            ctx->pc = 0x296CC8u;
            goto label_296cc8;
        }
    }
    ctx->pc = 0x296C4Cu;
    // 0x296c4c: 0x0  nop
    ctx->pc = 0x296c4cu;
    // NOP
label_296c50:
    // 0x296c50: 0x8f838ba8  lw          $v1, -0x7458($gp)
    ctx->pc = 0x296c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x296c54: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x296c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x296c58: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x296C58u;
    {
        const bool branch_taken_0x296c58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x296c58) {
            ctx->pc = 0x296CC8u;
            goto label_296cc8;
        }
    }
    ctx->pc = 0x296C60u;
    // 0x296c60: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x296c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x296c64: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x296c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x296c68: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x296c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x296c6c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x296c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x296c70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x296c70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296c74: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x296c74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x296c78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x296c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x296c7c: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x296c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x296c80: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x296c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x296c84: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x296c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x296c88: 0x926508e8  lbu         $a1, 0x8E8($s3)
    ctx->pc = 0x296c88u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2280)));
    // 0x296c8c: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x296c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x296c90: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x296c90u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x296c94: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x296c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
    // 0x296c98: 0x24420294  addiu       $v0, $v0, 0x294
    ctx->pc = 0x296c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 660));
    // 0x296c9c: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x296c9cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x296ca0: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x296ca0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x296ca4: 0xc0aa590  jal         func_2A9640
    ctx->pc = 0x296CA4u;
    SET_GPR_U32(ctx, 31, 0x296CACu);
    ctx->pc = 0x296CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296CA4u;
    // 0x296ca8: 0x24670030  addiu       $a3, $v1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9640u, 0x296CA4u, 0x296CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296CACu;
label_296cac:
    // 0x296cac: 0x8f908ba8  lw          $s0, -0x7458($gp)
    ctx->pc = 0x296cacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x296cb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x296cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296cb4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x296cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x296cb8: 0xc096974  jal         func_25A5D0
    ctx->pc = 0x296CB8u;
    SET_GPR_U32(ctx, 31, 0x296CC0u);
    ctx->pc = 0x296CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296CB8u;
    // 0x296cbc: 0x2444fffb  addiu       $a0, $v0, -0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x296CB8u, 0x296CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296CC0u;
label_296cc0:
    // 0x296cc0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x296cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x296cc4: 0x0  nop
    ctx->pc = 0x296cc4u;
    // NOP
label_296cc8:
    // 0x296cc8: 0xde630500  ld          $v1, 0x500($s3)
    ctx->pc = 0x296cc8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 1280)));
    // 0x296ccc: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x296cccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x296cd0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x296CD0u;
    {
        const bool branch_taken_0x296cd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x296cd0) {
            ctx->pc = 0x296CF0u;
            goto label_296cf0;
        }
    }
    ctx->pc = 0x296CD8u;
    // 0x296cd8: 0x966229fc  lhu         $v0, 0x29FC($s3)
    ctx->pc = 0x296cd8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10748)));
    // 0x296cdc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x296cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296ce0: 0xc096974  jal         func_25A5D0
    ctx->pc = 0x296CE0u;
    SET_GPR_U32(ctx, 31, 0x296CE8u);
    ctx->pc = 0x296CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296CE0u;
    // 0x296ce4: 0x2445fffc  addiu       $a1, $v0, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x296CE0u, 0x296CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296CE8u;
label_296ce8:
    // 0x296ce8: 0xa66229fc  sh          $v0, 0x29FC($s3)
    ctx->pc = 0x296ce8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 10748), (uint16_t)GPR_U32(ctx, 2));
    // 0x296cec: 0x0  nop
    ctx->pc = 0x296cecu;
    // NOP
label_296cf0:
    // 0x296cf0: 0x966329fc  lhu         $v1, 0x29FC($s3)
    ctx->pc = 0x296cf0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10748)));
    // 0x296cf4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x296CF4u;
    {
        const bool branch_taken_0x296cf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x296cf4) {
            ctx->pc = 0x296D08u;
            goto label_296d08;
        }
    }
    ctx->pc = 0x296CFCu;
    // 0x296cfc: 0x966329de  lhu         $v1, 0x29DE($s3)
    ctx->pc = 0x296cfcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10718)));
    // 0x296d00: 0x3063efff  andi        $v1, $v1, 0xEFFF
    ctx->pc = 0x296d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61439);
    // 0x296d04: 0xa66329de  sh          $v1, 0x29DE($s3)
    ctx->pc = 0x296d04u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 10718), (uint16_t)GPR_U32(ctx, 3));
label_296d08:
    // 0x296d08: 0x9264065c  lbu         $a0, 0x65C($s3)
    ctx->pc = 0x296d08u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1628)));
    // 0x296d0c: 0x2403008a  addiu       $v1, $zero, 0x8A
    ctx->pc = 0x296d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
    // 0x296d10: 0x1483001b  bne         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x296D10u;
    {
        const bool branch_taken_0x296d10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x296d10) {
            ctx->pc = 0x296D80u;
            goto label_296d80;
        }
    }
    ctx->pc = 0x296D18u;
    // 0x296d18: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x296d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x296d1c: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x296d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x296d20: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x296d20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x296d24: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x296d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x296d28: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x296d28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x296d2c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x296d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x296d30: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x296d30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x296d34: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x296d34u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x296d38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x296d38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x296d3c: 0x0  nop
    ctx->pc = 0x296d3cu;
    // NOP
    // 0x296d40: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x296d40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x296d44: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x296d44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x296d48: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x296D48u;
    {
        const bool branch_taken_0x296d48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x296d48) {
            ctx->pc = 0x296D60u;
            goto label_296d60;
        }
    }
    ctx->pc = 0x296D50u;
    // 0x296d50: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x296d50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x296d54: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x296d54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x296d58: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x296D58u;
    {
        const bool branch_taken_0x296d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296D58u;
        // 0x296d5c: 0xa6640784  sh          $a0, 0x784($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 1924), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296d58) {
            ctx->pc = 0x296D7Cu;
            goto label_296d7c;
        }
    }
    ctx->pc = 0x296D60u;
label_296d60:
    // 0x296d60: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x296d60u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x296d64: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x296d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x296d68: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x296d68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x296d6c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x296d6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x296d70: 0x0  nop
    ctx->pc = 0x296d70u;
    // NOP
    // 0x296d74: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x296d74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x296d78: 0xa6640784  sh          $a0, 0x784($s3)
    ctx->pc = 0x296d78u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1924), (uint16_t)GPR_U32(ctx, 4));
label_296d7c:
    // 0x296d7c: 0x0  nop
    ctx->pc = 0x296d7cu;
    // NOP
label_296d80:
    // 0x296d80: 0x966329de  lhu         $v1, 0x29DE($s3)
    ctx->pc = 0x296d80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10718)));
    // 0x296d84: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x296d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x296d88: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x296D88u;
    {
        const bool branch_taken_0x296d88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x296d88) {
            ctx->pc = 0x296E88u;
            goto label_296e88;
        }
    }
    ctx->pc = 0x296D90u;
    // 0x296d90: 0x926429d0  lbu         $a0, 0x29D0($s3)
    ctx->pc = 0x296d90u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10704)));
    // 0x296d94: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x296d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x296d98: 0x10830023  beq         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x296D98u;
    {
        const bool branch_taken_0x296d98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x296d98) {
            ctx->pc = 0x296E28u;
            goto label_296e28;
        }
    }
    ctx->pc = 0x296DA0u;
    // 0x296da0: 0x8e6406cc  lw          $a0, 0x6CC($s3)
    ctx->pc = 0x296da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1740)));
    // 0x296da4: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x296da4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x296da8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x296da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x296dac: 0xae6306cc  sw          $v1, 0x6CC($s3)
    ctx->pc = 0x296dacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1740), GPR_U32(ctx, 3));
    // 0x296db0: 0x966329fa  lhu         $v1, 0x29FA($s3)
    ctx->pc = 0x296db0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10746)));
    // 0x296db4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x296DB4u;
    {
        const bool branch_taken_0x296db4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x296db4) {
            ctx->pc = 0x296DC8u;
            goto label_296dc8;
        }
    }
    ctx->pc = 0x296DBCu;
    // 0x296dbc: 0x966329de  lhu         $v1, 0x29DE($s3)
    ctx->pc = 0x296dbcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10718)));
    // 0x296dc0: 0x3063f7ff  andi        $v1, $v1, 0xF7FF
    ctx->pc = 0x296dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63487);
    // 0x296dc4: 0xa66329de  sh          $v1, 0x29DE($s3)
    ctx->pc = 0x296dc4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 10718), (uint16_t)GPR_U32(ctx, 3));
label_296dc8:
    // 0x296dc8: 0x8e6329c0  lw          $v1, 0x29C0($s3)
    ctx->pc = 0x296dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
    // 0x296dcc: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x296dccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x296dd0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x296DD0u;
    {
        const bool branch_taken_0x296dd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x296dd0) {
            ctx->pc = 0x296DE8u;
            goto label_296de8;
        }
    }
    ctx->pc = 0x296DD8u;
    // 0x296dd8: 0x966329de  lhu         $v1, 0x29DE($s3)
    ctx->pc = 0x296dd8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10718)));
    // 0x296ddc: 0x3063f7ff  andi        $v1, $v1, 0xF7FF
    ctx->pc = 0x296ddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63487);
    // 0x296de0: 0xa66329de  sh          $v1, 0x29DE($s3)
    ctx->pc = 0x296de0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 10718), (uint16_t)GPR_U32(ctx, 3));
    // 0x296de4: 0x0  nop
    ctx->pc = 0x296de4u;
    // NOP
label_296de8:
    // 0x296de8: 0x9263083b  lbu         $v1, 0x83B($s3)
    ctx->pc = 0x296de8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2107)));
    // 0x296dec: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x296decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x296df0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x296DF0u;
    {
        const bool branch_taken_0x296df0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x296df0) {
            ctx->pc = 0x296E10u;
            goto label_296e10;
        }
    }
    ctx->pc = 0x296DF8u;
    // 0x296df8: 0x92632aa2  lbu         $v1, 0x2AA2($s3)
    ctx->pc = 0x296df8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10914)));
    // 0x296dfc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x296DFCu;
    {
        const bool branch_taken_0x296dfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x296dfc) {
            ctx->pc = 0x296E10u;
            goto label_296e10;
        }
    }
    ctx->pc = 0x296E04u;
    // 0x296e04: 0x966329de  lhu         $v1, 0x29DE($s3)
    ctx->pc = 0x296e04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10718)));
    // 0x296e08: 0x3063f7ff  andi        $v1, $v1, 0xF7FF
    ctx->pc = 0x296e08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63487);
    // 0x296e0c: 0xa66329de  sh          $v1, 0x29DE($s3)
    ctx->pc = 0x296e0cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 10718), (uint16_t)GPR_U32(ctx, 3));
label_296e10:
    // 0x296e10: 0x8e6306ac  lw          $v1, 0x6AC($s3)
    ctx->pc = 0x296e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1708)));
    // 0x296e14: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x296e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x296e18: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x296E18u;
    {
        const bool branch_taken_0x296e18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x296E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296E18u;
        // 0x296e1c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296e18) {
            ctx->pc = 0x296E88u;
            goto label_296e88;
        }
    }
    ctx->pc = 0x296E20u;
    // 0x296e20: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x296E20u;
    {
        const bool branch_taken_0x296e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296E20u;
        // 0x296e24: 0xa2632aa2  sb          $v1, 0x2AA2($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 10914), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296e20) {
            ctx->pc = 0x296E88u;
            goto label_296e88;
        }
    }
    ctx->pc = 0x296E28u;
label_296e28:
    // 0x296e28: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x296E28u;
    SET_GPR_U32(ctx, 31, 0x296E30u);
    ctx->pc = 0x296E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296E28u;
    // 0x296e2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x296E28u, 0x296E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296E30u;
label_296e30:
    // 0x296e30: 0x8e6529c0  lw          $a1, 0x29C0($s3)
    ctx->pc = 0x296e30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
    // 0x296e34: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x296e34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x296e38: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x296e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x296e3c: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x296e3cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x296e40: 0xae6407b4  sw          $a0, 0x7B4($s3)
    ctx->pc = 0x296e40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1972), GPR_U32(ctx, 4));
    // 0x296e44: 0xae6007b8  sw          $zero, 0x7B8($s3)
    ctx->pc = 0x296e44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1976), GPR_U32(ctx, 0));
    // 0x296e48: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x296e48u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x296e4c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x296E4Cu;
    {
        const bool branch_taken_0x296e4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x296e4c) {
            ctx->pc = 0x296E88u;
            goto label_296e88;
        }
    }
    ctx->pc = 0x296E54u;
    // 0x296e54: 0x9263000a  lbu         $v1, 0xA($s3)
    ctx->pc = 0x296e54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x296e58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x296e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296e5c: 0x1465000a  bne         $v1, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x296E5Cu;
    {
        const bool branch_taken_0x296e5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x296E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296E5Cu;
        // 0x296e60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296e5c) {
            ctx->pc = 0x296E88u;
            goto label_296e88;
        }
    }
    ctx->pc = 0x296E64u;
    // 0x296e64: 0xc0a7344  jal         func_29CD10
    ctx->pc = 0x296E64u;
    SET_GPR_U32(ctx, 31, 0x296E6Cu);
    ctx->pc = 0x29CD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CD10u, 0x296E64u, 0x296E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296E6Cu;
label_296e6c:
    // 0x296e6c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x296e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x296e70: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x296e70u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x296e74: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x296E74u;
    {
        const bool branch_taken_0x296e74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x296E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296E74u;
        // 0x296e78: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296e74) {
            ctx->pc = 0x296E88u;
            goto label_296e88;
        }
    }
    ctx->pc = 0x296E7Cu;
    // 0x296e7c: 0xa2632ab6  sb          $v1, 0x2AB6($s3)
    ctx->pc = 0x296e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 10934), (uint8_t)GPR_U32(ctx, 3));
    // 0x296e80: 0xa6632ab4  sh          $v1, 0x2AB4($s3)
    ctx->pc = 0x296e80u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 10932), (uint16_t)GPR_U32(ctx, 3));
    // 0x296e84: 0x0  nop
    ctx->pc = 0x296e84u;
    // NOP
label_296e88:
    // 0x296e88: 0x966329de  lhu         $v1, 0x29DE($s3)
    ctx->pc = 0x296e88u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10718)));
    // 0x296e8c: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x296e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x296e90: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x296E90u;
    {
        const bool branch_taken_0x296e90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x296e90) {
            ctx->pc = 0x296EB8u;
            goto label_296eb8;
        }
    }
    ctx->pc = 0x296E98u;
    // 0x296e98: 0x8e6306c8  lw          $v1, 0x6C8($s3)
    ctx->pc = 0x296e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1736)));
    // 0x296e9c: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x296e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x296ea0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x296ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x296ea4: 0xae6306c8  sw          $v1, 0x6C8($s3)
    ctx->pc = 0x296ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1736), GPR_U32(ctx, 3));
    // 0x296ea8: 0x8e6306cc  lw          $v1, 0x6CC($s3)
    ctx->pc = 0x296ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1740)));
    // 0x296eac: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x296eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x296eb0: 0xae6306cc  sw          $v1, 0x6CC($s3)
    ctx->pc = 0x296eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1740), GPR_U32(ctx, 3));
    // 0x296eb4: 0x0  nop
    ctx->pc = 0x296eb4u;
    // NOP
label_296eb8:
    // 0x296eb8: 0x966329de  lhu         $v1, 0x29DE($s3)
    ctx->pc = 0x296eb8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10718)));
    // 0x296ebc: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x296ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x296ec0: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x296EC0u;
    {
        const bool branch_taken_0x296ec0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x296ec0) {
            ctx->pc = 0x296FC0u;
            goto label_296fc0;
        }
    }
    ctx->pc = 0x296EC8u;
    // 0x296ec8: 0x8e620148  lw          $v0, 0x148($s3)
    ctx->pc = 0x296ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 328)));
    // 0x296ecc: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x296eccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x296ed0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x296ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x296ed4: 0xae620148  sw          $v0, 0x148($s3)
    ctx->pc = 0x296ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 328), GPR_U32(ctx, 2));
    // 0x296ed8: 0x8e652a3c  lw          $a1, 0x2A3C($s3)
    ctx->pc = 0x296ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10812)));
    // 0x296edc: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x296EDCu;
    SET_GPR_U32(ctx, 31, 0x296EE4u);
    ctx->pc = 0x296EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296EDCu;
    // 0x296ee0: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x296EDCu, 0x296EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296EE4u;
label_296ee4:
    // 0x296ee4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x296ee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296ee8: 0x10a0002b  beqz        $a1, . + 4 + (0x2B << 2)
    ctx->pc = 0x296EE8u;
    {
        const bool branch_taken_0x296ee8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x296ee8) {
            ctx->pc = 0x296F98u;
            goto label_296f98;
        }
    }
    ctx->pc = 0x296EF0u;
    // 0x296ef0: 0x8e6206ac  lw          $v0, 0x6AC($s3)
    ctx->pc = 0x296ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1708)));
    // 0x296ef4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x296ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x296ef8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x296EF8u;
    {
        const bool branch_taken_0x296ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x296ef8) {
            ctx->pc = 0x296F50u;
            goto label_296f50;
        }
    }
    ctx->pc = 0x296F00u;
    // 0x296f00: 0x926a0002  lbu         $t2, 0x2($s3)
    ctx->pc = 0x296f00u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x296f04: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x296f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x296f08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x296f08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x296f0c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x296f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x296f10: 0x2463f38c  addiu       $v1, $v1, -0xC74
    ctx->pc = 0x296f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964108));
    // 0x296f14: 0x266401c0  addiu       $a0, $s3, 0x1C0
    ctx->pc = 0x296f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 448));
    // 0x296f18: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x296f18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296f1c: 0x27878964  addiu       $a3, $gp, -0x769C
    ctx->pc = 0x296f1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936932));
    // 0x296f20: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x296f20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296f24: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x296f24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296f28: 0xa1040  sll         $v0, $t2, 1
    ctx->pc = 0x296f28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x296f2c: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x296f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x296f30: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x296f30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x296f34: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x296f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x296f38: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x296f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x296f3c: 0xc09fa38  jal         func_27E8E0
    ctx->pc = 0x296F3Cu;
    SET_GPR_U32(ctx, 31, 0x296F44u);
    ctx->pc = 0x296F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296F3Cu;
    // 0x296f40: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E8E0u, 0x296F3Cu, 0x296F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296F44u;
label_296f44:
    // 0x296f44: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x296F44u;
    {
        const bool branch_taken_0x296f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296f44) {
            ctx->pc = 0x296F98u;
            goto label_296f98;
        }
    }
    ctx->pc = 0x296F4Cu;
    // 0x296f4c: 0x0  nop
    ctx->pc = 0x296f4cu;
    // NOP
label_296f50:
    // 0x296f50: 0x926a0002  lbu         $t2, 0x2($s3)
    ctx->pc = 0x296f50u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x296f54: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x296f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x296f58: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x296f58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x296f5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x296f5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x296f60: 0x2463f38c  addiu       $v1, $v1, -0xC74
    ctx->pc = 0x296f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964108));
    // 0x296f64: 0x266401c0  addiu       $a0, $s3, 0x1C0
    ctx->pc = 0x296f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 448));
    // 0x296f68: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x296f68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296f6c: 0x27878964  addiu       $a3, $gp, -0x769C
    ctx->pc = 0x296f6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936932));
    // 0x296f70: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x296f70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x296f74: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x296f74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296f78: 0xa1040  sll         $v0, $t2, 1
    ctx->pc = 0x296f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x296f7c: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x296f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x296f80: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x296f80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x296f84: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x296f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x296f88: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x296f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x296f8c: 0xc09fa38  jal         func_27E8E0
    ctx->pc = 0x296F8Cu;
    SET_GPR_U32(ctx, 31, 0x296F94u);
    ctx->pc = 0x296F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296F8Cu;
    // 0x296f90: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E8E0u, 0x296F8Cu, 0x296F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296F94u;
label_296f94:
    // 0x296f94: 0x0  nop
    ctx->pc = 0x296f94u;
    // NOP
label_296f98:
    // 0x296f98: 0x96632a00  lhu         $v1, 0x2A00($s3)
    ctx->pc = 0x296f98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10752)));
    // 0x296f9c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x296F9Cu;
    {
        const bool branch_taken_0x296f9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x296f9c) {
            ctx->pc = 0x296FC0u;
            goto label_296fc0;
        }
    }
    ctx->pc = 0x296FA4u;
    // 0x296fa4: 0x8e6306ac  lw          $v1, 0x6AC($s3)
    ctx->pc = 0x296fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1708)));
    // 0x296fa8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x296fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x296fac: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x296FACu;
    {
        const bool branch_taken_0x296fac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x296fac) {
            ctx->pc = 0x296FC0u;
            goto label_296fc0;
        }
    }
    ctx->pc = 0x296FB4u;
    // 0x296fb4: 0x966329de  lhu         $v1, 0x29DE($s3)
    ctx->pc = 0x296fb4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10718)));
    // 0x296fb8: 0x3063bfff  andi        $v1, $v1, 0xBFFF
    ctx->pc = 0x296fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)49151);
    // 0x296fbc: 0xa66329de  sh          $v1, 0x29DE($s3)
    ctx->pc = 0x296fbcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 10718), (uint16_t)GPR_U32(ctx, 3));
label_296fc0:
    // 0x296fc0: 0x966429de  lhu         $a0, 0x29DE($s3)
    ctx->pc = 0x296fc0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10718)));
    // 0x296fc4: 0x30838000  andi        $v1, $a0, 0x8000
    ctx->pc = 0x296fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x296fc8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x296FC8u;
    {
        const bool branch_taken_0x296fc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x296fc8) {
            ctx->pc = 0x296FE0u;
            goto label_296fe0;
        }
    }
    ctx->pc = 0x296FD0u;
    // 0x296fd0: 0x96632a02  lhu         $v1, 0x2A02($s3)
    ctx->pc = 0x296fd0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10754)));
    // 0x296fd4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x296FD4u;
    {
        const bool branch_taken_0x296fd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x296FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296FD4u;
        // 0x296fd8: 0x30837fff  andi        $v1, $a0, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x296fd4) {
            ctx->pc = 0x296FE0u;
            goto label_296fe0;
        }
    }
    ctx->pc = 0x296FDCu;
    // 0x296fdc: 0xa66329de  sh          $v1, 0x29DE($s3)
    ctx->pc = 0x296fdcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 10718), (uint16_t)GPR_U32(ctx, 3));
label_296fe0:
    // 0x296fe0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x296fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x296fe4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x296fe4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x296fe8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x296fe8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x296fec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x296fecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296ff0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x296ff0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x296FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296FF4u;
        // 0x296ff8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296FFCu;
}
