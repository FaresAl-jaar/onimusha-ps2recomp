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

// Function: sub_003DA240
// Address: 0x3da240 - 0x3da480
void sub_003DA240_0x3da240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DA240_0x3da240");
#endif

    switch (ctx->pc) {
        case 0x3da2a0u: goto label_3da2a0;
        case 0x3da2c4u: goto label_3da2c4;
        case 0x3da304u: goto label_3da304;
        case 0x3da30cu: goto label_3da30c;
        case 0x3da344u: goto label_3da344;
        case 0x3da438u: goto label_3da438;
        case 0x3da44cu: goto label_3da44c;
        default: break;
    }

    ctx->pc = 0x3da240u;

    // 0x3da240: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3da240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3da244: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3da244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3da248: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3da248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3da24c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3da24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3da250: 0x90850821  lbu         $a1, 0x821($a0)
    ctx->pc = 0x3da250u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3da254: 0x10a30076  beq         $a1, $v1, . + 4 + (0x76 << 2)
    ctx->pc = 0x3DA254u;
    {
        const bool branch_taken_0x3da254 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3DA258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA254u;
        // 0x3da258: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da254) {
            ctx->pc = 0x3DA430u;
            goto label_3da430;
        }
    }
    ctx->pc = 0x3DA25Cu;
    // 0x3da25c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3da25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3da260: 0x10a3004b  beq         $a1, $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x3DA260u;
    {
        const bool branch_taken_0x3da260 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3DA264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA260u;
        // 0x3da264: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da260) {
            ctx->pc = 0x3DA390u;
            goto label_3da390;
        }
    }
    ctx->pc = 0x3DA268u;
    // 0x3da268: 0x10a30039  beq         $a1, $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x3DA268u;
    {
        const bool branch_taken_0x3da268 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3da268) {
            ctx->pc = 0x3DA350u;
            goto label_3da350;
        }
    }
    ctx->pc = 0x3DA270u;
    // 0x3da270: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3da270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3da274: 0x10a30018  beq         $a1, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x3DA274u;
    {
        const bool branch_taken_0x3da274 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3da274) {
            ctx->pc = 0x3DA2D8u;
            goto label_3da2d8;
        }
    }
    ctx->pc = 0x3DA27Cu;
    // 0x3da27c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DA27Cu;
    {
        const bool branch_taken_0x3da27c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da27c) {
            ctx->pc = 0x3DA290u;
            goto label_3da290;
        }
    }
    ctx->pc = 0x3DA284u;
    // 0x3da284: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x3DA284u;
    {
        const bool branch_taken_0x3da284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da284) {
            ctx->pc = 0x3DA470u;
            goto label_3da470;
        }
    }
    ctx->pc = 0x3DA28Cu;
    // 0x3da28c: 0x0  nop
    ctx->pc = 0x3da28cu;
    // NOP
label_3da290:
    // 0x3da290: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3da290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x3da294: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x3da294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x3da298: 0xc0f6c58  jal         func_3DB160
    ctx->pc = 0x3DA298u;
    SET_GPR_U32(ctx, 31, 0x3DA2A0u);
    ctx->pc = 0x3DA29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA298u;
    // 0x3da29c: 0x34460040  ori         $a2, $v0, 0x40 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB160u, 0x3DA298u, 0x3DA2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA2A0u;
label_3da2a0:
    // 0x3da2a0: 0x92032be5  lbu         $v1, 0x2BE5($s0)
    ctx->pc = 0x3da2a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11237)));
    // 0x3da2a4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3da2a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3da2a8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3DA2A8u;
    {
        const bool branch_taken_0x3da2a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da2a8) {
            ctx->pc = 0x3DA2C8u;
            goto label_3da2c8;
        }
    }
    ctx->pc = 0x3DA2B0u;
    // 0x3da2b0: 0x3c024459  lui         $v0, 0x4459
    ctx->pc = 0x3da2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17497 << 16));
    // 0x3da2b4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3da2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3da2b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3da2b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3da2bc: 0xc0f6d14  jal         func_3DB450
    ctx->pc = 0x3DA2BCu;
    SET_GPR_U32(ctx, 31, 0x3DA2C4u);
    ctx->pc = 0x3DA2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA2BCu;
    // 0x3da2c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB450u, 0x3DA2BCu, 0x3DA2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA2C4u;
label_3da2c4:
    // 0x3da2c4: 0x0  nop
    ctx->pc = 0x3da2c4u;
    // NOP
