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

// Function: sub_003D7600
// Address: 0x3d7600 - 0x3d7814
void sub_003D7600_0x3d7600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D7600_0x3d7600");
#endif

    switch (ctx->pc) {
        case 0x3d7618u: goto label_3d7618;
        case 0x3d7640u: goto label_3d7640;
        case 0x3d7650u: goto label_3d7650;
        case 0x3d76e0u: goto label_3d76e0;
        case 0x3d7748u: goto label_3d7748;
        case 0x3d7770u: goto label_3d7770;
        case 0x3d7778u: goto label_3d7778;
        case 0x3d77b8u: goto label_3d77b8;
        case 0x3d77c0u: goto label_3d77c0;
        case 0x3d77d8u: goto label_3d77d8;
        case 0x3d77e0u: goto label_3d77e0;
        case 0x3d77f8u: goto label_3d77f8;
        default: break;
    }

    ctx->pc = 0x3d7600u;

    // 0x3d7600: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d7600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3d7604: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d7604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3d7608: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d7608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3d760c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d760cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d7610: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d7610u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d7614: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x3d7614u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3d7618:
    // 0x3d7618: 0x92232bae  lbu         $v1, 0x2BAE($s1)
    ctx->pc = 0x3d7618u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11182)));
    // 0x3d761c: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x3d761cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x3d7620: 0x10200075  beqz        $at, . + 4 + (0x75 << 2)
    ctx->pc = 0x3D7620u;
    {
        const bool branch_taken_0x3d7620 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7620u;
        // 0x3d7624: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7620) {
            ctx->pc = 0x3D77F8u;
            goto label_3d77f8;
        }
    }
    ctx->pc = 0x3D7628u;
    // 0x3d7628: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3d7628u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3d762c: 0x24844670  addiu       $a0, $a0, 0x4670
    ctx->pc = 0x3d762cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18032));
    // 0x3d7630: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3d7630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3d7634: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3d7634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d7638: 0x600008  jr          $v1
    ctx->pc = 0x3D7638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3D7640u: goto label_3d7640;
            case 0x3D76E0u: goto label_3d76e0;
            case 0x3D7748u: goto label_3d7748;
            case 0x3D7770u: goto label_3d7770;
            case 0x3D7778u: goto label_3d7778;
            case 0x3D77B8u: goto label_3d77b8;
            case 0x3D77C0u: goto label_3d77c0;
            case 0x3D77D8u: goto label_3d77d8;
            case 0x3D77E0u: goto label_3d77e0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7638u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3D7640u;
label_3d7640:
    // 0x3d7640: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d7640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d7644: 0xa2222bae  sb          $v0, 0x2BAE($s1)
    ctx->pc = 0x3d7644u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d7648: 0xc0f57d0  jal         func_3D5F40
    ctx->pc = 0x3D7648u;
    SET_GPR_U32(ctx, 31, 0x3D7650u);
    ctx->pc = 0x3D764Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7648u;
    // 0x3d764c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D5F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5F40u, 0x3D7648u, 0x3D7650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7650u;
label_3d7650:
    // 0x3d7650: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x3d7650u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3d7654: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d7654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d7658: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3D7658u;
    {
        const bool branch_taken_0x3d7658 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d7658) {
            ctx->pc = 0x3D76A0u;
            goto label_3d76a0;
        }
    }
    ctx->pc = 0x3D7660u;
    // 0x3d7660: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D7660u;
    {
        const bool branch_taken_0x3d7660 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7660) {
            ctx->pc = 0x3D7670u;
            goto label_3d7670;
        }
    }
    ctx->pc = 0x3D7668u;
    // 0x3d7668: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3D7668u;
    {
        const bool branch_taken_0x3d7668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7668) {
            ctx->pc = 0x3D76E0u;
            goto label_3d76e0;
        }
    }
    ctx->pc = 0x3D7670u;
label_3d7670:
    // 0x3d7670: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x3d7670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3d7674: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3d7674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x3d7678: 0x34630dcd  ori         $v1, $v1, 0xDCD
    ctx->pc = 0x3d7678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3533);
    // 0x3d767c: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x3d767cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3d7680: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d7680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d7684: 0xaf8380e0  sw          $v1, -0x7F20($gp)
    ctx->pc = 0x3d7684u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 3));
    // 0x3d7688: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3d7688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3d768c: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x3d768cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x3d7690: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3d7690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3d7694: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x3d7694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x3d7698: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3D7698u;
    {
        const bool branch_taken_0x3d7698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D769Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7698u;
        // 0x3d769c: 0xa6232b24  sh          $v1, 0x2B24($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 11044), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7698) {
            ctx->pc = 0x3D76E0u;
            goto label_3d76e0;
        }
    }
    ctx->pc = 0x3D76A0u;
