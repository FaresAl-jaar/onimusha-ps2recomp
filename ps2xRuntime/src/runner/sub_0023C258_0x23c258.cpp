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

// Function: sub_0023C258
// Address: 0x23c258 - 0x23c3fc
void sub_0023C258_0x23c258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C258_0x23c258");
#endif

    switch (ctx->pc) {
        case 0x23c258u: goto label_23c258;
        case 0x23c25cu: goto label_23c25c;
        case 0x23c260u: goto label_23c260;
        case 0x23c264u: goto label_23c264;
        case 0x23c268u: goto label_23c268;
        case 0x23c26cu: goto label_23c26c;
        case 0x23c270u: goto label_23c270;
        case 0x23c274u: goto label_23c274;
        case 0x23c278u: goto label_23c278;
        case 0x23c27cu: goto label_23c27c;
        case 0x23c280u: goto label_23c280;
        case 0x23c284u: goto label_23c284;
        case 0x23c288u: goto label_23c288;
        case 0x23c28cu: goto label_23c28c;
        case 0x23c290u: goto label_23c290;
        case 0x23c294u: goto label_23c294;
        case 0x23c298u: goto label_23c298;
        case 0x23c29cu: goto label_23c29c;
        case 0x23c2a0u: goto label_23c2a0;
        case 0x23c2a4u: goto label_23c2a4;
        case 0x23c2a8u: goto label_23c2a8;
        case 0x23c2acu: goto label_23c2ac;
        case 0x23c2b0u: goto label_23c2b0;
        case 0x23c2b4u: goto label_23c2b4;
        case 0x23c2b8u: goto label_23c2b8;
        case 0x23c2bcu: goto label_23c2bc;
        case 0x23c2c0u: goto label_23c2c0;
        case 0x23c2c4u: goto label_23c2c4;
        case 0x23c2c8u: goto label_23c2c8;
        case 0x23c2ccu: goto label_23c2cc;
        case 0x23c2d0u: goto label_23c2d0;
        case 0x23c2d4u: goto label_23c2d4;
        case 0x23c2d8u: goto label_23c2d8;
        case 0x23c2dcu: goto label_23c2dc;
        case 0x23c2e0u: goto label_23c2e0;
        case 0x23c2e4u: goto label_23c2e4;
        case 0x23c2e8u: goto label_23c2e8;
        case 0x23c2ecu: goto label_23c2ec;
        case 0x23c2f0u: goto label_23c2f0;
        case 0x23c2f4u: goto label_23c2f4;
        case 0x23c2f8u: goto label_23c2f8;
        case 0x23c2fcu: goto label_23c2fc;
        case 0x23c300u: goto label_23c300;
        case 0x23c304u: goto label_23c304;
        case 0x23c308u: goto label_23c308;
        case 0x23c30cu: goto label_23c30c;
        case 0x23c310u: goto label_23c310;
        case 0x23c314u: goto label_23c314;
        case 0x23c318u: goto label_23c318;
        case 0x23c31cu: goto label_23c31c;
        case 0x23c320u: goto label_23c320;
        case 0x23c324u: goto label_23c324;
        case 0x23c328u: goto label_23c328;
        case 0x23c32cu: goto label_23c32c;
        case 0x23c330u: goto label_23c330;
        case 0x23c334u: goto label_23c334;
        case 0x23c338u: goto label_23c338;
        case 0x23c33cu: goto label_23c33c;
        case 0x23c340u: goto label_23c340;
        case 0x23c344u: goto label_23c344;
        case 0x23c348u: goto label_23c348;
        case 0x23c34cu: goto label_23c34c;
        case 0x23c350u: goto label_23c350;
        case 0x23c354u: goto label_23c354;
        case 0x23c358u: goto label_23c358;
        case 0x23c35cu: goto label_23c35c;
        case 0x23c360u: goto label_23c360;
        case 0x23c364u: goto label_23c364;
        case 0x23c368u: goto label_23c368;
        case 0x23c36cu: goto label_23c36c;
        case 0x23c370u: goto label_23c370;
        case 0x23c374u: goto label_23c374;
        case 0x23c378u: goto label_23c378;
        case 0x23c37cu: goto label_23c37c;
        case 0x23c380u: goto label_23c380;
        case 0x23c384u: goto label_23c384;
        case 0x23c388u: goto label_23c388;
        case 0x23c38cu: goto label_23c38c;
        case 0x23c390u: goto label_23c390;
        case 0x23c394u: goto label_23c394;
        case 0x23c398u: goto label_23c398;
        case 0x23c39cu: goto label_23c39c;
        case 0x23c3a0u: goto label_23c3a0;
        case 0x23c3a4u: goto label_23c3a4;
        case 0x23c3a8u: goto label_23c3a8;
        case 0x23c3acu: goto label_23c3ac;
        case 0x23c3b0u: goto label_23c3b0;
        case 0x23c3b4u: goto label_23c3b4;
        case 0x23c3b8u: goto label_23c3b8;
        case 0x23c3bcu: goto label_23c3bc;
        case 0x23c3c0u: goto label_23c3c0;
        case 0x23c3c4u: goto label_23c3c4;
        case 0x23c3c8u: goto label_23c3c8;
        case 0x23c3ccu: goto label_23c3cc;
        case 0x23c3d0u: goto label_23c3d0;
        case 0x23c3d4u: goto label_23c3d4;
        case 0x23c3d8u: goto label_23c3d8;
        case 0x23c3dcu: goto label_23c3dc;
        case 0x23c3e0u: goto label_23c3e0;
        case 0x23c3e4u: goto label_23c3e4;
        case 0x23c3e8u: goto label_23c3e8;
        case 0x23c3ecu: goto label_23c3ec;
        case 0x23c3f0u: goto label_23c3f0;
        case 0x23c3f4u: goto label_23c3f4;
        case 0x23c3f8u: goto label_23c3f8;
        default: break;
    }

    ctx->pc = 0x23c258u;

