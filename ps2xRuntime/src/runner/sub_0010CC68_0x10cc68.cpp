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

// Function: sub_0010CC68
// Address: 0x10cc68 - 0x10d140
void sub_0010CC68_0x10cc68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CC68_0x10cc68");
#endif

    switch (ctx->pc) {
        case 0x10ccb4u: goto label_10ccb4;
        case 0x10cce0u: goto label_10cce0;
        case 0x10cd20u: goto label_10cd20;
        case 0x10cd48u: goto label_10cd48;
        case 0x10cd88u: goto label_10cd88;
        case 0x10cda4u: goto label_10cda4;
        case 0x10cdacu: goto label_10cdac;
        case 0x10cde8u: goto label_10cde8;
        case 0x10ce28u: goto label_10ce28;
        case 0x10ce4cu: goto label_10ce4c;
        case 0x10ce90u: goto label_10ce90;
        case 0x10ceecu: goto label_10ceec;
        case 0x10cef8u: goto label_10cef8;
        case 0x10cf20u: goto label_10cf20;
        case 0x10cf54u: goto label_10cf54;
        case 0x10cf5cu: goto label_10cf5c;
        case 0x10cf68u: goto label_10cf68;
        case 0x10cf78u: goto label_10cf78;
        case 0x10cfb8u: goto label_10cfb8;
        case 0x10cfd8u: goto label_10cfd8;
        case 0x10cffcu: goto label_10cffc;
        case 0x10d040u: goto label_10d040;
        case 0x10d09cu: goto label_10d09c;
        case 0x10d0a8u: goto label_10d0a8;
        case 0x10d0d0u: goto label_10d0d0;
        case 0x10d104u: goto label_10d104;
        case 0x10d118u: goto label_10d118;
        default: break;
    }

    ctx->pc = 0x10cc68u;

    // 0x10cc68: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x10cc68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x10cc6c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x10cc6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10cc70: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x10cc70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x10cc74: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x10cc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x10cc78: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x10cc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x10cc7c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x10cc7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cc80: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x10cc80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x10cc84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10cc84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cc88: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x10cc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x10cc8c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10cc8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cc90: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x10cc90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x10cc94: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x10cc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x10cc98: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x10cc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x10cc9c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x10cc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x10cca0: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x10cca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x10cca4: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x10cca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x10cca8: 0x629818  mult        $s3, $v1, $v0
    ctx->pc = 0x10cca8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x10ccac: 0xc042ee0  jal         func_10BB80
    ctx->pc = 0x10CCACu;
    SET_GPR_U32(ctx, 31, 0x10CCB4u);
    ctx->pc = 0x10CCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CCACu;
    // 0x10ccb0: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BB80u, 0x10CCACu, 0x10CCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CCB4u;
label_10ccb4:
    // 0x10ccb4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10ccb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10ccb8: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x10ccb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x10ccbc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10ccbcu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x10ccc0: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x10ccc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x10ccc4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10CCC4u;
    {
        const bool branch_taken_0x10ccc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CCC4u;
        // 0x10ccc8: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ccc4) {
            ctx->pc = 0x10CCD4u;
            goto label_10ccd4;
        }
    }
    ctx->pc = 0x10CCCCu;
    // 0x10cccc: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x10ccccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x10ccd0: 0xac222010  sw          $v0, 0x2010($at)
    ctx->pc = 0x10ccd0u;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 2)); // MMIO: 0x10002010
label_10ccd4:
    // 0x10ccd4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10ccd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10ccd8: 0x2a750400  slti        $s5, $s3, 0x400
    ctx->pc = 0x10ccd8u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x10ccdc: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x10ccdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
