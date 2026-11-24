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

// Function: sub_00172020
// Address: 0x172020 - 0x172314
void sub_00172020_0x172020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172020_0x172020");
#endif

    switch (ctx->pc) {
        case 0x1720d0u: goto label_1720d0;
        case 0x172100u: goto label_172100;
        case 0x17211cu: goto label_17211c;
        case 0x172178u: goto label_172178;
        case 0x1722bcu: goto label_1722bc;
        default: break;
    }

    ctx->pc = 0x172020u;

    // 0x172020: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x172020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x172024: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x172024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x172028: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x172028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x17202c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x17202cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x172030: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x172030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x172034: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x172034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x172038: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x172038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17203c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17203cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x172040: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x172040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x172044: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x172044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x172048: 0x94830010  lhu         $v1, 0x10($a0)
    ctx->pc = 0x172048u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x17204c: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x17204cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x172050: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x172050u;
    {
        const bool branch_taken_0x172050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x172054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172050u;
        // 0x172054: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172050) {
            ctx->pc = 0x1720A8u;
            goto label_1720a8;
        }
    }
    ctx->pc = 0x172058u;
    // 0x172058: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x172058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x17205c: 0xc4230388  lwc1        $f3, 0x388($at)
    ctx->pc = 0x17205cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000388u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x172060: 0xc6c40058  lwc1        $f4, 0x58($s6)
    ctx->pc = 0x172060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x172064: 0xc6c20050  lwc1        $f2, 0x50($s6)
    ctx->pc = 0x172064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x172068: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x172068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x17206c: 0xc4210380  lwc1        $f1, 0x380($at)
    ctx->pc = 0x17206cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000380u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172070: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x172070u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x172074: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x172074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x172078: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x172078u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x17207c: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x17207cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x172080: 0xc4200390  lwc1        $f0, 0x390($at)
    ctx->pc = 0x172080u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000390u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172084: 0x4603185c  madd.s      $f1, $f3, $f3
    ctx->pc = 0x172084u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x172088: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x172088u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17208c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x17208Cu;
    {
        const bool branch_taken_0x17208c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x172090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17208Cu;
        // 0x172090: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17208c) {
            ctx->pc = 0x172098u;
            goto label_172098;
        }
    }
    ctx->pc = 0x172094u;
    // 0x172094: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x172094u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172098:
    // 0x172098: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x172098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x17209c: 0x14600092  bnez        $v1, . + 4 + (0x92 << 2)
    ctx->pc = 0x17209Cu;
    {
        const bool branch_taken_0x17209c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17209c) {
            ctx->pc = 0x1722E8u;
            goto label_1722e8;
        }
    }
    ctx->pc = 0x1720A4u;
    // 0x1720a4: 0x0  nop
    ctx->pc = 0x1720a4u;
    // NOP
label_1720a8:
    // 0x1720a8: 0x8ec60034  lw          $a2, 0x34($s6)
    ctx->pc = 0x1720a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 52)));
    // 0x1720ac: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1720acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1720b0: 0x2404fff0  addiu       $a0, $zero, -0x10
    ctx->pc = 0x1720b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1720b4: 0x8c25fc90  lw          $a1, -0x370($at)
    ctx->pc = 0x1720b4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81FC90u));
    // 0x1720b8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1720b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1720bc: 0x24d70010  addiu       $s7, $a2, 0x10
    ctx->pc = 0x1720bcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1720c0: 0x84c60008  lh          $a2, 0x8($a2)
    ctx->pc = 0x1720c0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1720c4: 0x24a5000f  addiu       $a1, $a1, 0xF
    ctx->pc = 0x1720c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x1720c8: 0x10c30081  beq         $a2, $v1, . + 4 + (0x81 << 2)
    ctx->pc = 0x1720C8u;
    {
        const bool branch_taken_0x1720c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x1720CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1720C8u;
        // 0x1720cc: 0xa49824  and         $s3, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1720c8) {
            ctx->pc = 0x1722D0u;
            goto label_1722d0;
        }
    }
    ctx->pc = 0x1720D0u;