label_23c258:
    // 0x23c258: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x23c258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_23c25c:
    // 0x23c25c: 0x24c3001f  addiu       $v1, $a2, 0x1F
    ctx->pc = 0x23c25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 31));
label_23c260:
    // 0x23c260: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x23c260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_23c264:
    // 0x23c264: 0x28c20000  slti        $v0, $a2, 0x0
    ctx->pc = 0x23c264u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
label_23c268:
    // 0x23c268: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x23c268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_23c26c:
    // 0x23c26c: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x23c26cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_23c270:
    // 0x23c270: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x23c270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_23c274:
    // 0x23c274: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x23c274u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23c278:
    // 0x23c278: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x23c278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_23c27c:
    // 0x23c27c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x23c27cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_23c280:
    // 0x23c280: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x23c280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_23c284:
    // 0x23c284: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23c284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23c288:
    // 0x23c288: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x23c288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_23c28c:
    // 0x23c28c: 0x63143  sra         $a2, $a2, 5
    ctx->pc = 0x23c28cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 5));
label_23c290:
    // 0x23c290: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x23c290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_23c294:
    // 0x23c294: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23c294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c298:
    // 0x23c298: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23c298u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c29c:
    // 0x23c29c: 0x38040  sll         $s0, $v1, 1
    ctx->pc = 0x23c29cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_23c2a0:
    // 0x23c2a0: 0x8c940014  lw          $s4, 0x14($a0)
    ctx->pc = 0x23c2a0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_23c2a4:
    // 0x23c2a4: 0x1280004c  beqz        $s4, . + 4 + (0x4C << 2)
label_23c2a8:
    if (ctx->pc == 0x23C2A8u) {
        ctx->pc = 0x23C2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C2A4u;
        // 0x23c2a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C2ACu;
        goto label_23c2ac;
    }
    ctx->pc = 0x23C2A4u;
    {
        const bool branch_taken_0x23c2a4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C2A4u;
        // 0x23c2a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c2a4) {
            ctx->pc = 0x23C3D8u;
            goto label_23c3d8;
        }
    }
    ctx->pc = 0x23C2ACu;
label_23c2ac:
    // 0x23c2ac: 0xd09818  mult        $s3, $a2, $s0
    ctx->pc = 0x23c2acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_23c2b0:
    // 0x23c2b0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x23c2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_23c2b4:
    // 0x23c2b4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x23c2b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23c2b8:
    // 0x23c2b8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x23c2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_23c2bc:
    // 0x23c2bc: 0x40f809  jalr        $v0
label_23c2c0:
    if (ctx->pc == 0x23C2C0u) {
        ctx->pc = 0x23C2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C2BCu;
        // 0x23c2c0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C2C4u;
        goto label_23c2c4;
    }
    ctx->pc = 0x23C2BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23C2C4u);
        ctx->pc = 0x23C2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C2BCu;
        // 0x23c2c0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C2BCu, 0x23C2C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23C2C4u;
label_23c2c4:
    // 0x23c2c4: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
label_23c2c8:
    if (ctx->pc == 0x23C2C8u) {
        ctx->pc = 0x23C2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C2C4u;
        // 0x23c2c8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C2CCu;
        goto label_23c2cc;
    }
    ctx->pc = 0x23C2C4u;
    {
        const bool branch_taken_0x23c2c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c2c4) {
            ctx->pc = 0x23C2C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C2C4u;
            // 0x23c2c8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C2CCu;
            goto label_23c2cc;
        }
    }
    ctx->pc = 0x23C2CCu;
