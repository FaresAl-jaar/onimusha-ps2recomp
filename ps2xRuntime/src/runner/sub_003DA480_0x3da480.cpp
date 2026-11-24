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

// Function: sub_003DA480
// Address: 0x3da480 - 0x3da688
void sub_003DA480_0x3da480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DA480_0x3da480");
#endif

    switch (ctx->pc) {
        case 0x3da4c8u: goto label_3da4c8;
        case 0x3da4dcu: goto label_3da4dc;
        case 0x3da504u: goto label_3da504;
        case 0x3da50cu: goto label_3da50c;
        case 0x3da560u: goto label_3da560;
        case 0x3da658u: goto label_3da658;
        default: break;
    }

    ctx->pc = 0x3da480u;

    // 0x3da480: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3da480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3da484: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3da484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3da488: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3da488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3da48c: 0x90860821  lbu         $a2, 0x821($a0)
    ctx->pc = 0x3da48cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3da490: 0x2cc10006  sltiu       $at, $a2, 0x6
    ctx->pc = 0x3da490u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x3da494: 0x10200078  beqz        $at, . + 4 + (0x78 << 2)
    ctx->pc = 0x3DA494u;
    {
        const bool branch_taken_0x3da494 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA494u;
        // 0x3da498: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da494) {
            ctx->pc = 0x3DA678u;
            goto label_3da678;
        }
    }
    ctx->pc = 0x3DA49Cu;
    // 0x3da49c: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3da49cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3da4a0: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x3da4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3da4a4: 0x24a54790  addiu       $a1, $a1, 0x4790
    ctx->pc = 0x3da4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18320));
    // 0x3da4a8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3da4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3da4ac: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3da4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3da4b0: 0x600008  jr          $v1
    ctx->pc = 0x3DA4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3DA4B8u: goto label_3da4b8;
            case 0x3DA4E8u: goto label_3da4e8;
            case 0x3DA520u: goto label_3da520;
            case 0x3DA570u: goto label_3da570;
            case 0x3DA5B0u: goto label_3da5b0;
            case 0x3DA650u: goto label_3da650;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA4B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3DA4B8u;
label_3da4b8:
    // 0x3da4b8: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3da4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x3da4bc: 0x24050066  addiu       $a1, $zero, 0x66
    ctx->pc = 0x3da4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x3da4c0: 0xc0f6c58  jal         func_3DB160
    ctx->pc = 0x3DA4C0u;
    SET_GPR_U32(ctx, 31, 0x3DA4C8u);
    ctx->pc = 0x3DA4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA4C0u;
    // 0x3da4c4: 0x34460040  ori         $a2, $v0, 0x40 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB160u, 0x3DA4C0u, 0x3DA4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA4C8u;
label_3da4c8:
    // 0x3da4c8: 0x92020821  lbu         $v0, 0x821($s0)
    ctx->pc = 0x3da4c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3da4cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3da4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da4d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3da4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3da4d4: 0xc0f6c74  jal         func_3DB1D0
    ctx->pc = 0x3DA4D4u;
    SET_GPR_U32(ctx, 31, 0x3DA4DCu);
    ctx->pc = 0x3DA4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA4D4u;
    // 0x3da4d8: 0xa2020821  sb          $v0, 0x821($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB1D0u, 0x3DA4D4u, 0x3DA4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA4DCu;
label_3da4dc:
    // 0x3da4dc: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x3DA4DCu;
    {
        const bool branch_taken_0x3da4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da4dc) {
            ctx->pc = 0x3DA678u;
            goto label_3da678;
        }
    }
    ctx->pc = 0x3DA4E4u;
    // 0x3da4e4: 0x0  nop
    ctx->pc = 0x3da4e4u;
    // NOP