label_1720d0:
    // 0x1720d0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1720d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1720d4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1720d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1720d8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1720d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1720dc: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1720dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1720e0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1720e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1720e4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1720e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1720e8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1720e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1720ec: 0x345202a0  ori         $s2, $v0, 0x2A0
    ctx->pc = 0x1720ecu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)672);
    // 0x1720f0: 0x2e3a821  addu        $s5, $s7, $v1
    ctx->pc = 0x1720f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1720f4: 0x34500100  ori         $s0, $v0, 0x100
    ctx->pc = 0x1720f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x1720f8: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x1720f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1720fc: 0x0  nop
    ctx->pc = 0x1720fcu;
    // NOP
label_172100:
    // 0x172100: 0x86c8002c  lh          $t0, 0x2C($s6)
    ctx->pc = 0x172100u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 44)));
    // 0x172104: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x172104u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x172108: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x172108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17210c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x17210cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x172110: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x172110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x172114: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x172114u;
    SET_GPR_U32(ctx, 31, 0x17211Cu);
    ctx->pc = 0x172118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172114u;
    // 0x172118: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x172114u, 0x17211Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17211Cu;
label_17211c:
    // 0x17211c: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x17211Cu;
    {
        const bool branch_taken_0x17211c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17211c) {
            ctx->pc = 0x1722C0u;
            goto label_1722c0;
        }
    }
    ctx->pc = 0x172124u;
    // 0x172124: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x172124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x172128: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x172128u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x17212c: 0x2a43c  dsll32      $s4, $v0, 16
    ctx->pc = 0x17212cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) << (32 + 16));
    // 0x172130: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x172130u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x172134: 0x14a43f  dsra32      $s4, $s4, 16
    ctx->pc = 0x172134u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
    // 0x172138: 0x2a820009  slti        $v0, $s4, 0x9
    ctx->pc = 0x172138u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x17213c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x17213Cu;
    {
        const bool branch_taken_0x17213c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x172140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17213Cu;
        // 0x172140: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17213c) {
            ctx->pc = 0x172100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_172100;
        }
    }
    ctx->pc = 0x172144u;
    // 0x172144: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x172144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x172148: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x172148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17214c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x17214cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x172150: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x172150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172154: 0x3c026c48  lui         $v0, 0x6C48
    ctx->pc = 0x172154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27720 << 16));
    // 0x172158: 0x3442004a  ori         $v0, $v0, 0x4A
    ctx->pc = 0x172158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)74);
    // 0x17215c: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x17215cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x172160: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x172160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x172164: 0x24b30010  addiu       $s3, $a1, 0x10
    ctx->pc = 0x172164u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x172168: 0x34480100  ori         $t0, $v0, 0x100
    ctx->pc = 0x172168u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x17216c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x17216cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x172170: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x172170u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172174: 0x0  nop
    ctx->pc = 0x172174u;
    // NOP
