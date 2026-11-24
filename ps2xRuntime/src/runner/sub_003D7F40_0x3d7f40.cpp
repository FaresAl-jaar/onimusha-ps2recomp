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

// Function: sub_003D7F40
// Address: 0x3d7f40 - 0x3d8108
void sub_003D7F40_0x3d7f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D7F40_0x3d7f40");
#endif

    switch (ctx->pc) {
        case 0x3d7f40u: goto label_3d7f40;
        case 0x3d7f44u: goto label_3d7f44;
        case 0x3d7f48u: goto label_3d7f48;
        case 0x3d7f4cu: goto label_3d7f4c;
        case 0x3d7f50u: goto label_3d7f50;
        case 0x3d7f54u: goto label_3d7f54;
        case 0x3d7f58u: goto label_3d7f58;
        case 0x3d7f5cu: goto label_3d7f5c;
        case 0x3d7f60u: goto label_3d7f60;
        case 0x3d7f64u: goto label_3d7f64;
        case 0x3d7f68u: goto label_3d7f68;
        case 0x3d7f6cu: goto label_3d7f6c;
        case 0x3d7f70u: goto label_3d7f70;
        case 0x3d7f74u: goto label_3d7f74;
        case 0x3d7f78u: goto label_3d7f78;
        case 0x3d7f7cu: goto label_3d7f7c;
        case 0x3d7f80u: goto label_3d7f80;
        case 0x3d7f84u: goto label_3d7f84;
        case 0x3d7f88u: goto label_3d7f88;
        case 0x3d7f8cu: goto label_3d7f8c;
        case 0x3d7f90u: goto label_3d7f90;
        case 0x3d7f94u: goto label_3d7f94;
        case 0x3d7f98u: goto label_3d7f98;
        case 0x3d7f9cu: goto label_3d7f9c;
        case 0x3d7fa0u: goto label_3d7fa0;
        case 0x3d7fa4u: goto label_3d7fa4;
        case 0x3d7fa8u: goto label_3d7fa8;
        case 0x3d7facu: goto label_3d7fac;
        case 0x3d7fb0u: goto label_3d7fb0;
        case 0x3d7fb4u: goto label_3d7fb4;
        case 0x3d7fb8u: goto label_3d7fb8;
        case 0x3d7fbcu: goto label_3d7fbc;
        case 0x3d7fc0u: goto label_3d7fc0;
        case 0x3d7fc4u: goto label_3d7fc4;
        case 0x3d7fc8u: goto label_3d7fc8;
        case 0x3d7fccu: goto label_3d7fcc;
        case 0x3d7fd0u: goto label_3d7fd0;
        case 0x3d7fd4u: goto label_3d7fd4;
        case 0x3d7fd8u: goto label_3d7fd8;
        case 0x3d7fdcu: goto label_3d7fdc;
        case 0x3d7fe0u: goto label_3d7fe0;
        case 0x3d7fe4u: goto label_3d7fe4;
        case 0x3d7fe8u: goto label_3d7fe8;
        case 0x3d7fecu: goto label_3d7fec;
        case 0x3d7ff0u: goto label_3d7ff0;
        case 0x3d7ff4u: goto label_3d7ff4;
        case 0x3d7ff8u: goto label_3d7ff8;
        case 0x3d7ffcu: goto label_3d7ffc;
        case 0x3d8000u: goto label_3d8000;
        case 0x3d8004u: goto label_3d8004;
        case 0x3d8008u: goto label_3d8008;
        case 0x3d800cu: goto label_3d800c;
        case 0x3d8010u: goto label_3d8010;
        case 0x3d8014u: goto label_3d8014;
        case 0x3d8018u: goto label_3d8018;
        case 0x3d801cu: goto label_3d801c;
        case 0x3d8020u: goto label_3d8020;
        case 0x3d8024u: goto label_3d8024;
        case 0x3d8028u: goto label_3d8028;
        case 0x3d802cu: goto label_3d802c;
        case 0x3d8030u: goto label_3d8030;
        case 0x3d8034u: goto label_3d8034;
        case 0x3d8038u: goto label_3d8038;
        case 0x3d803cu: goto label_3d803c;
        case 0x3d8040u: goto label_3d8040;
        case 0x3d8044u: goto label_3d8044;
        case 0x3d8048u: goto label_3d8048;
        case 0x3d804cu: goto label_3d804c;
        case 0x3d8050u: goto label_3d8050;
        case 0x3d8054u: goto label_3d8054;
        case 0x3d8058u: goto label_3d8058;
        case 0x3d805cu: goto label_3d805c;
        case 0x3d8060u: goto label_3d8060;
        case 0x3d8064u: goto label_3d8064;
        case 0x3d8068u: goto label_3d8068;
        case 0x3d806cu: goto label_3d806c;
        case 0x3d8070u: goto label_3d8070;
        case 0x3d8074u: goto label_3d8074;
        case 0x3d8078u: goto label_3d8078;
        case 0x3d807cu: goto label_3d807c;
        case 0x3d8080u: goto label_3d8080;
        case 0x3d8084u: goto label_3d8084;
        case 0x3d8088u: goto label_3d8088;
        case 0x3d808cu: goto label_3d808c;
        case 0x3d8090u: goto label_3d8090;
        case 0x3d8094u: goto label_3d8094;
        case 0x3d8098u: goto label_3d8098;
        case 0x3d809cu: goto label_3d809c;
        case 0x3d80a0u: goto label_3d80a0;
        case 0x3d80a4u: goto label_3d80a4;
        case 0x3d80a8u: goto label_3d80a8;
        case 0x3d80acu: goto label_3d80ac;
        case 0x3d80b0u: goto label_3d80b0;
        case 0x3d80b4u: goto label_3d80b4;
        case 0x3d80b8u: goto label_3d80b8;
        case 0x3d80bcu: goto label_3d80bc;
        case 0x3d80c0u: goto label_3d80c0;
        case 0x3d80c4u: goto label_3d80c4;
        case 0x3d80c8u: goto label_3d80c8;
        case 0x3d80ccu: goto label_3d80cc;
        case 0x3d80d0u: goto label_3d80d0;
        case 0x3d80d4u: goto label_3d80d4;
        case 0x3d80d8u: goto label_3d80d8;
        case 0x3d80dcu: goto label_3d80dc;
        case 0x3d80e0u: goto label_3d80e0;
        case 0x3d80e4u: goto label_3d80e4;
        case 0x3d80e8u: goto label_3d80e8;
        case 0x3d80ecu: goto label_3d80ec;
        case 0x3d80f0u: goto label_3d80f0;
        case 0x3d80f4u: goto label_3d80f4;
        case 0x3d80f8u: goto label_3d80f8;
        case 0x3d80fcu: goto label_3d80fc;
        case 0x3d8100u: goto label_3d8100;
        case 0x3d8104u: goto label_3d8104;
        default: break;
    }

    ctx->pc = 0x3d7f40u;

