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

// Function: sub_003364B0
// Address: 0x3364b0 - 0x336734
void sub_003364B0_0x3364b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003364B0_0x3364b0");
#endif

    switch (ctx->pc) {
        case 0x3364ecu: goto label_3364ec;
        case 0x336540u: goto label_336540;
        case 0x336550u: goto label_336550;
        case 0x336590u: goto label_336590;
        case 0x3365e0u: goto label_3365e0;
        case 0x3365f0u: goto label_3365f0;
        case 0x3365f8u: goto label_3365f8;
        case 0x336608u: goto label_336608;
        case 0x336610u: goto label_336610;
        case 0x336620u: goto label_336620;
        case 0x336628u: goto label_336628;
        case 0x336638u: goto label_336638;
        case 0x336640u: goto label_336640;
        case 0x336650u: goto label_336650;
        case 0x336658u: goto label_336658;
        case 0x336668u: goto label_336668;
        case 0x336670u: goto label_336670;
        case 0x336680u: goto label_336680;
        case 0x336688u: goto label_336688;
        case 0x336698u: goto label_336698;
        case 0x3366a0u: goto label_3366a0;
        case 0x3366b0u: goto label_3366b0;
        case 0x3366b8u: goto label_3366b8;
        case 0x3366c8u: goto label_3366c8;
        case 0x3366d0u: goto label_3366d0;
        default: break;
    }

    ctx->pc = 0x3364b0u;

    // 0x3364b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3364b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3364b4: 0x24061c20  addiu       $a2, $zero, 0x1C20
    ctx->pc = 0x3364b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7200));
    // 0x3364b8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3364b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3364bc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3364bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3364c0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3364c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3364c4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3364c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3364c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3364c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3364cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3364ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3364d0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3364d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3364d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3364d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3364d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3364d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3364dc: 0xa4800024  sh          $zero, 0x24($a0)
    ctx->pc = 0x3364dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x3364e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3364e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3364e4: 0xc049590  jal         func_125640
    ctx->pc = 0x3364E4u;
    SET_GPR_U32(ctx, 31, 0x3364ECu);
    ctx->pc = 0x3364E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3364E4u;
    // 0x3364e8: 0x26040028  addiu       $a0, $s0, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x3364E4u, 0x3364ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3364ECu;
label_3364ec:
    // 0x3364ec: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3364ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3364f0: 0x90630015  lbu         $v1, 0x15($v1)
    ctx->pc = 0x3364f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 21)));
    // 0x3364f4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3364F4u;
    {
        const bool branch_taken_0x3364f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3364F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3364F4u;
        // 0x3364f8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3364f4) {
            ctx->pc = 0x336508u;
            goto label_336508;
        }
    }
    ctx->pc = 0x3364FCu;
    // 0x3364fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3364FCu;
    {
        const bool branch_taken_0x3364fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3364FCu;
        // 0x336500: 0x64030346  daddiu      $v1, $zero, 0x346 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)838);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3364fc) {
            ctx->pc = 0x336510u;
            goto label_336510;
        }
    }
    ctx->pc = 0x336504u;
    // 0x336504: 0x0  nop
    ctx->pc = 0x336504u;
    // NOP
label_336508:
    // 0x336508: 0x64150346  daddiu      $s5, $zero, 0x346
    ctx->pc = 0x336508u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)838);
    // 0x33650c: 0x64030446  daddiu      $v1, $zero, 0x446
    ctx->pc = 0x33650cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1094);
label_336510:
    // 0x336510: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x336510u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x336514: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x336514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x336518: 0x32a5ffff  andi        $a1, $s5, 0xFFFF
    ctx->pc = 0x336518u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x33651c: 0x8c23bb34  lw          $v1, -0x44CC($at)
    ctx->pc = 0x33651cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8DBB34u));
    // 0x336520: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x336520u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x336524: 0x26130028  addiu       $s3, $s0, 0x28
    ctx->pc = 0x336524u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x336528: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x336528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33652c: 0xb1082a  slt         $at, $a1, $s1
    ctx->pc = 0x33652cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x336530: 0x10200077  beqz        $at, . + 4 + (0x77 << 2)
    ctx->pc = 0x336530u;
    {
        const bool branch_taken_0x336530 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x336534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336530u;
        // 0x336534: 0x2474009c  addiu       $s4, $v1, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336530) {
            ctx->pc = 0x336710u;
            goto label_336710;
        }
    }
    ctx->pc = 0x336538u;
    // 0x336538: 0x3252ffff  andi        $s2, $s2, 0xFFFF
    ctx->pc = 0x336538u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x33653c: 0x0  nop
    ctx->pc = 0x33653cu;
    // NOP