label_3da4e8:
    // 0x3da4e8: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x3da4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3da4ec: 0x946300c4  lhu         $v1, 0xC4($v1)
    ctx->pc = 0x3da4ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x3da4f0: 0x28610082  slti        $at, $v1, 0x82
    ctx->pc = 0x3da4f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)130) ? 1 : 0);
    // 0x3da4f4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DA4F4u;
    {
        const bool branch_taken_0x3da4f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da4f4) {
            ctx->pc = 0x3DA518u;
            goto label_3da518;
        }
    }
    ctx->pc = 0x3DA4FCu;
    // 0x3da4fc: 0xc0f6ce4  jal         func_3DB390
    ctx->pc = 0x3DA4FCu;
    SET_GPR_U32(ctx, 31, 0x3DA504u);
    ctx->pc = 0x3DB390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB390u, 0x3DA4FCu, 0x3DA504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA504u;
label_3da504:
    // 0x3da504: 0xc0f6d80  jal         func_3DB600
    ctx->pc = 0x3DA504u;
    SET_GPR_U32(ctx, 31, 0x3DA50Cu);
    ctx->pc = 0x3DA508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA504u;
    // 0x3da508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB600u, 0x3DA504u, 0x3DA50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA50Cu;
label_3da50c:
    // 0x3da50c: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x3DA50Cu;
    {
        const bool branch_taken_0x3da50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da50c) {
            ctx->pc = 0x3DA678u;
            goto label_3da678;
        }
    }
    ctx->pc = 0x3DA514u;
    // 0x3da514: 0x0  nop
    ctx->pc = 0x3da514u;
    // NOP
label_3da518:
    // 0x3da518: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x3da518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3da51c: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3da51cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_3da520:
    // 0x3da520: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x3da520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3da524: 0x946300c4  lhu         $v1, 0xC4($v1)
    ctx->pc = 0x3da524u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x3da528: 0x286300b0  slti        $v1, $v1, 0xB0
    ctx->pc = 0x3da528u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)176) ? 1 : 0);
    // 0x3da52c: 0x14600052  bnez        $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x3DA52Cu;
    {
        const bool branch_taken_0x3da52c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3da52c) {
            ctx->pc = 0x3DA678u;
            goto label_3da678;
        }
    }
    ctx->pc = 0x3DA534u;
    // 0x3da534: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3da534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3da538: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x3da538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3da53c: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3da53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3da540: 0x24420280  addiu       $v0, $v0, 0x280
    ctx->pc = 0x3da540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    // 0x3da544: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x3da544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x3da548: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3da548u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3da54c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3da54cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da550: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3da550u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3da554: 0x920408e8  lbu         $a0, 0x8E8($s0)
    ctx->pc = 0x3da554u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x3da558: 0xc0bc8b8  jal         func_2F22E0
    ctx->pc = 0x3DA558u;
    SET_GPR_U32(ctx, 31, 0x3DA560u);
    ctx->pc = 0x3DA55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA558u;
    // 0x3da55c: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F22E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F22E0u, 0x3DA558u, 0x3DA560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA560u;
label_3da560:
    // 0x3da560: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x3da560u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3da564: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3da564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3da568: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3da568u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3da56c: 0x0  nop
    ctx->pc = 0x3da56cu;
    // NOP
label_3da570:
    // 0x3da570: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x3da570u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x3da574: 0x10600040  beqz        $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x3DA574u;
    {
        const bool branch_taken_0x3da574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da574) {
            ctx->pc = 0x3DA678u;
            goto label_3da678;
        }
    }
    ctx->pc = 0x3DA57Cu;
    // 0x3da57c: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3da57cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3da580: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3da580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3da584: 0x24040067  addiu       $a0, $zero, 0x67
    ctx->pc = 0x3da584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x3da588: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3da588u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3da58c: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x3da58cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x3da590: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3da590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3da594: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x3da594u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x3da598: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x3da598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x3da59c: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x3da59cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3da5a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3da5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3da5a4: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3da5a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3da5a8: 0xa6000826  sh          $zero, 0x826($s0)
    ctx->pc = 0x3da5a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2086), (uint16_t)GPR_U32(ctx, 0));
    // 0x3da5ac: 0x0  nop
    ctx->pc = 0x3da5acu;
    // NOP