label_3d7f40:
    // 0x3d7f40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3d7f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3d7f44:
    // 0x3d7f44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d7f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3d7f48:
    // 0x3d7f48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d7f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d7f4c:
    // 0x3d7f4c: 0xc0a4a1c  jal         func_292870
label_3d7f50:
    if (ctx->pc == 0x3D7F50u) {
        ctx->pc = 0x3D7F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7F4Cu;
        // 0x3d7f50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7F54u;
        goto label_3d7f54;
    }
    ctx->pc = 0x3D7F4Cu;
    SET_GPR_U32(ctx, 31, 0x3D7F54u);
    ctx->pc = 0x3D7F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7F4Cu;
    // 0x3d7f50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292870u, 0x3D7F4Cu, 0x3D7F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7F54u;
label_3d7f54:
    // 0x3d7f54: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x3d7f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_3d7f58:
    // 0x3d7f58: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_3d7f5c:
    if (ctx->pc == 0x3D7F5Cu) {
        ctx->pc = 0x3D7F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7F58u;
        // 0x3d7f5c: 0x3c03457a  lui         $v1, 0x457A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17786 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7F60u;
        goto label_3d7f60;
    }
    ctx->pc = 0x3D7F58u;
    {
        const bool branch_taken_0x3d7f58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7F58u;
        // 0x3d7f5c: 0x3c03457a  lui         $v1, 0x457A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17786 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7f58) {
            ctx->pc = 0x3D7F78u;
            goto label_3d7f78;
        }
    }
    ctx->pc = 0x3D7F60u;