label_23c2cc:
    // 0x23c2cc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x23c2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_23c2d0:
    // 0x23c2d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23c2d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c2d4:
    // 0x23c2d4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x23c2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_23c2d8:
    // 0x23c2d8: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x23c2d8u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_23c2dc:
    // 0x23c2dc: 0x1012  mflo        $v0
    ctx->pc = 0x23c2dcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_23c2e0:
    // 0x23c2e0: 0x50a818  mult        $s5, $v0, $s0
    ctx->pc = 0x23c2e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_23c2e4:
    // 0x23c2e4: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x23c2e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23c2e8:
    // 0x23c2e8: 0xc049590  jal         func_125640
label_23c2ec:
    if (ctx->pc == 0x23C2ECu) {
        ctx->pc = 0x23C2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C2E8u;
        // 0x23c2ec: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C2F0u;
        goto label_23c2f0;
    }
    ctx->pc = 0x23C2E8u;
    SET_GPR_U32(ctx, 31, 0x23C2F0u);
    ctx->pc = 0x23C2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C2E8u;
    // 0x23c2ec: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x23C2E8u, 0x23C2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C2F0u;
label_23c2f0:
    // 0x23c2f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23c2f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23c2f4:
    // 0x23c2f4: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x23c2f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_23c2f8:
    // 0x23c2f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x23c2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23c2fc:
    // 0x23c2fc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x23c2fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23c300:
    // 0x23c300: 0xc094854  jal         func_252150
label_23c304:
    if (ctx->pc == 0x23C304u) {
        ctx->pc = 0x23C304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C300u;
        // 0x23c304: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C308u;
        goto label_23c308;
    }
    ctx->pc = 0x23C300u;
    SET_GPR_U32(ctx, 31, 0x23C308u);
    ctx->pc = 0x23C304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C300u;
    // 0x23c304: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252150u, 0x23C300u, 0x23C308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C308u;
label_23c308:
    // 0x23c308: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x23c308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_23c30c:
    // 0x23c30c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x23c30cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23c310:
    // 0x23c310: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23c310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23c314:
    // 0x23c314: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x23c314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_23c318:
    // 0x23c318: 0x40f809  jalr        $v0
label_23c31c:
    if (ctx->pc == 0x23C31Cu) {
        ctx->pc = 0x23C31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C318u;
        // 0x23c31c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C320u;
        goto label_23c320;
    }
    ctx->pc = 0x23C318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23C320u);
        ctx->pc = 0x23C31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C318u;
        // 0x23c31c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C318u, 0x23C320u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23C320u;
label_23c320:
    // 0x23c320: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x23c320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_23c324:
    // 0x23c324: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23c324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23c328:
    // 0x23c328: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23c328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c32c:
    // 0x23c32c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x23c32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_23c330:
    // 0x23c330: 0x40f809  jalr        $v0
label_23c334:
    if (ctx->pc == 0x23C334u) {
        ctx->pc = 0x23C334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C330u;
        // 0x23c334: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C338u;
        goto label_23c338;
    }
    ctx->pc = 0x23C330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23C338u);
        ctx->pc = 0x23C334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C330u;
        // 0x23c334: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C330u, 0x23C338u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23C338u;
label_23c338:
    // 0x23c338: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x23c338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_23c33c:
    // 0x23c33c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x23c33cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23c340:
    // 0x23c340: 0x2713023  subu        $a2, $s3, $s1
    ctx->pc = 0x23c340u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_23c344:
    // 0x23c344: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x23c344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_23c348:
    // 0x23c348: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23c348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23c34c:
    // 0x23c34c: 0x40f809  jalr        $v0
label_23c350:
    if (ctx->pc == 0x23C350u) {
        ctx->pc = 0x23C350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C34Cu;
        // 0x23c350: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C354u;
        goto label_23c354;
    }
    ctx->pc = 0x23C34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23C354u);
        ctx->pc = 0x23C350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C34Cu;
        // 0x23c350: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C34Cu, 0x23C354u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23C354u;
label_23c354:
    // 0x23c354: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
label_23c358:
    if (ctx->pc == 0x23C358u) {
        ctx->pc = 0x23C358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C354u;
        // 0x23c358: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C35Cu;
        goto label_23c35c;
    }
    ctx->pc = 0x23C354u;
    {
        const bool branch_taken_0x23c354 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c354) {
            ctx->pc = 0x23C358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C354u;
            // 0x23c358: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C35Cu;
            goto label_23c35c;
        }
    }
    ctx->pc = 0x23C35Cu;
label_23c35c:
    // 0x23c35c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x23c35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_23c360:
    // 0x23c360: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23c360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c364:
    // 0x23c364: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x23c364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_23c368:
    // 0x23c368: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x23c368u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_23c36c:
    // 0x23c36c: 0x1012  mflo        $v0
    ctx->pc = 0x23c36cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_23c370:
    // 0x23c370: 0x50a818  mult        $s5, $v0, $s0
    ctx->pc = 0x23c370u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_23c374:
    // 0x23c374: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x23c374u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23c378:
    // 0x23c378: 0xc049590  jal         func_125640