label_172178:
    // 0x172178: 0x8d090000  lw          $t1, 0x0($t0)
    ctx->pc = 0x172178u;
    SET_GPR_S32(ctx, 9, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 8), 0))); // MMIO: 0x70000100
    // 0x17217c: 0x43c3c  dsll32      $a3, $a0, 16
    ctx->pc = 0x17217cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << (32 + 16));
    // 0x172180: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x172180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x172184: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x172184u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x172188: 0x676023  subu        $t4, $v1, $a3
    ctx->pc = 0x172188u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x17218c: 0x63c3c  dsll32      $a3, $a2, 16
    ctx->pc = 0x17218cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 16));
    // 0x172190: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x172190u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x172194: 0xa6690000  sh          $t1, 0x0($s3)
    ctx->pc = 0x172194u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x172198: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x172198u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x17219c: 0x8d0d0004  lw          $t5, 0x4($t0)
    ctx->pc = 0x17219cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1721a0: 0x675823  subu        $t3, $v1, $a3
    ctx->pc = 0x1721a0u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1721a4: 0xc23821  addu        $a3, $a2, $v0
    ctx->pc = 0x1721a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1721a8: 0x24860002  addiu       $a2, $a0, 0x2
    ctx->pc = 0x1721a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x1721ac: 0x6543c  dsll32      $t2, $a2, 16
    ctx->pc = 0x1721acu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) << (32 + 16));
    // 0x1721b0: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x1721b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x1721b4: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x1721b4u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x1721b8: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x1721b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1721bc: 0xa3100  sll         $a2, $t2, 4
    ctx->pc = 0x1721bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x1721c0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1721c0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1721c4: 0xa66d0002  sh          $t5, 0x2($s3)
    ctx->pc = 0x1721c4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 13));
    // 0x1721c8: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1721c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1721cc: 0x8d0d0008  lw          $t5, 0x8($t0)
    ctx->pc = 0x1721ccu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1721d0: 0x6a5023  subu        $t2, $v1, $t2
    ctx->pc = 0x1721d0u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1721d4: 0x28890009  slti        $t1, $a0, 0x9
    ctx->pc = 0x1721d4u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1721d8: 0xae6d0004  sw          $t5, 0x4($s3)
    ctx->pc = 0x1721d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 13));
    // 0x1721dc: 0x25080030  addiu       $t0, $t0, 0x30
    ctx->pc = 0x1721dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
    // 0x1721e0: 0x8ecd0020  lw          $t5, 0x20($s6)
    ctx->pc = 0x1721e0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x1721e4: 0xae6d0008  sw          $t5, 0x8($s3)
    ctx->pc = 0x1721e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 13));
    // 0x1721e8: 0x92ad0006  lbu         $t5, 0x6($s5)
    ctx->pc = 0x1721e8u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x1721ec: 0x1ac6018  mult        $t4, $t5, $t4
    ctx->pc = 0x1721ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x1721f0: 0xc60c2  srl         $t4, $t4, 3
    ctx->pc = 0x1721f0u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 3));
    // 0x1721f4: 0xa26c000b  sb          $t4, 0xB($s3)
    ctx->pc = 0x1721f4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 11), (uint8_t)GPR_U32(ctx, 12));
    // 0x1721f8: 0x8cec0000  lw          $t4, 0x0($a3)
    ctx->pc = 0x1721f8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1721fc: 0xa66c0010  sh          $t4, 0x10($s3)
    ctx->pc = 0x1721fcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 16), (uint16_t)GPR_U32(ctx, 12));
    // 0x172200: 0x8cec0004  lw          $t4, 0x4($a3)
    ctx->pc = 0x172200u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x172204: 0xa66c0012  sh          $t4, 0x12($s3)
    ctx->pc = 0x172204u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 18), (uint16_t)GPR_U32(ctx, 12));
    // 0x172208: 0x8ce70008  lw          $a3, 0x8($a3)
    ctx->pc = 0x172208u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x17220c: 0xae670014  sw          $a3, 0x14($s3)
    ctx->pc = 0x17220cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 7));
    // 0x172210: 0x8ec70020  lw          $a3, 0x20($s6)
    ctx->pc = 0x172210u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x172214: 0xae670018  sw          $a3, 0x18($s3)
    ctx->pc = 0x172214u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 7));
    // 0x172218: 0x92a70006  lbu         $a3, 0x6($s5)
    ctx->pc = 0x172218u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x17221c: 0x70eb3818  mult1       $a3, $a3, $t3
    ctx->pc = 0x17221cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 11); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x172220: 0x738c2  srl         $a3, $a3, 3
    ctx->pc = 0x172220u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 3));
    // 0x172224: 0xa267001b  sb          $a3, 0x1B($s3)
    ctx->pc = 0x172224u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 27), (uint8_t)GPR_U32(ctx, 7));
    // 0x172228: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x172228u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17222c: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x17222cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x172230: 0xa6670000  sh          $a3, 0x0($s3)
    ctx->pc = 0x172230u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x172234: 0x8cc70004  lw          $a3, 0x4($a2)
    ctx->pc = 0x172234u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x172238: 0xa6670002  sh          $a3, 0x2($s3)
    ctx->pc = 0x172238u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x17223c: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x17223cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x172240: 0xae660004  sw          $a2, 0x4($s3)
    ctx->pc = 0x172240u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
    // 0x172244: 0x8ec60020  lw          $a2, 0x20($s6)
    ctx->pc = 0x172244u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x172248: 0xae660008  sw          $a2, 0x8($s3)
    ctx->pc = 0x172248u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 6));
    // 0x17224c: 0x92a60006  lbu         $a2, 0x6($s5)
    ctx->pc = 0x17224cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x172250: 0xca3018  mult        $a2, $a2, $t2
    ctx->pc = 0x172250u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x172254: 0x630c2  srl         $a2, $a2, 3
    ctx->pc = 0x172254u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 3));
    // 0x172258: 0xa266000b  sb          $a2, 0xB($s3)
    ctx->pc = 0x172258u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 11), (uint8_t)GPR_U32(ctx, 6));
    // 0x17225c: 0x1520ffc6  bnez        $t1, . + 4 + (-0x3A << 2)
    ctx->pc = 0x17225Cu;
    {
        const bool branch_taken_0x17225c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x172260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17225Cu;
        // 0x172260: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17225c) {
            ctx->pc = 0x172178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_172178;
        }
    }
    ctx->pc = 0x172264u;
    // 0x172264: 0x92c30012  lbu         $v1, 0x12($s6)
    ctx->pc = 0x172264u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 18)));
    // 0x172268: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x172268u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x17226c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x17226cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x172270: 0x24c6aed0  addiu       $a2, $a2, -0x5130
    ctx->pc = 0x172270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946512));
    // 0x172274: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x172274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x172278: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x172278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x17227c: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x17227cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x172280: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x172280u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x172284: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x172284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x172288: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x172288u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17228c: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x17228cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x172290: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x172290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x172294: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x172294u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x172298: 0x92c20012  lbu         $v0, 0x12($s6)
    ctx->pc = 0x172298u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 18)));
    // 0x17229c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17229cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1722a0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1722a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1722a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1722a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1722a8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1722a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1722ac: 0xa0a2000f  sb          $v0, 0xF($a1)
    ctx->pc = 0x1722acu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x1722b0: 0x8c220108  lw          $v0, 0x108($at)
    ctx->pc = 0x1722b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 264)));
    // 0x1722b4: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x1722B4u;
    SET_GPR_U32(ctx, 31, 0x1722BCu);
    ctx->pc = 0x1722B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1722B4u;
    // 0x1722b8: 0x23183  sra         $a2, $v0, 6 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x1722B4u, 0x1722BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1722BCu;