label_3d7f60:
    // 0x3d7f60: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x3d7f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_3d7f64:
    // 0x3d7f64: 0xac830084  sw          $v1, 0x84($a0)
    ctx->pc = 0x3d7f64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
label_3d7f68:
    // 0x3d7f68: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x3d7f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_3d7f6c:
    // 0x3d7f6c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3d7f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d7f70:
    // 0x3d7f70: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3d7f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3d7f74:
    // 0x3d7f74: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3d7f74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_3d7f78:
    // 0x3d7f78: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x3d7f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
label_3d7f7c:
    // 0x3d7f7c: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x3d7f7cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 27332)));
label_3d7f80:
    // 0x3d7f80: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3d7f80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_3d7f84:
    // 0x3d7f84: 0x2463e520  addiu       $v1, $v1, -0x1AE0
    ctx->pc = 0x3d7f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960416));
label_3d7f88:
    // 0x3d7f88: 0xae032bdc  sw          $v1, 0x2BDC($s0)
    ctx->pc = 0x3d7f88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11228), GPR_U32(ctx, 3));
label_3d7f8c:
    // 0x3d7f8c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3d7f8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_3d7f90:
    // 0x3d7f90: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_3d7f94:
    if (ctx->pc == 0x3D7F94u) {
        ctx->pc = 0x3D7F98u;
        goto label_3d7f98;
    }
    ctx->pc = 0x3D7F90u;
    {
        const bool branch_taken_0x3d7f90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3d7f90) {
            ctx->pc = 0x3D7FA0u;
            goto label_3d7fa0;
        }
    }
    ctx->pc = 0x3D7F98u;
label_3d7f98:
    // 0x3d7f98: 0xae032bdc  sw          $v1, 0x2BDC($s0)
    ctx->pc = 0x3d7f98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11228), GPR_U32(ctx, 3));
label_3d7f9c:
    // 0x3d7f9c: 0x0  nop
    ctx->pc = 0x3d7f9cu;
    // NOP
label_3d7fa0:
    // 0x3d7fa0: 0xc0f617c  jal         func_3D85F0
label_3d7fa4:
    if (ctx->pc == 0x3D7FA4u) {
        ctx->pc = 0x3D7FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7FA0u;
        // 0x3d7fa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7FA8u;
        goto label_3d7fa8;
    }
    ctx->pc = 0x3D7FA0u;
    SET_GPR_U32(ctx, 31, 0x3D7FA8u);
    ctx->pc = 0x3D7FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7FA0u;
    // 0x3d7fa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D85F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D85F0u, 0x3D7FA0u, 0x3D7FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7FA8u;
label_3d7fa8:
    // 0x3d7fa8: 0x96020030  lhu         $v0, 0x30($s0)
    ctx->pc = 0x3d7fa8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
label_3d7fac:
    // 0x3d7fac: 0x26042b20  addiu       $a0, $s0, 0x2B20
    ctx->pc = 0x3d7facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11040));
label_3d7fb0:
    // 0x3d7fb0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3d7fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d7fb4:
    // 0x3d7fb4: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x3d7fb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_3d7fb8:
    // 0x3d7fb8: 0x2408003c  addiu       $t0, $zero, 0x3C
    ctx->pc = 0x3d7fb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3d7fbc:
    // 0x3d7fbc: 0x3042ffbf  andi        $v0, $v0, 0xFFBF
    ctx->pc = 0x3d7fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65471);
label_3d7fc0:
    // 0x3d7fc0: 0xa6020030  sh          $v0, 0x30($s0)
    ctx->pc = 0x3d7fc0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 2));
label_3d7fc4:
    // 0x3d7fc4: 0x92022bdb  lbu         $v0, 0x2BDB($s0)
    ctx->pc = 0x3d7fc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11227)));
label_3d7fc8:
    // 0x3d7fc8: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3d7fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_3d7fcc:
    // 0x3d7fcc: 0xa2022bdb  sb          $v0, 0x2BDB($s0)
    ctx->pc = 0x3d7fccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11227), (uint8_t)GPR_U32(ctx, 2));