label_3d76a0:
    // 0x3d76a0: 0x8f8580e0  lw          $a1, -0x7F20($gp)
    ctx->pc = 0x3d76a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3d76a4: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x3d76a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x3d76a8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3d76a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3d76ac: 0x34840dcd  ori         $a0, $a0, 0xDCD
    ctx->pc = 0x3d76acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3533);
    // 0x3d76b0: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x3d76b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3d76b4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3d76b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3d76b8: 0xaf8480e0  sw          $a0, -0x7F20($gp)
    ctx->pc = 0x3d76b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 4));
    // 0x3d76bc: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x3d76bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3d76c0: 0x42302  srl         $a0, $a0, 12
    ctx->pc = 0x3d76c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 12));
    // 0x3d76c4: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x3d76c4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x3d76c8: 0x0  nop
    ctx->pc = 0x3d76c8u;
    // NOP
    // 0x3d76cc: 0x0  nop
    ctx->pc = 0x3d76ccu;
    // NOP
    // 0x3d76d0: 0x1810  mfhi        $v1
    ctx->pc = 0x3d76d0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3d76d4: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x3d76d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x3d76d8: 0xa6232b24  sh          $v1, 0x2B24($s1)
    ctx->pc = 0x3d76d8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11044), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d76dc: 0x0  nop
    ctx->pc = 0x3d76dcu;
    // NOP
label_3d76e0:
    // 0x3d76e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3d76e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3d76e4: 0xa2232bae  sb          $v1, 0x2BAE($s1)
    ctx->pc = 0x3d76e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d76e8: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x3d76e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x3d76ec: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3d76ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3d76f0: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x3d76f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x3d76f4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3d76f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3d76f8: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x3d76f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x3d76fc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3d76fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3d7700: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3d7700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3d7704: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d7704u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d7708: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3d7708u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3d770c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3d770cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3d7710: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3d7710u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3d7714: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3D7714u;
    {
        const bool branch_taken_0x3d7714 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d7714) {
            ctx->pc = 0x3D772Cu;
            goto label_3d772c;
        }
    }
    ctx->pc = 0x3D771Cu;
    // 0x3d771c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d771cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3d7720: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3d7720u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3d7724: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D7724u;
    {
        const bool branch_taken_0x3d7724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7724u;
        // 0x3d7728: 0xa6242b26  sh          $a0, 0x2B26($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 11046), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7724) {
            ctx->pc = 0x3D7748u;
            goto label_3d7748;
        }
    }
    ctx->pc = 0x3D772Cu;
label_3d772c:
    // 0x3d772c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3d772cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3d7730: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3d7730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3d7734: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d7734u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3d7738: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3d7738u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3d773c: 0x0  nop
    ctx->pc = 0x3d773cu;
    // NOP
    // 0x3d7740: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3d7740u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3d7744: 0xa6242b26  sh          $a0, 0x2B26($s1)
    ctx->pc = 0x3d7744u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11046), (uint16_t)GPR_U32(ctx, 4));
label_3d7748:
    // 0x3d7748: 0x86232b26  lh          $v1, 0x2B26($s1)
    ctx->pc = 0x3d7748u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 11046)));
    // 0x3d774c: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D774Cu;
    {
        const bool branch_taken_0x3d774c = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x3D7750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D774Cu;
        // 0x3d7750: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d774c) {
            ctx->pc = 0x3D7760u;
            goto label_3d7760;
        }
    }
    ctx->pc = 0x3D7754u;
    // 0x3d7754: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x3D7754u;
    {
        const bool branch_taken_0x3d7754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7754u;
        // 0x3d7758: 0xa2232bae  sb          $v1, 0x2BAE($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7754) {
            ctx->pc = 0x3D77F8u;
            goto label_3d77f8;
        }
    }
    ctx->pc = 0x3D775Cu;
    // 0x3d775c: 0x0  nop
    ctx->pc = 0x3d775cu;
    // NOP