label_10cce0:
    // 0x10cce0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10cce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10cce4: 0x0  nop
    ctx->pc = 0x10cce4u;
    // NOP
    // 0x10cce8: 0x0  nop
    ctx->pc = 0x10cce8u;
    // NOP
    // 0x10ccec: 0x0  nop
    ctx->pc = 0x10ccecu;
    // NOP
    // 0x10ccf0: 0x0  nop
    ctx->pc = 0x10ccf0u;
    // NOP
    // 0x10ccf4: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10CCF4u;
    {
        const bool branch_taken_0x10ccf4 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x10ccf4) {
            ctx->pc = 0x10CCE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10cce0;
        }
    }
    ctx->pc = 0x10CCFCu;
    // 0x10ccfc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10ccfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10cd00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10cd00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10cd04: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x10cd04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x10cd08: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10cd08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10cd0c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x10cd0cu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 0)); // MMIO: 0x10002000
    // 0x10cd10: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x10cd10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
    // 0x10cd14: 0xae030828  sw          $v1, 0x828($s0)
    ctx->pc = 0x10cd14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 3));
    // 0x10cd18: 0xae00082c  sw          $zero, 0x82C($s0)
    ctx->pc = 0x10cd18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
    // 0x10cd1c: 0x0  nop
    ctx->pc = 0x10cd1cu;
    // NOP
label_10cd20:
    // 0x10cd20: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x10cd20u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0))); // MMIO: 0x10002010
    // 0x10cd24: 0x0  nop
    ctx->pc = 0x10cd24u;
    // NOP
    // 0x10cd28: 0x0  nop
    ctx->pc = 0x10cd28u;
    // NOP
    // 0x10cd2c: 0x0  nop
    ctx->pc = 0x10cd2cu;
    // NOP
    // 0x10cd30: 0x0  nop
    ctx->pc = 0x10cd30u;
    // NOP
    // 0x10cd34: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10CD34u;
    {
        const bool branch_taken_0x10cd34 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x10cd34) {
            ctx->pc = 0x10CD20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10cd20;
        }
    }
    ctx->pc = 0x10CD3Cu;
    // 0x10cd3c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10cd3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cd40: 0xc043898  jal         func_10E260
    ctx->pc = 0x10CD40u;
    SET_GPR_U32(ctx, 31, 0x10CD48u);
    ctx->pc = 0x10CD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CD40u;
    // 0x10cd44: 0x3c110fff  lui         $s1, 0xFFF (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4095 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E260u, 0x10CD40u, 0x10CD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CD48u;
label_10cd48:
    // 0x10cd48: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x10cd48u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x10cd4c: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x10cd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x10cd50: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x10cd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10cd54: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x10cd54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x10cd58: 0x3414ffff  ori         $s4, $zero, 0xFFFF
    ctx->pc = 0x10cd58u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x10cd5c: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x10cd5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x10cd60: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x10cd60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x10cd64: 0x283202b  sltu        $a0, $s4, $v1
    ctx->pc = 0x10cd64u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x10cd68: 0x10800081  beqz        $a0, . + 4 + (0x81 << 2)
    ctx->pc = 0x10CD68u;
    {
        const bool branch_taken_0x10cd68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CD68u;
        // 0x10cd6c: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cd68) {
            ctx->pc = 0x10CF70u;
            goto label_10cf70;
        }
    }
    ctx->pc = 0x10CD70u;
    // 0x10cd70: 0x3c050011  lui         $a1, 0x11
    ctx->pc = 0x10cd70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17 << 16));
    // 0x10cd74: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x10cd74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10cd78: 0x24a5d288  addiu       $a1, $a1, -0x2D78
    ctx->pc = 0x10cd78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955656));
    // 0x10cd7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10cd7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cd80: 0xc043740  jal         func_10DD00
    ctx->pc = 0x10CD80u;
    SET_GPR_U32(ctx, 31, 0x10CD88u);
    ctx->pc = 0x10CD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CD80u;
    // 0x10cd84: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DD00u, 0x10CD80u, 0x10CD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CD88u;
label_10cd88:
    // 0x10cd88: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x10cd88u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cd8c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x10cd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x10cd90: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10cd90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10cd94: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x10cd94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10cd98: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x10cd98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x10cd9c: 0xc043afe  jal         func_10EBF8
    ctx->pc = 0x10CD9Cu;
    SET_GPR_U32(ctx, 31, 0x10CDA4u);
    ctx->pc = 0x10CDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CD9Cu;
    // 0x10cda0: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EBF8u, 0x10CD9Cu, 0x10CDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CDA4u;