label_336540:
    // 0x336540: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x336540u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x336544: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x336544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x336548: 0xc0bcd78  jal         func_2F35E0
    ctx->pc = 0x336548u;
    SET_GPR_U32(ctx, 31, 0x336550u);
    ctx->pc = 0x33654Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336548u;
    // 0x33654c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F35E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F35E0u, 0x336548u, 0x336550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336550u;
label_336550:
    // 0x336550: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x336550u;
    {
        const bool branch_taken_0x336550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x336550) {
            ctx->pc = 0x3366F8u;
            goto label_3366f8;
        }
    }
    ctx->pc = 0x336558u;
    // 0x336558: 0x96840004  lhu         $a0, 0x4($s4)
    ctx->pc = 0x336558u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x33655c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33655cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336560: 0x30840f00  andi        $a0, $a0, 0xF00
    ctx->pc = 0x336560u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3840);
    // 0x336564: 0x42203  sra         $a0, $a0, 8
    ctx->pc = 0x336564u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 8));
    // 0x336568: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x336568u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x33656c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x33656cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x336570: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x336570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x336574: 0x10600060  beqz        $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x336574u;
    {
        const bool branch_taken_0x336574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x336578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336574u;
        // 0x336578: 0x3c040092  lui         $a0, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336574) {
            ctx->pc = 0x3366F8u;
            goto label_3366f8;
        }
    }
    ctx->pc = 0x33657Cu;
    // 0x33657c: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x33657cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x336580: 0x24841400  addiu       $a0, $a0, 0x1400
    ctx->pc = 0x336580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5120));
    // 0x336584: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x336584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336588: 0xc0f35e0  jal         func_3CD780
    ctx->pc = 0x336588u;
    SET_GPR_U32(ctx, 31, 0x336590u);
    ctx->pc = 0x33658Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336588u;
    // 0x33658c: 0xa6750004  sh          $s5, 0x4($s3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD780u, 0x336588u, 0x336590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336590u;
label_336590:
    // 0x336590: 0xa2620006  sb          $v0, 0x6($s3)
    ctx->pc = 0x336590u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x336594: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x336594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x336598: 0xa2600007  sb          $zero, 0x7($s3)
    ctx->pc = 0x336598u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x33659c: 0x3004000f  andi        $a0, $zero, 0xF
    ctx->pc = 0x33659cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)15);
    // 0x3365a0: 0x92650008  lbu         $a1, 0x8($s3)
    ctx->pc = 0x3365a0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x3365a4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x3365a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x3365a8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3365a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3365ac: 0xa2630008  sb          $v1, 0x8($s3)
    ctx->pc = 0x3365acu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x3365b0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x3365b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3365b4: 0x2c610012  sltiu       $at, $v1, 0x12
    ctx->pc = 0x3365b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x3365b8: 0x10200045  beqz        $at, . + 4 + (0x45 << 2)
    ctx->pc = 0x3365B8u;
    {
        const bool branch_taken_0x3365b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3365BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3365B8u;
        // 0x3365bc: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3365b8) {
            ctx->pc = 0x3366D0u;
            goto label_3366d0;
        }
    }
    ctx->pc = 0x3365C0u;
    // 0x3365c0: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x3365c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x3365c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3365c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3365c8: 0x2484d1b0  addiu       $a0, $a0, -0x2E50
    ctx->pc = 0x3365c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955440));
    // 0x3365cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3365ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3365d0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3365d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3365d4: 0x600008  jr          $v1
    ctx->pc = 0x3365D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3365E0u: goto label_3365e0;
            case 0x3365F8u: goto label_3365f8;
            case 0x336610u: goto label_336610;
            case 0x336628u: goto label_336628;
            case 0x336640u: goto label_336640;
            case 0x336658u: goto label_336658;
            case 0x336670u: goto label_336670;
            case 0x336688u: goto label_336688;
            case 0x3366A0u: goto label_3366a0;
            case 0x3366B8u: goto label_3366b8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3365D4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3365DCu;
    // 0x3365dc: 0x0  nop
    ctx->pc = 0x3365dcu;
    // NOP