label_3da2c8:
    // 0x3da2c8: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x3da2c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3da2cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3da2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3da2d0: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x3DA2D0u;
    {
        const bool branch_taken_0x3da2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA2D0u;
        // 0x3da2d4: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da2d0) {
            ctx->pc = 0x3DA470u;
            goto label_3da470;
        }
    }
    ctx->pc = 0x3DA2D8u;
label_3da2d8:
    // 0x3da2d8: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x3da2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3da2dc: 0x946300c4  lhu         $v1, 0xC4($v1)
    ctx->pc = 0x3da2dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x3da2e0: 0x28610028  slti        $at, $v1, 0x28
    ctx->pc = 0x3da2e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x3da2e4: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x3DA2E4u;
    {
        const bool branch_taken_0x3da2e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da2e4) {
            ctx->pc = 0x3DA318u;
            goto label_3da318;
        }
    }
    ctx->pc = 0x3DA2ECu;
    // 0x3da2ec: 0x92032be5  lbu         $v1, 0x2BE5($s0)
    ctx->pc = 0x3da2ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11237)));
    // 0x3da2f0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3da2f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3da2f4: 0x1060005e  beqz        $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x3DA2F4u;
    {
        const bool branch_taken_0x3da2f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA2F4u;
        // 0x3da2f8: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da2f4) {
            ctx->pc = 0x3DA470u;
            goto label_3da470;
        }
    }
    ctx->pc = 0x3DA2FCu;
    // 0x3da2fc: 0xc0f6ef0  jal         func_3DBBC0
    ctx->pc = 0x3DA2FCu;
    SET_GPR_U32(ctx, 31, 0x3DA304u);
    ctx->pc = 0x3DBBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBBC0u, 0x3DA2FCu, 0x3DA304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA304u;
label_3da304:
    // 0x3da304: 0xc0f6d70  jal         func_3DB5C0
    ctx->pc = 0x3DA304u;
    SET_GPR_U32(ctx, 31, 0x3DA30Cu);
    ctx->pc = 0x3DA308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA304u;
    // 0x3da308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB5C0u, 0x3DA304u, 0x3DA30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA30Cu;
label_3da30c:
    // 0x3da30c: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x3DA30Cu;
    {
        const bool branch_taken_0x3da30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da30c) {
            ctx->pc = 0x3DA470u;
            goto label_3da470;
        }
    }
    ctx->pc = 0x3DA314u;
    // 0x3da314: 0x0  nop
    ctx->pc = 0x3da314u;
    // NOP
label_3da318:
    // 0x3da318: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3da318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3da31c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x3da31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3da320: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3da320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3da324: 0x24420280  addiu       $v0, $v0, 0x280
    ctx->pc = 0x3da324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    // 0x3da328: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x3da328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x3da32c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3da32cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3da330: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3da330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da334: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3da334u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3da338: 0x920408e8  lbu         $a0, 0x8E8($s0)
    ctx->pc = 0x3da338u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x3da33c: 0xc0bc8c0  jal         func_2F2300
    ctx->pc = 0x3DA33Cu;
    SET_GPR_U32(ctx, 31, 0x3DA344u);
    ctx->pc = 0x3DA340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA33Cu;
    // 0x3da340: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2300u, 0x3DA33Cu, 0x3DA344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA344u;
label_3da344:
    // 0x3da344: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x3da344u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3da348: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3da348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3da34c: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3da34cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_3da350:
    // 0x3da350: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x3da350u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x3da354: 0x10600046  beqz        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x3DA354u;
    {
        const bool branch_taken_0x3da354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da354) {
            ctx->pc = 0x3DA470u;
            goto label_3da470;
        }
    }
    ctx->pc = 0x3DA35Cu;
    // 0x3da35c: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3da35cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3da360: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3da360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3da364: 0x24040059  addiu       $a0, $zero, 0x59
    ctx->pc = 0x3da364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x3da368: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3da368u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3da36c: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x3da36cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x3da370: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3da370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3da374: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x3da374u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x3da378: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x3da378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x3da37c: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x3da37cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3da380: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3da380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3da384: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3da384u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3da388: 0xa6000826  sh          $zero, 0x826($s0)
    ctx->pc = 0x3da388u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2086), (uint16_t)GPR_U32(ctx, 0));
    // 0x3da38c: 0x0  nop
    ctx->pc = 0x3da38cu;
    // NOP