label_3d7fd0:
    // 0x3d7fd0: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x3d7fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_3d7fd4:
    // 0x3d7fd4: 0xc0f7334  jal         func_3DCCD0
label_3d7fd8:
    if (ctx->pc == 0x3D7FD8u) {
        ctx->pc = 0x3D7FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7FD4u;
        // 0x3d7fd8: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7FDCu;
        goto label_3d7fdc;
    }
    ctx->pc = 0x3D7FD4u;
    SET_GPR_U32(ctx, 31, 0x3D7FDCu);
    ctx->pc = 0x3D7FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7FD4u;
    // 0x3d7fd8: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DCCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DCCD0u, 0x3D7FD4u, 0x3D7FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7FDCu;
label_3d7fdc:
    // 0x3d7fdc: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3d7fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3d7fe0:
    // 0x3d7fe0: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x3d7fe0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
label_3d7fe4:
    // 0x3d7fe4: 0x2442e5a0  addiu       $v0, $v0, -0x1A60
    ctx->pc = 0x3d7fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960544));
label_3d7fe8:
    // 0x3d7fe8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3d7fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3d7fec:
    // 0x3d7fec: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x3d7fecu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3d7ff0:
    // 0x3d7ff0: 0x24e7e5b0  addiu       $a3, $a3, -0x1A50
    ctx->pc = 0x3d7ff0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960560));
label_3d7ff4:
    // 0x3d7ff4: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x3d7ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d7ff8:
    // 0x3d7ff8: 0x26042b20  addiu       $a0, $s0, 0x2B20
    ctx->pc = 0x3d7ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11040));
label_3d7ffc:
    // 0x3d7ffc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d7ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d8000:
    // 0x3d8000: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x3d8000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_3d8004:
    // 0x3d8004: 0x7cc80000  sq          $t0, 0x0($a2)
    ctx->pc = 0x3d8004u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 8));
label_3d8008:
    // 0x3d8008: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3d8008u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d800c:
    // 0x3d800c: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x3d800cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_3d8010:
    // 0x3d8010: 0xc0f7678  jal         func_3DD9E0
label_3d8014:
    if (ctx->pc == 0x3D8014u) {
        ctx->pc = 0x3D8014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8010u;
        // 0x3d8014: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8018u;
        goto label_3d8018;
    }
    ctx->pc = 0x3D8010u;
    SET_GPR_U32(ctx, 31, 0x3D8018u);
    ctx->pc = 0x3D8014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8010u;
    // 0x3d8014: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD9E0u, 0x3D8010u, 0x3D8018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8018u;
label_3d8018:
    // 0x3d8018: 0x3c0243af  lui         $v0, 0x43AF
    ctx->pc = 0x3d8018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17327 << 16));
label_3d801c:
    // 0x3d801c: 0x26042b20  addiu       $a0, $s0, 0x2B20
    ctx->pc = 0x3d801cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11040));
label_3d8020:
    // 0x3d8020: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3d8020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d8024:
    // 0x3d8024: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3d8024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d8028:
    // 0x3d8028: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x3d8028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3d802c:
    // 0x3d802c: 0xc0f7688  jal         func_3DDA20
label_3d8030:
    if (ctx->pc == 0x3D8030u) {
        ctx->pc = 0x3D8030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D802Cu;
        // 0x3d8030: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8034u;
        goto label_3d8034;
    }
    ctx->pc = 0x3D802Cu;
    SET_GPR_U32(ctx, 31, 0x3D8034u);
    ctx->pc = 0x3D8030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D802Cu;
    // 0x3d8030: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DDA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DDA20u, 0x3D802Cu, 0x3D8034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8034u;
label_3d8034:
    // 0x3d8034: 0x92032b3a  lbu         $v1, 0x2B3A($s0)
    ctx->pc = 0x3d8034u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11066)));
label_3d8038:
    // 0x3d8038: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x3d8038u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3d803c:
    // 0x3d803c: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