label_10cda4:
    // 0x10cda4: 0xc046028  jal         func_1180A0
    ctx->pc = 0x10CDA4u;
    SET_GPR_U32(ctx, 31, 0x10CDACu);
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x10CDA4u, 0x10CDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CDACu;
label_10cdac:
    // 0x10cdac: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x10cdacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x10cdb0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10cdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10cdb4: 0x3463b410  ori         $v1, $v1, 0xB410
    ctx->pc = 0x10cdb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46096);
    // 0x10cdb8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10cdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10cdbc: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x10cdbcu;
    runtime->Store32(rdram, ctx, 0x1000B410u, GPR_U32(ctx, 5)); // MMIO: 0x1000b410
    // 0x10cdc0: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x10cdc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x10cdc4: 0xac940000  sw          $s4, 0x0($a0)
    ctx->pc = 0x10cdc4u;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 20)); // MMIO: 0x1000b420
    // 0x10cdc8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10cdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10cdcc: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x10cdccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46080);
    // 0x10cdd0: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x10cdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x10cdd4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x10cdd4u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 4)); // MMIO: 0x1000b400
    // 0x10cdd8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10CDD8u;
    {
        const bool branch_taken_0x10cdd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CDD8u;
        // 0x10cddc: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cdd8) {
            ctx->pc = 0x10CDECu;
            goto label_10cdec;
        }
    }
    ctx->pc = 0x10CDE0u;
    // 0x10cde0: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x10CDE0u;
    SET_GPR_U32(ctx, 31, 0x10CDE8u);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x10CDE0u, 0x10CDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CDE8u;
label_10cde8:
    // 0x10cde8: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x10cde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_10cdec:
    // 0x10cdec: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x10cdecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x10cdf0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10cdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10cdf4: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x10cdf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x10cdf8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10cdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10cdfc: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x10cdfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x10ce00: 0x942023  subu        $a0, $a0, $s4
    ctx->pc = 0x10ce00u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x10ce04: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x10ce04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x10ce08: 0x12a0004e  beqz        $s5, . + 4 + (0x4E << 2)
    ctx->pc = 0x10CE08u;
    {
        const bool branch_taken_0x10ce08 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CE08u;
        // 0x10ce0c: 0xafa40020  sw          $a0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ce08) {
            ctx->pc = 0x10CF44u;
            goto label_10cf44;
        }
    }
    ctx->pc = 0x10CE10u;
    // 0x10ce10: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10ce10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10ce14: 0x8e1100ec  lw          $s1, 0xEC($s0)
    ctx->pc = 0x10ce14u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x10ce18: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x10ce18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10ce1c: 0x139180  sll         $s2, $s3, 6
    ctx->pc = 0x10ce1cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x10ce20: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x10ce20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x10ce24: 0x0  nop
    ctx->pc = 0x10ce24u;
    // NOP
label_10ce28:
    // 0x10ce28: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10ce28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10ce2c: 0x0  nop
    ctx->pc = 0x10ce2cu;
    // NOP
    // 0x10ce30: 0x0  nop
    ctx->pc = 0x10ce30u;
    // NOP
    // 0x10ce34: 0x0  nop
    ctx->pc = 0x10ce34u;
    // NOP
    // 0x10ce38: 0x0  nop
    ctx->pc = 0x10ce38u;
    // NOP
    // 0x10ce3c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10CE3Cu;
    {
        const bool branch_taken_0x10ce3c = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x10ce3c) {
            ctx->pc = 0x10CE28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10ce28;
        }
    }
    ctx->pc = 0x10CE44u;
    // 0x10ce44: 0xc046028  jal         func_1180A0
    ctx->pc = 0x10CE44u;
    SET_GPR_U32(ctx, 31, 0x10CE4Cu);
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x10CE44u, 0x10CE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CE4Cu;
label_10ce4c:
    // 0x10ce4c: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x10ce4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x10ce50: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x10ce50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10ce54: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10ce54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x10ce58: 0x34a5b010  ori         $a1, $a1, 0xB010
    ctx->pc = 0x10ce58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45072);
    // 0x10ce5c: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x10ce5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x10ce60: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10ce60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10ce64: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x10ce64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x10ce68: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x10ce68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45088);
    // 0x10ce6c: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x10ce6cu;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 18)); // MMIO: 0x1000b020
    // 0x10ce70: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10ce70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10ce74: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x10ce74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x10ce78: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x10ce78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x10ce7c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x10ce7cu;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 4)); // MMIO: 0x1000b000
    // 0x10ce80: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10CE80u;
    {
        const bool branch_taken_0x10ce80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CE80u;
        // 0x10ce84: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ce80) {
            ctx->pc = 0x10CE94u;
            goto label_10ce94;
        }
    }
    ctx->pc = 0x10CE88u;
    // 0x10ce88: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x10CE88u;
    SET_GPR_U32(ctx, 31, 0x10CE90u);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x10CE88u, 0x10CE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CE90u;