label_3da390:
    // 0x3da390: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x3da390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x3da394: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3da394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3da398: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3da398u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3da39c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3da39cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3da3a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3da3a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3da3a4: 0x0  nop
    ctx->pc = 0x3da3a4u;
    // NOP
    // 0x3da3a8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3da3a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3da3ac: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3da3acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3da3b0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3DA3B0u;
    {
        const bool branch_taken_0x3da3b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3da3b0) {
            ctx->pc = 0x3DA3C8u;
            goto label_3da3c8;
        }
    }
    ctx->pc = 0x3DA3B8u;
    // 0x3da3b8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3da3b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3da3bc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3da3bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3da3c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3DA3C0u;
    {
        const bool branch_taken_0x3da3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA3C0u;
        // 0x3da3c4: 0x96030826  lhu         $v1, 0x826($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2086)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da3c0) {
            ctx->pc = 0x3DA3E4u;
            goto label_3da3e4;
        }
    }
    ctx->pc = 0x3DA3C8u;
label_3da3c8:
    // 0x3da3c8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3da3c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3da3cc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3da3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3da3d0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3da3d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3da3d4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3da3d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3da3d8: 0x0  nop
    ctx->pc = 0x3da3d8u;
    // NOP
    // 0x3da3dc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3da3dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3da3e0: 0x96030826  lhu         $v1, 0x826($s0)
    ctx->pc = 0x3da3e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2086)));
label_3da3e4:
    // 0x3da3e4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3da3e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3da3e8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x3DA3E8u;
    {
        const bool branch_taken_0x3da3e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da3e8) {
            ctx->pc = 0x3DA400u;
            goto label_3da400;
        }
    }
    ctx->pc = 0x3DA3F0u;
    // 0x3da3f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3da3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3da3f4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x3DA3F4u;
    {
        const bool branch_taken_0x3da3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA3F4u;
        // 0x3da3f8: 0xa6030826  sh          $v1, 0x826($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2086), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da3f4) {
            ctx->pc = 0x3DA470u;
            goto label_3da470;
        }
    }
    ctx->pc = 0x3DA3FCu;
    // 0x3da3fc: 0x0  nop
    ctx->pc = 0x3da3fcu;
    // NOP
label_3da400:
    // 0x3da400: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3da400u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3da404: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3da404u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3da408: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x3da408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x3da40c: 0xa60207f2  sh          $v0, 0x7F2($s0)
    ctx->pc = 0x3da40cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 2));
    // 0x3da410: 0x3c028004  lui         $v0, 0x8004
    ctx->pc = 0x3da410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32772 << 16));
    // 0x3da414: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x3da414u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x3da418: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3da418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3da41c: 0xae0207ec  sw          $v0, 0x7EC($s0)
    ctx->pc = 0x3da41cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 2));
    // 0x3da420: 0x92020821  lbu         $v0, 0x821($s0)
    ctx->pc = 0x3da420u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3da424: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3da424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3da428: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x3da428u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x3da42c: 0x0  nop
    ctx->pc = 0x3da42cu;
    // NOP
label_3da430:
    // 0x3da430: 0xc0f6c64  jal         func_3DB190
    ctx->pc = 0x3DA430u;
    SET_GPR_U32(ctx, 31, 0x3DA438u);
    ctx->pc = 0x3DA434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA430u;
    // 0x3da434: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB190u, 0x3DA430u, 0x3DA438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA438u;
label_3da438:
    // 0x3da438: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3DA438u;
    {
        const bool branch_taken_0x3da438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DA43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA438u;
        // 0x3da43c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da438) {
            ctx->pc = 0x3DA458u;
            goto label_3da458;
        }
    }
    ctx->pc = 0x3DA440u;
    // 0x3da440: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x3da440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x3da444: 0xc0f6f28  jal         func_3DBCA0
    ctx->pc = 0x3DA444u;
    SET_GPR_U32(ctx, 31, 0x3DA44Cu);
    ctx->pc = 0x3DA448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA444u;
    // 0x3da448: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBCA0u, 0x3DA444u, 0x3DA44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA44Cu;
label_3da44c:
    // 0x3da44c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3DA44Cu;
    {
        const bool branch_taken_0x3da44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da44c) {
            ctx->pc = 0x3DA470u;
            goto label_3da470;
        }
    }
    ctx->pc = 0x3DA454u;
    // 0x3da454: 0x0  nop
    ctx->pc = 0x3da454u;
    // NOP
label_3da458:
    // 0x3da458: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3da458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3da45c: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3da45cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3da460: 0xa2032be3  sb          $v1, 0x2BE3($s0)
    ctx->pc = 0x3da460u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11235), (uint8_t)GPR_U32(ctx, 3));
    // 0x3da464: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x3da464u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3da468: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3da468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3da46c: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3da46cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_3da470:
    // 0x3da470: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3da470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3da474: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3da474u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3da478: 0x3e00008  jr          $ra
    ctx->pc = 0x3DA478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DA47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA478u;
        // 0x3da47c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DA480u;
}