label_3da5b0:
    // 0x3da5b0: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x3da5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x3da5b4: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3da5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3da5b8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3da5b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3da5bc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3da5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3da5c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3da5c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3da5c4: 0x0  nop
    ctx->pc = 0x3da5c4u;
    // NOP
    // 0x3da5c8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3da5c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3da5cc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3da5ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3da5d0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3DA5D0u;
    {
        const bool branch_taken_0x3da5d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3da5d0) {
            ctx->pc = 0x3DA5E8u;
            goto label_3da5e8;
        }
    }
    ctx->pc = 0x3DA5D8u;
    // 0x3da5d8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3da5d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3da5dc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3da5dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3da5e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3DA5E0u;
    {
        const bool branch_taken_0x3da5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA5E0u;
        // 0x3da5e4: 0x96030826  lhu         $v1, 0x826($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2086)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da5e0) {
            ctx->pc = 0x3DA604u;
            goto label_3da604;
        }
    }
    ctx->pc = 0x3DA5E8u;
label_3da5e8:
    // 0x3da5e8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3da5e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3da5ec: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3da5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3da5f0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3da5f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3da5f4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3da5f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3da5f8: 0x0  nop
    ctx->pc = 0x3da5f8u;
    // NOP
    // 0x3da5fc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3da5fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3da600: 0x96030826  lhu         $v1, 0x826($s0)
    ctx->pc = 0x3da600u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2086)));
label_3da604:
    // 0x3da604: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3da604u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3da608: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x3DA608u;
    {
        const bool branch_taken_0x3da608 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da608) {
            ctx->pc = 0x3DA620u;
            goto label_3da620;
        }
    }
    ctx->pc = 0x3DA610u;
    // 0x3da610: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3da610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3da614: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3DA614u;
    {
        const bool branch_taken_0x3da614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA614u;
        // 0x3da618: 0xa6030826  sh          $v1, 0x826($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2086), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da614) {
            ctx->pc = 0x3DA678u;
            goto label_3da678;
        }
    }
    ctx->pc = 0x3DA61Cu;
    // 0x3da61c: 0x0  nop
    ctx->pc = 0x3da61cu;
    // NOP
label_3da620:
    // 0x3da620: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3da620u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3da624: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3da624u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3da628: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x3da628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x3da62c: 0xa60207f2  sh          $v0, 0x7F2($s0)
    ctx->pc = 0x3da62cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 2));
    // 0x3da630: 0x3c028004  lui         $v0, 0x8004
    ctx->pc = 0x3da630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32772 << 16));
    // 0x3da634: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x3da634u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x3da638: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3da638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3da63c: 0xae0207ec  sw          $v0, 0x7EC($s0)
    ctx->pc = 0x3da63cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 2));
    // 0x3da640: 0x92020821  lbu         $v0, 0x821($s0)
    ctx->pc = 0x3da640u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3da644: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3da644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3da648: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x3da648u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x3da64c: 0x0  nop
    ctx->pc = 0x3da64cu;
    // NOP
label_3da650:
    // 0x3da650: 0xc0f6c64  jal         func_3DB190
    ctx->pc = 0x3DA650u;
    SET_GPR_U32(ctx, 31, 0x3DA658u);
    ctx->pc = 0x3DA654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA650u;
    // 0x3da654: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB190u, 0x3DA650u, 0x3DA658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA658u;
label_3da658:
    // 0x3da658: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3DA658u;
    {
        const bool branch_taken_0x3da658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA658u;
        // 0x3da65c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da658) {
            ctx->pc = 0x3DA678u;
            goto label_3da678;
        }
    }
    ctx->pc = 0x3DA660u;
    // 0x3da660: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3da660u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3da664: 0xa2032be3  sb          $v1, 0x2BE3($s0)
    ctx->pc = 0x3da664u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11235), (uint8_t)GPR_U32(ctx, 3));
    // 0x3da668: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x3da668u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3da66c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3da66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3da670: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3da670u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3da674: 0x0  nop
    ctx->pc = 0x3da674u;
    // NOP
label_3da678:
    // 0x3da678: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3da678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3da67c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3da67cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3da680: 0x3e00008  jr          $ra
    ctx->pc = 0x3DA680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DA684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA680u;
        // 0x3da684: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DA688u;
}