label_10ce90:
    // 0x10ce90: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x10ce90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_10ce94:
    // 0x10ce94: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10ce94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10ce98: 0x2631825  or          $v1, $s3, $v1
    ctx->pc = 0x10ce98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    // 0x10ce9c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x10ce9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x10cea0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10cea0u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x10cea4: 0x3c04f000  lui         $a0, 0xF000
    ctx->pc = 0x10cea4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61440 << 16));
    // 0x10cea8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x10cea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x10ceac: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x10ceacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x10ceb0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10CEB0u;
    {
        const bool branch_taken_0x10ceb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10CEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CEB0u;
        // 0x10ceb4: 0xae03082c  sw          $v1, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ceb0) {
            ctx->pc = 0x10CECCu;
            goto label_10cecc;
        }
    }
    ctx->pc = 0x10CEB8u;
    // 0x10ceb8: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x10ceb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x10cebc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10CEBCu;
    {
        const bool branch_taken_0x10cebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10CEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CEBCu;
        // 0x10cec0: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cebc) {
            ctx->pc = 0x10CECCu;
            goto label_10cecc;
        }
    }
    ctx->pc = 0x10CEC4u;
    // 0x10cec4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10CEC4u;
    {
        const bool branch_taken_0x10cec4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10CEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CEC4u;
        // 0x10cec8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cec4) {
            ctx->pc = 0x10CED4u;
            goto label_10ced4;
        }
    }
    ctx->pc = 0x10CECCu;
label_10cecc:
    // 0x10cecc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10CECCu;
    {
        const bool branch_taken_0x10cecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CECCu;
        // 0x10ced0: 0xae000828  sw          $zero, 0x828($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cecc) {
            ctx->pc = 0x10CED8u;
            goto label_10ced8;
        }
    }
    ctx->pc = 0x10CED4u;
label_10ced4:
    // 0x10ced4: 0xae020828  sw          $v0, 0x828($s0)
    ctx->pc = 0x10ced4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 2));
label_10ced8:
    // 0x10ced8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x10ced8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10cedc: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x10cedcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x10cee0: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x10cee0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x10cee4: 0xc042ee0  jal         func_10BB80
    ctx->pc = 0x10CEE4u;
    SET_GPR_U32(ctx, 31, 0x10CEECu);
    ctx->pc = 0x10CEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CEE4u;
    // 0x10cee8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BB80u, 0x10CEE4u, 0x10CEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CEECu;
label_10ceec:
    // 0x10ceec: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10ceecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10cef0: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x10cef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x10cef4: 0x0  nop
    ctx->pc = 0x10cef4u;
    // NOP
label_10cef8:
    // 0x10cef8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10cef8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000b000
    // 0x10cefc: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x10cefcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x10cf00: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10cf00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10cf04: 0x0  nop
    ctx->pc = 0x10cf04u;
    // NOP
    // 0x10cf08: 0x0  nop
    ctx->pc = 0x10cf08u;
    // NOP
    // 0x10cf0c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10CF0Cu;
    {
        const bool branch_taken_0x10cf0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10cf0c) {
            ctx->pc = 0x10CEF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10cef8;
        }
    }
    ctx->pc = 0x10CF14u;
    // 0x10cf14: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10cf14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10cf18: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x10cf18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x10cf1c: 0x0  nop
    ctx->pc = 0x10cf1cu;
    // NOP