label_3d8040:
    if (ctx->pc == 0x3D8040u) {
        ctx->pc = 0x3D8040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D803Cu;
        // 0x3d8040: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8044u;
        goto label_3d8044;
    }
    ctx->pc = 0x3D803Cu;
    {
        const bool branch_taken_0x3d803c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D803Cu;
        // 0x3d8040: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d803c) {
            ctx->pc = 0x3D80C0u;
            goto label_3d80c0;
        }
    }
    ctx->pc = 0x3D8044u;
label_3d8044:
    // 0x3d8044: 0x3c044248  lui         $a0, 0x4248
    ctx->pc = 0x3d8044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16968 << 16));
label_3d8048:
    // 0x3d8048: 0x2cc10003  sltiu       $at, $a2, 0x3
    ctx->pc = 0x3d8048u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_3d804c:
    // 0x3d804c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_3d8050:
    if (ctx->pc == 0x3D8050u) {
        ctx->pc = 0x3D8050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D804Cu;
        // 0x3d8050: 0x30c500ff  andi        $a1, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8054u;
        goto label_3d8054;
    }
    ctx->pc = 0x3D804Cu;
    {
        const bool branch_taken_0x3d804c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D804Cu;
        // 0x3d8050: 0x30c500ff  andi        $a1, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d804c) {
            ctx->pc = 0x3D8080u;
            goto label_3d8080;
        }
    }
    ctx->pc = 0x3D8054u;
label_3d8054:
    // 0x3d8054: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x3d8054u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3d8058:
    // 0x3d8058: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
label_3d805c:
    if (ctx->pc == 0x3D805Cu) {
        ctx->pc = 0x3D8060u;
        goto label_3d8060;
    }
    ctx->pc = 0x3D8058u;
    {
        const bool branch_taken_0x3d8058 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8058) {
            ctx->pc = 0x3D80A8u;
            goto label_3d80a8;
        }
    }
    ctx->pc = 0x3D8060u;
label_3d8060:
    // 0x3d8060: 0x8e022b20  lw          $v0, 0x2B20($s0)
    ctx->pc = 0x3d8060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11040)));
label_3d8064:
    // 0x3d8064: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3d8064u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3d8068:
    // 0x3d8068: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3d8068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3d806c:
    // 0x3d806c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3d806cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3d8070:
    // 0x3d8070: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d8070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d8074:
    // 0x3d8074: 0x1000000c  b           . + 4 + (0xC << 2)
label_3d8078:
    if (ctx->pc == 0x3D8078u) {
        ctx->pc = 0x3D8078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8074u;
        // 0x3d8078: 0xac400048  sw          $zero, 0x48($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D807Cu;
        goto label_3d807c;
    }
    ctx->pc = 0x3D8074u;
    {
        const bool branch_taken_0x3d8074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8074u;
        // 0x3d8078: 0xac400048  sw          $zero, 0x48($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8074) {
            ctx->pc = 0x3D80A8u;
            goto label_3d80a8;
        }
    }
    ctx->pc = 0x3D807Cu;
label_3d807c:
    // 0x3d807c: 0x0  nop
    ctx->pc = 0x3d807cu;
    // NOP
label_3d8080:
    // 0x3d8080: 0x30c500ff  andi        $a1, $a2, 0xFF
    ctx->pc = 0x3d8080u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_3d8084:
    // 0x3d8084: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x3d8084u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3d8088:
    // 0x3d8088: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_3d808c:
    if (ctx->pc == 0x3D808Cu) {
        ctx->pc = 0x3D8090u;
        goto label_3d8090;
    }
    ctx->pc = 0x3D8088u;
    {
        const bool branch_taken_0x3d8088 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8088) {
            ctx->pc = 0x3D80A8u;
            goto label_3d80a8;
        }
    }
    ctx->pc = 0x3D8090u;
label_3d8090:
    // 0x3d8090: 0x8e022b20  lw          $v0, 0x2B20($s0)
    ctx->pc = 0x3d8090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11040)));
label_3d8094:
    // 0x3d8094: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3d8094u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3d8098:
    // 0x3d8098: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3d8098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3d809c:
    // 0x3d809c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3d809cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3d80a0:
    // 0x3d80a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d80a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d80a4:
    // 0x3d80a4: 0xac440048  sw          $a0, 0x48($v0)
    ctx->pc = 0x3d80a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 4));