label_23c37c:
    if (ctx->pc == 0x23C37Cu) {
        ctx->pc = 0x23C37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C378u;
        // 0x23c37c: 0x2358821  addu        $s1, $s1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C380u;
        goto label_23c380;
    }
    ctx->pc = 0x23C378u;
    SET_GPR_U32(ctx, 31, 0x23C380u);
    ctx->pc = 0x23C37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C378u;
    // 0x23c37c: 0x2358821  addu        $s1, $s1, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x23C378u, 0x23C380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C380u;
label_23c380:
    // 0x23c380: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x23c380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23c384:
    // 0x23c384: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x23c384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23c388:
    // 0x23c388: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x23c388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23c38c:
    // 0x23c38c: 0xc094854  jal         func_252150
label_23c390:
    if (ctx->pc == 0x23C390u) {
        ctx->pc = 0x23C390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C38Cu;
        // 0x23c390: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C394u;
        goto label_23c394;
    }
    ctx->pc = 0x23C38Cu;
    SET_GPR_U32(ctx, 31, 0x23C394u);
    ctx->pc = 0x23C390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C38Cu;
    // 0x23c390: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252150u, 0x23C38Cu, 0x23C394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C394u;
label_23c394:
    // 0x23c394: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x23c394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_23c398:
    // 0x23c398: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x23c398u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23c39c:
    // 0x23c39c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23c39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23c3a0:
    // 0x23c3a0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x23c3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_23c3a4:
    // 0x23c3a4: 0x40f809  jalr        $v0
label_23c3a8:
    if (ctx->pc == 0x23C3A8u) {
        ctx->pc = 0x23C3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C3A4u;
        // 0x23c3a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C3ACu;
        goto label_23c3ac;
    }
    ctx->pc = 0x23C3A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23C3ACu);
        ctx->pc = 0x23C3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C3A4u;
        // 0x23c3a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C3A4u, 0x23C3ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23C3ACu;
label_23c3ac:
    // 0x23c3ac: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x23c3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_23c3b0:
    // 0x23c3b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23c3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23c3b4:
    // 0x23c3b4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x23c3b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23c3b8:
    // 0x23c3b8: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x23c3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_23c3bc:
    // 0x23c3bc: 0x40f809  jalr        $v0
label_23c3c0:
    if (ctx->pc == 0x23C3C0u) {
        ctx->pc = 0x23C3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C3BCu;
        // 0x23c3c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C3C4u;
        goto label_23c3c4;
    }
    ctx->pc = 0x23C3BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23C3C4u);
        ctx->pc = 0x23C3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C3BCu;
        // 0x23c3c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C3BCu, 0x23C3C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23C3C4u;
label_23c3c4:
    // 0x23c3c4: 0x230001a  div         $zero, $s1, $s0
    ctx->pc = 0x23c3c4u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_23c3c8:
    // 0x23c3c8: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
label_23c3cc:
    if (ctx->pc == 0x23C3CCu) {
        ctx->pc = 0x23C3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C3C8u;
        // 0x23c3cc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C3D0u;
        goto label_23c3d0;
    }
    ctx->pc = 0x23C3C8u;
    {
        const bool branch_taken_0x23c3c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c3c8) {
            ctx->pc = 0x23C3CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C3C8u;
            // 0x23c3cc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C3D0u;
            goto label_23c3d0;
        }
    }
    ctx->pc = 0x23C3D0u;
label_23c3d0:
    // 0x23c3d0: 0x8812  mflo        $s1
    ctx->pc = 0x23c3d0u;
    SET_GPR_U64(ctx, 17, ctx->lo);
label_23c3d4:
    // 0x23c3d4: 0x111140  sll         $v0, $s1, 5
    ctx->pc = 0x23c3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
label_23c3d8:
    // 0x23c3d8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x23c3d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23c3dc:
    // 0x23c3dc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x23c3dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_23c3e0:
    // 0x23c3e0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x23c3e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23c3e4:
    // 0x23c3e4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x23c3e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_23c3e8:
    // 0x23c3e8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x23c3e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23c3ec:
    // 0x23c3ec: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x23c3ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_23c3f0:
    // 0x23c3f0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x23c3f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23c3f4:
    // 0x23c3f4: 0x3e00008  jr          $ra
label_23c3f8:
    if (ctx->pc == 0x23C3F8u) {
        ctx->pc = 0x23C3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C3F4u;
        // 0x23c3f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C3FCu;
        goto label_fallthrough_0x23c3f4;
    }
    ctx->pc = 0x23C3F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C3F4u;
        // 0x23c3f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C3F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x23c3f4:
    ctx->pc = 0x23C3FCu;
}