label_10cf20:
    // 0x10cf20: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10cf20u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10002010
    // 0x10cf24: 0x0  nop
    ctx->pc = 0x10cf24u;
    // NOP
    // 0x10cf28: 0x0  nop
    ctx->pc = 0x10cf28u;
    // NOP
    // 0x10cf2c: 0x0  nop
    ctx->pc = 0x10cf2cu;
    // NOP
    // 0x10cf30: 0x0  nop
    ctx->pc = 0x10cf30u;
    // NOP
    // 0x10cf34: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10CF34u;
    {
        const bool branch_taken_0x10cf34 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x10cf34) {
            ctx->pc = 0x10CF20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10cf20;
        }
    }
    ctx->pc = 0x10CF3Cu;
    // 0x10cf3c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10CF3Cu;
    {
        const bool branch_taken_0x10cf3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10cf3c) {
            ctx->pc = 0x10CF54u;
            goto label_10cf54;
        }
    }
    ctx->pc = 0x10CF44u;
label_10cf44:
    // 0x10cf44: 0x8e0500ec  lw          $a1, 0xEC($s0)
    ctx->pc = 0x10cf44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x10cf48: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x10cf48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf4c: 0xc0432aa  jal         func_10CAA8
    ctx->pc = 0x10CF4Cu;
    SET_GPR_U32(ctx, 31, 0x10CF54u);
    ctx->pc = 0x10CF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CF4Cu;
    // 0x10cf50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CAA8u, 0x10CF4Cu, 0x10CF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CF54u;
label_10cf54:
    // 0x10cf54: 0xc043ae4  jal         func_10EB90
    ctx->pc = 0x10CF54u;
    SET_GPR_U32(ctx, 31, 0x10CF5Cu);
    ctx->pc = 0x10CF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CF54u;
    // 0x10cf58: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EB90u, 0x10CF54u, 0x10CF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CF5Cu;
label_10cf5c:
    // 0x10cf5c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x10cf5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf60: 0xc043744  jal         func_10DD10
    ctx->pc = 0x10CF60u;
    SET_GPR_U32(ctx, 31, 0x10CF68u);
    ctx->pc = 0x10CF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CF60u;
    // 0x10cf64: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DD10u, 0x10CF60u, 0x10CF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CF68u;
label_10cf68:
    // 0x10cf68: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x10CF68u;
    {
        const bool branch_taken_0x10cf68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CF68u;
        // 0x10cf6c: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cf68) {
            ctx->pc = 0x10D108u;
            goto label_10d108;
        }
    }
    ctx->pc = 0x10CF70u;
label_10cf70:
    // 0x10cf70: 0xc046028  jal         func_1180A0
    ctx->pc = 0x10CF70u;
    SET_GPR_U32(ctx, 31, 0x10CF78u);
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x10CF70u, 0x10CF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CF78u;
label_10cf78:
    // 0x10cf78: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x10cf78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10cf7c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10cf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10cf80: 0x3463b410  ori         $v1, $v1, 0xB410
    ctx->pc = 0x10cf80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46096);
    // 0x10cf84: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x10cf84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x10cf88: 0xb12824  and         $a1, $a1, $s1
    ctx->pc = 0x10cf88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 17));
    // 0x10cf8c: 0x34c6b420  ori         $a2, $a2, 0xB420
    ctx->pc = 0x10cf8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)46112);
    // 0x10cf90: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x10cf90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x10cf94: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10cf94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10cf98: 0x3484b400  ori         $a0, $a0, 0xB400
    ctx->pc = 0x10cf98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46080);
    // 0x10cf9c: 0x24050101  addiu       $a1, $zero, 0x101
    ctx->pc = 0x10cf9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x10cfa0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x10cfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10cfa4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x10cfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x10cfa8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10CFA8u;
    {
        const bool branch_taken_0x10cfa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CFA8u;
        // 0x10cfac: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cfa8) {
            ctx->pc = 0x10CFB8u;
            goto label_10cfb8;
        }
    }
    ctx->pc = 0x10CFB0u;
    // 0x10cfb0: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x10CFB0u;
    SET_GPR_U32(ctx, 31, 0x10CFB8u);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x10CFB0u, 0x10CFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CFB8u;