label_3365e0:
    // 0x3365e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3365e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3365e4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3365e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3365e8: 0xc0cd9d0  jal         func_336740
    ctx->pc = 0x3365E8u;
    SET_GPR_U32(ctx, 31, 0x3365F0u);
    ctx->pc = 0x3365ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3365E8u;
    // 0x3365ec: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336740u, 0x3365E8u, 0x3365F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3365F0u;
label_3365f0:
    // 0x3365f0: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x3365F0u;
    {
        const bool branch_taken_0x3365f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3365F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3365F0u;
        // 0x3365f4: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3365f0) {
            ctx->pc = 0x3366D0u;
            goto label_3366d0;
        }
    }
    ctx->pc = 0x3365F8u;
label_3365f8:
    // 0x3365f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3365f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3365fc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3365fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336600: 0xc0cda1c  jal         func_336870
    ctx->pc = 0x336600u;
    SET_GPR_U32(ctx, 31, 0x336608u);
    ctx->pc = 0x336604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336600u;
    // 0x336604: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336870u, 0x336600u, 0x336608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336608u;
label_336608:
    // 0x336608: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x336608u;
    {
        const bool branch_taken_0x336608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33660Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336608u;
        // 0x33660c: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x336608) {
            ctx->pc = 0x3366D0u;
            goto label_3366d0;
        }
    }
    ctx->pc = 0x336610u;
label_336610:
    // 0x336610: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x336610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336614: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x336614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336618: 0xc0cda68  jal         func_3369A0
    ctx->pc = 0x336618u;
    SET_GPR_U32(ctx, 31, 0x336620u);
    ctx->pc = 0x33661Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336618u;
    // 0x33661c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3369A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3369A0u, 0x336618u, 0x336620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336620u;
label_336620:
    // 0x336620: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x336620u;
    {
        const bool branch_taken_0x336620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336620u;
        // 0x336624: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x336620) {
            ctx->pc = 0x3366D0u;
            goto label_3366d0;
        }
    }
    ctx->pc = 0x336628u;
label_336628:
    // 0x336628: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x336628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33662c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x33662cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336630: 0xc0cda94  jal         func_336A50
    ctx->pc = 0x336630u;
    SET_GPR_U32(ctx, 31, 0x336638u);
    ctx->pc = 0x336634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336630u;
    // 0x336634: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A50u, 0x336630u, 0x336638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336638u;
label_336638:
    // 0x336638: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x336638u;
    {
        const bool branch_taken_0x336638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336638u;
        // 0x33663c: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x336638) {
            ctx->pc = 0x3366D0u;
            goto label_3366d0;
        }
    }
    ctx->pc = 0x336640u;
label_336640:
    // 0x336640: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x336640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336644: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x336644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336648: 0xc0cdaec  jal         func_336BB0
    ctx->pc = 0x336648u;
    SET_GPR_U32(ctx, 31, 0x336650u);
    ctx->pc = 0x33664Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336648u;
    // 0x33664c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336BB0u, 0x336648u, 0x336650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336650u;
label_336650:
    // 0x336650: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x336650u;
    {
        const bool branch_taken_0x336650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336650u;
        // 0x336654: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x336650) {
            ctx->pc = 0x3366D0u;
            goto label_3366d0;
        }
    }
    ctx->pc = 0x336658u;
label_336658:
    // 0x336658: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x336658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33665c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x33665cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336660: 0xc0cdb10  jal         func_336C40
    ctx->pc = 0x336660u;
    SET_GPR_U32(ctx, 31, 0x336668u);
    ctx->pc = 0x336664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336660u;
    // 0x336664: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336C40u, 0x336660u, 0x336668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336668u;
label_336668:
    // 0x336668: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x336668u;
    {
        const bool branch_taken_0x336668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33666Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336668u;
        // 0x33666c: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x336668) {
            ctx->pc = 0x3366D0u;
            goto label_3366d0;
        }
    }
    ctx->pc = 0x336670u;
label_336670:
    // 0x336670: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x336670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336674: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x336674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336678: 0xc0cdbd0  jal         func_336F40
    ctx->pc = 0x336678u;
    SET_GPR_U32(ctx, 31, 0x336680u);
    ctx->pc = 0x33667Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336678u;
    // 0x33667c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336F40u, 0x336678u, 0x336680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336680u;