label_1722bc:
    // 0x1722bc: 0x0  nop
    ctx->pc = 0x1722bcu;
    // NOP
label_1722c0:
    // 0x1722c0: 0x86a60002  lh          $a2, 0x2($s5)
    ctx->pc = 0x1722c0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x1722c4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1722c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1722c8: 0x14c3ff81  bne         $a2, $v1, . + 4 + (-0x7F << 2)
    ctx->pc = 0x1722C8u;
    {
        const bool branch_taken_0x1722c8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x1722c8) {
            ctx->pc = 0x1720D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1720d0;
        }
    }
    ctx->pc = 0x1722D0u;
label_1722d0:
    // 0x1722d0: 0x2664000f  addiu       $a0, $s3, 0xF
    ctx->pc = 0x1722d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 15));
    // 0x1722d4: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1722d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1722d8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1722d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1722dc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1722dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1722e0: 0xac23fc90  sw          $v1, -0x370($at)
    ctx->pc = 0x1722e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 3));
    // 0x1722e4: 0x0  nop
    ctx->pc = 0x1722e4u;
    // NOP
label_1722e8:
    // 0x1722e8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1722e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1722ec: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1722ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1722f0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1722f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1722f4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1722f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1722f8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1722f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1722fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1722fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x172300: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x172300u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x172304: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x172304u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172308: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x172308u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17230c: 0x3e00008  jr          $ra
    ctx->pc = 0x17230Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17230Cu;
        // 0x172310: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17230Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172314u;
}