label_10cfb8:
    // 0x10cfb8: 0x12a0004e  beqz        $s5, . + 4 + (0x4E << 2)
    ctx->pc = 0x10CFB8u;
    {
        const bool branch_taken_0x10cfb8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CFB8u;
        // 0x10cfbc: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cfb8) {
            ctx->pc = 0x10D0F4u;
            goto label_10d0f4;
        }
    }
    ctx->pc = 0x10CFC0u;
    // 0x10cfc0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10cfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10cfc4: 0x8e1100ec  lw          $s1, 0xEC($s0)
    ctx->pc = 0x10cfc4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x10cfc8: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x10cfc8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10cfcc: 0x139180  sll         $s2, $s3, 6
    ctx->pc = 0x10cfccu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x10cfd0: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x10cfd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x10cfd4: 0x0  nop
    ctx->pc = 0x10cfd4u;
    // NOP
label_10cfd8:
    // 0x10cfd8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10cfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10cfdc: 0x0  nop
    ctx->pc = 0x10cfdcu;
    // NOP
    // 0x10cfe0: 0x0  nop
    ctx->pc = 0x10cfe0u;
    // NOP
    // 0x10cfe4: 0x0  nop
    ctx->pc = 0x10cfe4u;
    // NOP
    // 0x10cfe8: 0x0  nop
    ctx->pc = 0x10cfe8u;
    // NOP
    // 0x10cfec: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10CFECu;
    {
        const bool branch_taken_0x10cfec = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x10cfec) {
            ctx->pc = 0x10CFD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10cfd8;
        }
    }
    ctx->pc = 0x10CFF4u;
    // 0x10cff4: 0xc046028  jal         func_1180A0
    ctx->pc = 0x10CFF4u;
    SET_GPR_U32(ctx, 31, 0x10CFFCu);
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x10CFF4u, 0x10CFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CFFCu;
label_10cffc:
    // 0x10cffc: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x10cffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x10d000: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x10d000u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10d004: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10d004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x10d008: 0x34a5b010  ori         $a1, $a1, 0xB010
    ctx->pc = 0x10d008u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45072);
    // 0x10d00c: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x10d00cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x10d010: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10d010u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10d014: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x10d014u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x10d018: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x10d018u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45088);
    // 0x10d01c: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x10d01cu;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 18)); // MMIO: 0x1000b020
    // 0x10d020: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10d020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10d024: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x10d024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x10d028: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x10d028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x10d02c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x10d02cu;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 4)); // MMIO: 0x1000b000
    // 0x10d030: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10D030u;
    {
        const bool branch_taken_0x10d030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D030u;
        // 0x10d034: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d030) {
            ctx->pc = 0x10D044u;
            goto label_10d044;
        }
    }
    ctx->pc = 0x10D038u;
    // 0x10d038: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x10D038u;
    SET_GPR_U32(ctx, 31, 0x10D040u);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x10D038u, 0x10D040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D040u;
label_10d040:
    // 0x10d040: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x10d040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_10d044:
    // 0x10d044: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10d044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10d048: 0x2631825  or          $v1, $s3, $v1
    ctx->pc = 0x10d048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    // 0x10d04c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x10d04cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x10d050: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10d050u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x10d054: 0x3c04f000  lui         $a0, 0xF000
    ctx->pc = 0x10d054u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61440 << 16));
    // 0x10d058: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x10d058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x10d05c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x10d05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x10d060: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10D060u;
    {
        const bool branch_taken_0x10d060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10D064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D060u;
        // 0x10d064: 0xae03082c  sw          $v1, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d060) {
            ctx->pc = 0x10D07Cu;
            goto label_10d07c;
        }
    }
    ctx->pc = 0x10D068u;
    // 0x10d068: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x10d068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x10d06c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10D06Cu;
    {
        const bool branch_taken_0x10d06c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10D070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D06Cu;
        // 0x10d070: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d06c) {
            ctx->pc = 0x10D07Cu;
            goto label_10d07c;
        }
    }
    ctx->pc = 0x10D074u;
    // 0x10d074: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10D074u;
    {
        const bool branch_taken_0x10d074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10D078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D074u;
        // 0x10d078: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d074) {
            ctx->pc = 0x10D084u;
            goto label_10d084;
        }
    }
    ctx->pc = 0x10D07Cu;