label_336680:
    // 0x336680: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x336680u;
    {
        const bool branch_taken_0x336680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336680u;
        // 0x336684: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x336680) {
            ctx->pc = 0x3366D0u;
            goto label_3366d0;
        }
    }
    ctx->pc = 0x336688u;
label_336688:
    // 0x336688: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x336688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33668c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x33668cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336690: 0xc0cdbe8  jal         func_336FA0
    ctx->pc = 0x336690u;
    SET_GPR_U32(ctx, 31, 0x336698u);
    ctx->pc = 0x336694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336690u;
    // 0x336694: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336FA0u, 0x336690u, 0x336698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336698u;
label_336698:
    // 0x336698: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x336698u;
    {
        const bool branch_taken_0x336698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33669Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336698u;
        // 0x33669c: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x336698) {
            ctx->pc = 0x3366D0u;
            goto label_3366d0;
        }
    }
    ctx->pc = 0x3366A0u;
label_3366a0:
    // 0x3366a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3366a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3366a4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3366a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3366a8: 0xc0cdc0c  jal         func_337030
    ctx->pc = 0x3366A8u;
    SET_GPR_U32(ctx, 31, 0x3366B0u);
    ctx->pc = 0x3366ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3366A8u;
    // 0x3366ac: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337030u, 0x3366A8u, 0x3366B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3366B0u;
label_3366b0:
    // 0x3366b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3366B0u;
    {
        const bool branch_taken_0x3366b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3366B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3366B0u;
        // 0x3366b4: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3366b0) {
            ctx->pc = 0x3366D0u;
            goto label_3366d0;
        }
    }
    ctx->pc = 0x3366B8u;
label_3366b8:
    // 0x3366b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3366b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3366bc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3366bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3366c0: 0xc0cdb84  jal         func_336E10
    ctx->pc = 0x3366C0u;
    SET_GPR_U32(ctx, 31, 0x3366C8u);
    ctx->pc = 0x3366C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3366C0u;
    // 0x3366c4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336E10u, 0x3366C0u, 0x3366C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3366C8u;
label_3366c8:
    // 0x3366c8: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x3366c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3366cc: 0x0  nop
    ctx->pc = 0x3366ccu;
    // NOP
label_3366d0:
    // 0x3366d0: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x3366D0u;
    {
        const bool branch_taken_0x3366d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3366d0) {
            ctx->pc = 0x3366F8u;
            goto label_3366f8;
        }
    }
    ctx->pc = 0x3366D8u;
    // 0x3366d8: 0x86040024  lh          $a0, 0x24($s0)
    ctx->pc = 0x3366d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3366dc: 0x24030258  addiu       $v1, $zero, 0x258
    ctx->pc = 0x3366dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x3366e0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3366e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3366e4: 0xa6040024  sh          $a0, 0x24($s0)
    ctx->pc = 0x3366e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 4));
    // 0x3366e8: 0x86040024  lh          $a0, 0x24($s0)
    ctx->pc = 0x3366e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3366ec: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3366ECu;
    {
        const bool branch_taken_0x3366ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3366F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3366ECu;
        // 0x3366f0: 0x2673000c  addiu       $s3, $s3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3366ec) {
            ctx->pc = 0x336710u;
            goto label_336710;
        }
    }
    ctx->pc = 0x3366F4u;
    // 0x3366f4: 0x0  nop
    ctx->pc = 0x3366f4u;
    // NOP
label_3366f8:
    // 0x3366f8: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x3366f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3366fc: 0x3075ffff  andi        $s5, $v1, 0xFFFF
    ctx->pc = 0x3366fcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x336700: 0x2b1182a  slt         $v1, $s5, $s1
    ctx->pc = 0x336700u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x336704: 0x1460ff8e  bnez        $v1, . + 4 + (-0x72 << 2)
    ctx->pc = 0x336704u;
    {
        const bool branch_taken_0x336704 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x336708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336704u;
        // 0x336708: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336704) {
            ctx->pc = 0x336540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_336540;
        }
    }
    ctx->pc = 0x33670Cu;
    // 0x33670c: 0x0  nop
    ctx->pc = 0x33670cu;
    // NOP
label_336710:
    // 0x336710: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x336710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x336714: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x336714u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x336718: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x336718u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33671c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33671cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x336720: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x336720u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x336724: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x336724u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x336728: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x336728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33672c: 0x3e00008  jr          $ra
    ctx->pc = 0x33672Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33672Cu;
        // 0x336730: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33672Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336734u;
}