label_3d7760:
    // 0x3d7760: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x3d7760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3d7764: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x3d7764u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d7768: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x3D7768u;
    {
        const bool branch_taken_0x3d7768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7768u;
        // 0x3d776c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7768) {
            ctx->pc = 0x3D77F8u;
            goto label_3d77f8;
        }
    }
    ctx->pc = 0x3D7770u;
label_3d7770:
    // 0x3d7770: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3d7770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3d7774: 0xa2232bae  sb          $v1, 0x2BAE($s1)
    ctx->pc = 0x3d7774u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 3));
label_3d7778:
    // 0x3d7778: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x3d7778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x3d777c: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x3d777cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d7780: 0x86232b24  lh          $v1, 0x2B24($s1)
    ctx->pc = 0x3d7780u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 11044)));
    // 0x3d7784: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3d7784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3d7788: 0xa6232b24  sh          $v1, 0x2B24($s1)
    ctx->pc = 0x3d7788u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11044), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d778c: 0x86232b24  lh          $v1, 0x2B24($s1)
    ctx->pc = 0x3d778cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 11044)));
    // 0x3d7790: 0x1c600005  bgtz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D7790u;
    {
        const bool branch_taken_0x3d7790 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x3D7794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7790u;
        // 0x3d7794: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7790) {
            ctx->pc = 0x3D77A8u;
            goto label_3d77a8;
        }
    }
    ctx->pc = 0x3D7798u;
    // 0x3d7798: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3d7798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3d779c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3D779Cu;
    {
        const bool branch_taken_0x3d779c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D77A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D779Cu;
        // 0x3d77a0: 0xa2232bae  sb          $v1, 0x2BAE($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d779c) {
            ctx->pc = 0x3D77F8u;
            goto label_3d77f8;
        }
    }
    ctx->pc = 0x3D77A4u;
    // 0x3d77a4: 0x0  nop
    ctx->pc = 0x3d77a4u;
    // NOP
label_3d77a8:
    // 0x3d77a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d77a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d77ac: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3D77ACu;
    {
        const bool branch_taken_0x3d77ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D77B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D77ACu;
        // 0x3d77b0: 0xa2232bae  sb          $v1, 0x2BAE($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d77ac) {
            ctx->pc = 0x3D77F8u;
            goto label_3d77f8;
        }
    }
    ctx->pc = 0x3D77B4u;
    // 0x3d77b4: 0x0  nop
    ctx->pc = 0x3d77b4u;
    // NOP
label_3d77b8:
    // 0x3d77b8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3d77b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3d77bc: 0xa2232bae  sb          $v1, 0x2BAE($s1)
    ctx->pc = 0x3d77bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 3));
label_3d77c0:
    // 0x3d77c0: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x3d77c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x3d77c4: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x3d77c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d77c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3d77c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d77cc: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3d77ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3d77d0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3D77D0u;
    {
        const bool branch_taken_0x3d77d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D77D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D77D0u;
        // 0x3d77d4: 0xa2232bae  sb          $v1, 0x2BAE($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d77d0) {
            ctx->pc = 0x3D77F8u;
            goto label_3d77f8;
        }
    }
    ctx->pc = 0x3D77D8u;
label_3d77d8:
    // 0x3d77d8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3d77d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3d77dc: 0xa2232bae  sb          $v1, 0x2BAE($s1)
    ctx->pc = 0x3d77dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 3));
label_3d77e0:
    // 0x3d77e0: 0x24030025  addiu       $v1, $zero, 0x25
    ctx->pc = 0x3d77e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x3d77e4: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x3d77e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d77e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3d77e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d77ec: 0xa2202bae  sb          $zero, 0x2BAE($s1)
    ctx->pc = 0x3d77ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d77f0: 0xa2202baf  sb          $zero, 0x2BAF($s1)
    ctx->pc = 0x3d77f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11183), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d77f4: 0x0  nop
    ctx->pc = 0x3d77f4u;
    // NOP
label_3d77f8:
    // 0x3d77f8: 0x1600ff87  bnez        $s0, . + 4 + (-0x79 << 2)
    ctx->pc = 0x3D77F8u;
    {
        const bool branch_taken_0x3d77f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d77f8) {
            ctx->pc = 0x3D7618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d7618;
        }
    }
    ctx->pc = 0x3D7800u;
    // 0x3d7800: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d7800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d7804: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d7804u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d7808: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d7808u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d780c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D780Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D7810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D780Cu;
        // 0x3d7810: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D780Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D7814u;
}