label_10d07c:
    // 0x10d07c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10D07Cu;
    {
        const bool branch_taken_0x10d07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D07Cu;
        // 0x10d080: 0xae000828  sw          $zero, 0x828($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d07c) {
            ctx->pc = 0x10D088u;
            goto label_10d088;
        }
    }
    ctx->pc = 0x10D084u;
label_10d084:
    // 0x10d084: 0xae020828  sw          $v0, 0x828($s0)
    ctx->pc = 0x10d084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 2));
label_10d088:
    // 0x10d088: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x10d088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10d08c: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x10d08cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x10d090: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x10d090u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x10d094: 0xc042ee0  jal         func_10BB80
    ctx->pc = 0x10D094u;
    SET_GPR_U32(ctx, 31, 0x10D09Cu);
    ctx->pc = 0x10D098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D094u;
    // 0x10d098: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BB80u, 0x10D094u, 0x10D09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D09Cu;
label_10d09c:
    // 0x10d09c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10d09cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10d0a0: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x10d0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x10d0a4: 0x0  nop
    ctx->pc = 0x10d0a4u;
    // NOP
label_10d0a8:
    // 0x10d0a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10d0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000b000
    // 0x10d0ac: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x10d0acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x10d0b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10d0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10d0b4: 0x0  nop
    ctx->pc = 0x10d0b4u;
    // NOP
    // 0x10d0b8: 0x0  nop
    ctx->pc = 0x10d0b8u;
    // NOP
    // 0x10d0bc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10D0BCu;
    {
        const bool branch_taken_0x10d0bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10d0bc) {
            ctx->pc = 0x10D0A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10d0a8;
        }
    }
    ctx->pc = 0x10D0C4u;
    // 0x10d0c4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10d0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10d0c8: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x10d0c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x10d0cc: 0x0  nop
    ctx->pc = 0x10d0ccu;
    // NOP
label_10d0d0:
    // 0x10d0d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10d0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10002010
    // 0x10d0d4: 0x0  nop
    ctx->pc = 0x10d0d4u;
    // NOP
    // 0x10d0d8: 0x0  nop
    ctx->pc = 0x10d0d8u;
    // NOP
    // 0x10d0dc: 0x0  nop
    ctx->pc = 0x10d0dcu;
    // NOP
    // 0x10d0e0: 0x0  nop
    ctx->pc = 0x10d0e0u;
    // NOP
    // 0x10d0e4: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10D0E4u;
    {
        const bool branch_taken_0x10d0e4 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x10d0e4) {
            ctx->pc = 0x10D0D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10d0d0;
        }
    }
    ctx->pc = 0x10D0ECu;
    // 0x10d0ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10D0ECu;
    {
        const bool branch_taken_0x10d0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D0ECu;
        // 0x10d0f0: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d0ec) {
            ctx->pc = 0x10D108u;
            goto label_10d108;
        }
    }
    ctx->pc = 0x10D0F4u;
label_10d0f4:
    // 0x10d0f4: 0x8e0500ec  lw          $a1, 0xEC($s0)
    ctx->pc = 0x10d0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x10d0f8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x10d0f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d0fc: 0xc0432aa  jal         func_10CAA8
    ctx->pc = 0x10D0FCu;
    SET_GPR_U32(ctx, 31, 0x10D104u);
    ctx->pc = 0x10D100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D0FCu;
    // 0x10d100: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CAA8u, 0x10D0FCu, 0x10D104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D104u;
label_10d104:
    // 0x10d104: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x10d104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
label_10d108:
    // 0x10d108: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10d108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10d10c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x10d10cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x10d110: 0xc042ee0  jal         func_10BB80
    ctx->pc = 0x10D110u;
    SET_GPR_U32(ctx, 31, 0x10D118u);
    ctx->pc = 0x10D114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D110u;
    // 0x10d114: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BB80u, 0x10D110u, 0x10D118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D118u;
label_10d118:
    // 0x10d118: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x10d118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x10d11c: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x10d11cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x10d120: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x10d120u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x10d124: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x10d124u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10d128: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x10d128u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10d12c: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x10d12cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10d130: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x10d130u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10d134: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x10d134u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10d138: 0x3e00008  jr          $ra
    ctx->pc = 0x10D138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D138u;
        // 0x10d13c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D140u;
}