label_3d80a8:
    // 0x3d80a8: 0x92032b3a  lbu         $v1, 0x2B3A($s0)
    ctx->pc = 0x3d80a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11066)));
label_3d80ac:
    // 0x3d80ac: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3d80acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3d80b0:
    // 0x3d80b0: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x3d80b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3d80b4:
    // 0x3d80b4: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
label_3d80b8:
    if (ctx->pc == 0x3D80B8u) {
        ctx->pc = 0x3D80BCu;
        goto label_3d80bc;
    }
    ctx->pc = 0x3D80B4u;
    {
        const bool branch_taken_0x3d80b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d80b4) {
            ctx->pc = 0x3D8048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d8048;
        }
    }
    ctx->pc = 0x3D80BCu;
label_3d80bc:
    // 0x3d80bc: 0x0  nop
    ctx->pc = 0x3d80bcu;
    // NOP
label_3d80c0:
    // 0x3d80c0: 0xc0f72a0  jal         func_3DCA80
label_3d80c4:
    if (ctx->pc == 0x3D80C4u) {
        ctx->pc = 0x3D80C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D80C0u;
        // 0x3d80c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D80C8u;
        goto label_3d80c8;
    }
    ctx->pc = 0x3D80C0u;
    SET_GPR_U32(ctx, 31, 0x3D80C8u);
    ctx->pc = 0x3D80C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D80C0u;
    // 0x3d80c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DCA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DCA80u, 0x3D80C0u, 0x3D80C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D80C8u;
label_3d80c8:
    // 0x3d80c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3d80c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d80cc:
    // 0x3d80cc: 0x2404005e  addiu       $a0, $zero, 0x5E
    ctx->pc = 0x3d80ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
label_3d80d0:
    // 0x3d80d0: 0xc0b2ebc  jal         func_2CBAF0
label_3d80d4:
    if (ctx->pc == 0x3D80D4u) {
        ctx->pc = 0x3D80D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D80D0u;
        // 0x3d80d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D80D8u;
        goto label_3d80d8;
    }
    ctx->pc = 0x3D80D0u;
    SET_GPR_U32(ctx, 31, 0x3D80D8u);
    ctx->pc = 0x3D80D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D80D0u;
    // 0x3d80d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBAF0u, 0x3D80D0u, 0x3D80D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D80D8u;
label_3d80d8:
    // 0x3d80d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d80d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d80dc:
    // 0x3d80dc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_3d80e0:
    if (ctx->pc == 0x3D80E0u) {
        ctx->pc = 0x3D80E4u;
        goto label_3d80e4;
    }
    ctx->pc = 0x3D80DCu;
    {
        const bool branch_taken_0x3d80dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d80dc) {
            ctx->pc = 0x3D80F8u;
            goto label_3d80f8;
        }
    }
    ctx->pc = 0x3D80E4u;
label_3d80e4:
    // 0x3d80e4: 0x8c9904d4  lw          $t9, 0x4D4($a0)
    ctx->pc = 0x3d80e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1236)));
label_3d80e8:
    // 0x3d80e8: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x3d80e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_3d80ec:
    // 0x3d80ec: 0x320f809  jalr        $t9
label_3d80f0:
    if (ctx->pc == 0x3D80F0u) {
        ctx->pc = 0x3D80F4u;
        goto label_3d80f4;
    }
    ctx->pc = 0x3D80ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D80F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D80ECu, 0x3D80F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D80F4u;
label_3d80f4:
    // 0x3d80f4: 0x0  nop
    ctx->pc = 0x3d80f4u;
    // NOP
label_3d80f8:
    // 0x3d80f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d80f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3d80fc:
    // 0x3d80fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d80fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d8100:
    // 0x3d8100: 0x3e00008  jr          $ra
label_3d8104:
    if (ctx->pc == 0x3D8104u) {
        ctx->pc = 0x3D8104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8100u;
        // 0x3d8104: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8108u;
        goto label_fallthrough_0x3d8100;
    }
    ctx->pc = 0x3D8100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8100u;
        // 0x3d8104: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d8100:
    ctx->pc = 0x3D8108u;
}
