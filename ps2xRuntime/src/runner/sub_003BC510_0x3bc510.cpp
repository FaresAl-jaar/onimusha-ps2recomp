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

// Function: sub_003BC510
// Address: 0x3bc510 - 0x3bc9b0
void sub_003BC510_0x3bc510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BC510_0x3bc510");
#endif

    switch (ctx->pc) {
        case 0x3bc560u: goto label_3bc560;
        case 0x3bc56cu: goto label_3bc56c;
        case 0x3bc57cu: goto label_3bc57c;
        case 0x3bc678u: goto label_3bc678;
        case 0x3bc91cu: goto label_3bc91c;
        case 0x3bc96cu: goto label_3bc96c;
        case 0x3bc97cu: goto label_3bc97c;
        default: break;
    }

    ctx->pc = 0x3bc510u;

    // 0x3bc510: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3bc510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3bc514: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3bc514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bc518: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3bc518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3bc51c: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x3bc51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x3bc520: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3bc520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3bc524: 0xc7808430  lwc1        $f0, -0x7BD0($gp)
    ctx->pc = 0x3bc524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bc528: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x3bc528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x3bc52c: 0x90850821  lbu         $a1, 0x821($a0)
    ctx->pc = 0x3bc52cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3bc530: 0x10a30109  beq         $a1, $v1, . + 4 + (0x109 << 2)
    ctx->pc = 0x3BC530u;
    {
        const bool branch_taken_0x3bc530 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3BC534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC530u;
        // 0x3bc534: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc530) {
            ctx->pc = 0x3BC958u;
            goto label_3bc958;
        }
    }
    ctx->pc = 0x3BC538u;
    // 0x3bc538: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BC538u;
    {
        const bool branch_taken_0x3bc538 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bc538) {
            ctx->pc = 0x3BC548u;
            goto label_3bc548;
        }
    }
    ctx->pc = 0x3BC540u;
    // 0x3bc540: 0x10000117  b           . + 4 + (0x117 << 2)
    ctx->pc = 0x3BC540u;
    {
        const bool branch_taken_0x3bc540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bc540) {
            ctx->pc = 0x3BC9A0u;
            goto label_3bc9a0;
        }
    }
    ctx->pc = 0x3BC548u;
label_3bc548:
    // 0x3bc548: 0x92022b59  lbu         $v0, 0x2B59($s0)
    ctx->pc = 0x3bc548u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11097)));
    // 0x3bc54c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3bc54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3bc550: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3BC550u;
    {
        const bool branch_taken_0x3bc550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bc550) {
            ctx->pc = 0x3BC570u;
            goto label_3bc570;
        }
    }
    ctx->pc = 0x3BC558u;
    // 0x3bc558: 0xc0ef26c  jal         func_3BC9B0
    ctx->pc = 0x3BC558u;
    SET_GPR_U32(ctx, 31, 0x3BC560u);
    ctx->pc = 0x3BC9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC9B0u, 0x3BC558u, 0x3BC560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BC560u;
label_3bc560:
    // 0x3bc560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bc560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bc564: 0xc0ef2e4  jal         func_3BCB90
    ctx->pc = 0x3BC564u;
    SET_GPR_U32(ctx, 31, 0x3BC56Cu);
    ctx->pc = 0x3BC568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BC564u;
    // 0x3bc568: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BCB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCB90u, 0x3BC564u, 0x3BC56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BC56Cu;
label_3bc56c:
    // 0x3bc56c: 0x0  nop
    ctx->pc = 0x3bc56cu;
    // NOP
label_3bc570:
    // 0x3bc570: 0x26042b20  addiu       $a0, $s0, 0x2B20
    ctx->pc = 0x3bc570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11040));
    // 0x3bc574: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x3BC574u;
    SET_GPR_U32(ctx, 31, 0x3BC57Cu);
    ctx->pc = 0x3BC578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BC574u;
    // 0x3bc578: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x3BC574u, 0x3BC57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BC57Cu;
label_3bc57c:
    // 0x3bc57c: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x3bc57cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x3bc580: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x3bc580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x3bc584: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3bc584u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3bc588: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3bc588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3bc58c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3bc58cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3bc590: 0x0  nop
    ctx->pc = 0x3bc590u;
    // NOP
    // 0x3bc594: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3bc594u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3bc598: 0x860300c2  lh          $v1, 0xC2($s0)
    ctx->pc = 0x3bc598u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x3bc59c: 0x96022b42  lhu         $v0, 0x2B42($s0)
    ctx->pc = 0x3bc59cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11074)));
    // 0x3bc5a0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3bc5a0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3bc5a4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3bc5a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3bc5a8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3bc5a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3bc5ac: 0x0  nop
    ctx->pc = 0x3bc5acu;
    // NOP
    // 0x3bc5b0: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x3bc5b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x3bc5b4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x3bc5b4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x3bc5b8: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x3bc5b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x3bc5bc: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x3bc5bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x3bc5c0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x3bc5c0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x3bc5c4: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x3bc5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3bc5c8: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x3bc5c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x3bc5cc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3bc5ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3bc5d0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3bc5d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3bc5d4: 0x31a83  sra         $v1, $v1, 10
    ctx->pc = 0x3bc5d4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 10));
    // 0x3bc5d8: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x3bc5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x3bc5dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3BC5DCu;
    {
        const bool branch_taken_0x3bc5dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BC5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC5DCu;
        // 0x3bc5e0: 0x9064004c  lbu         $a0, 0x4C($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc5dc) {
            ctx->pc = 0x3BC5F8u;
            goto label_3bc5f8;
        }
    }
    ctx->pc = 0x3BC5E4u;
    // 0x3bc5e4: 0x960207f2  lhu         $v0, 0x7F2($s0)
    ctx->pc = 0x3bc5e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2034)));
    // 0x3bc5e8: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x3bc5e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3bc5ec: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3BC5ECu;
    {
        const bool branch_taken_0x3bc5ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3bc5ec) {
            ctx->pc = 0x3BC618u;
            goto label_3bc618;
        }
    }
    ctx->pc = 0x3BC5F4u;
    // 0x3bc5f4: 0x0  nop
    ctx->pc = 0x3bc5f4u;
    // NOP
label_3bc5f8:
    // 0x3bc5f8: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3bc5f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3bc5fc: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3bc5fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3bc600: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3bc600u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3bc604: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3bc604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3bc608: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x3bc608u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x3bc60c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3bc60cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3bc610: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x3bc610u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x3bc614: 0xae0207ec  sw          $v0, 0x7EC($s0)
    ctx->pc = 0x3bc614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 2));
label_3bc618:
    // 0x3bc618: 0x96022b42  lhu         $v0, 0x2B42($s0)
    ctx->pc = 0x3bc618u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11074)));
    // 0x3bc61c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3bc61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3bc620: 0xa6022b42  sh          $v0, 0x2B42($s0)
    ctx->pc = 0x3bc620u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11074), (uint16_t)GPR_U32(ctx, 2));
    // 0x3bc624: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3bc624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3bc628: 0x96022b44  lhu         $v0, 0x2B44($s0)
    ctx->pc = 0x3bc628u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11076)));
    // 0x3bc62c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x3bc62cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3bc630: 0x102000c5  beqz        $at, . + 4 + (0xC5 << 2)
    ctx->pc = 0x3BC630u;
    {
        const bool branch_taken_0x3bc630 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bc630) {
            ctx->pc = 0x3BC948u;
            goto label_3bc948;
        }
    }
    ctx->pc = 0x3BC638u;
    // 0x3bc638: 0x86052b40  lh          $a1, 0x2B40($s0)
    ctx->pc = 0x3bc638u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11072)));
    // 0x3bc63c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x3bc63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x3bc640: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x3bc640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3bc644: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3bc644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3bc648: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x3bc648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x3bc64c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3bc64cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3bc650: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3bc650u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bc654: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x3bc654u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3bc658: 0x0  nop
    ctx->pc = 0x3bc658u;
    // NOP
    // 0x3bc65c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3bc65cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3bc660: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3bc660u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3bc664: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x3bc664u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3bc668: 0x0  nop
    ctx->pc = 0x3bc668u;
    // NOP
    // 0x3bc66c: 0x0  nop
    ctx->pc = 0x3bc66cu;
    // NOP
    // 0x3bc670: 0xc096784  jal         func_259E10
    ctx->pc = 0x3BC670u;
    SET_GPR_U32(ctx, 31, 0x3BC678u);
    ctx->pc = 0x259E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259E10u, 0x3BC670u, 0x3BC678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BC678u;
label_3bc678:
    // 0x3bc678: 0xc7848078  lwc1        $f4, -0x7F88($gp)
    ctx->pc = 0x3bc678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3bc67c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3bc67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3bc680: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3bc680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3bc684: 0x3c024461  lui         $v0, 0x4461
    ctx->pc = 0x3bc684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17505 << 16));
    // 0x3bc688: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3bc688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3bc68c: 0x0  nop
    ctx->pc = 0x3bc68cu;
    // NOP
    // 0x3bc690: 0x460418c3  div.s       $f3, $f3, $f4
    ctx->pc = 0x3bc690u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[4]); }
    // 0x3bc694: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x3bc694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x3bc698: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3bc698u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3bc69c: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3bc69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3bc6a0: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x3bc6a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3bc6a4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3bc6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3bc6a8: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x3bc6a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x3bc6ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3bc6acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bc6b0: 0x0  nop
    ctx->pc = 0x3bc6b0u;
    // NOP
    // 0x3bc6b4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x3bc6b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3bc6b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3bc6b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bc6bc: 0x0  nop
    ctx->pc = 0x3bc6bcu;
    // NOP
    // 0x3bc6c0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3bc6c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3bc6c4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3BC6C4u;
    {
        const bool branch_taken_0x3bc6c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3BC6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC6C4u;
        // 0x3bc6c8: 0x46031302  mul.s       $f12, $f2, $f3 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc6c4) {
            ctx->pc = 0x3BC6DCu;
            goto label_3bc6dc;
        }
    }
    ctx->pc = 0x3BC6CCu;
    // 0x3bc6cc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3bc6ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3bc6d0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3bc6d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3bc6d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3BC6D4u;
    {
        const bool branch_taken_0x3bc6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BC6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC6D4u;
        // 0x3bc6d8: 0x96022b42  lhu         $v0, 0x2B42($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11074)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc6d4) {
            ctx->pc = 0x3BC6F8u;
            goto label_3bc6f8;
        }
    }
    ctx->pc = 0x3BC6DCu;
label_3bc6dc:
    // 0x3bc6dc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3bc6dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3bc6e0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3bc6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3bc6e4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3bc6e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3bc6e8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3bc6e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3bc6ec: 0x0  nop
    ctx->pc = 0x3bc6ecu;
    // NOP
    // 0x3bc6f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3bc6f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3bc6f4: 0x96022b42  lhu         $v0, 0x2B42($s0)
    ctx->pc = 0x3bc6f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11074)));
label_3bc6f8:
    // 0x3bc6f8: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3bc6f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3bc6fc: 0x1020003a  beqz        $at, . + 4 + (0x3A << 2)
    ctx->pc = 0x3BC6FCu;
    {
        const bool branch_taken_0x3bc6fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bc6fc) {
            ctx->pc = 0x3BC7E8u;
            goto label_3bc7e8;
        }
    }
    ctx->pc = 0x3BC704u;
    // 0x3bc704: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3bc704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bc708: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x3bc708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x3bc70c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3bc70cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3bc710: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3bc710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3bc714: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x3bc714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3bc718: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3bc718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3bc71c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3bc71cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3bc720: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3bc720u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3bc724: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3bc724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bc728: 0x0  nop
    ctx->pc = 0x3bc728u;
    // NOP
    // 0x3bc72c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3bc72cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3bc730: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3bc730u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3bc734: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3BC734u;
    {
        const bool branch_taken_0x3bc734 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3bc734) {
            ctx->pc = 0x3BC74Cu;
            goto label_3bc74c;
        }
    }
    ctx->pc = 0x3BC73Cu;
    // 0x3bc73c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3bc73cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3bc740: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3bc740u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3bc744: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3BC744u;
    {
        const bool branch_taken_0x3bc744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BC748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC744u;
        // 0x3bc748: 0x96022b42  lhu         $v0, 0x2B42($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11074)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc744) {
            ctx->pc = 0x3BC768u;
            goto label_3bc768;
        }
    }
    ctx->pc = 0x3BC74Cu;
label_3bc74c:
    // 0x3bc74c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3bc74cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3bc750: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3bc750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3bc754: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3bc754u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3bc758: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3bc758u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3bc75c: 0x0  nop
    ctx->pc = 0x3bc75cu;
    // NOP
    // 0x3bc760: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3bc760u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3bc764: 0x96022b42  lhu         $v0, 0x2B42($s0)
    ctx->pc = 0x3bc764u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11074)));
label_3bc768:
    // 0x3bc768: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BC768u;
    {
        const bool branch_taken_0x3bc768 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3BC76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC768u;
        // 0x3bc76c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc768) {
            ctx->pc = 0x3BC780u;
            goto label_3bc780;
        }
    }
    ctx->pc = 0x3BC770u;
    // 0x3bc770: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3bc770u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bc774: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3BC774u;
    {
        const bool branch_taken_0x3bc774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BC778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC774u;
        // 0x3bc778: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc774) {
            ctx->pc = 0x3BC798u;
            goto label_3bc798;
        }
    }
    ctx->pc = 0x3BC77Cu;
    // 0x3bc77c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3bc77cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3bc780:
    // 0x3bc780: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3bc780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3bc784: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3bc784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3bc788: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3bc788u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bc78c: 0x0  nop
    ctx->pc = 0x3bc78cu;
    // NOP
    // 0x3bc790: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3bc790u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3bc794: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3bc794u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3bc798:
    // 0x3bc798: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BC798u;
    {
        const bool branch_taken_0x3bc798 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x3BC79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC798u;
        // 0x3bc79c: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc798) {
            ctx->pc = 0x3BC7B0u;
            goto label_3bc7b0;
        }
    }
    ctx->pc = 0x3BC7A0u;
    // 0x3bc7a0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3bc7a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bc7a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3BC7A4u;
    {
        const bool branch_taken_0x3bc7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BC7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC7A4u;
        // 0x3bc7a8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc7a4) {
            ctx->pc = 0x3BC7C8u;
            goto label_3bc7c8;
        }
    }
    ctx->pc = 0x3BC7ACu;
    // 0x3bc7ac: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x3bc7acu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_3bc7b0:
    // 0x3bc7b0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3bc7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3bc7b4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3bc7b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3bc7b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3bc7b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bc7bc: 0x0  nop
    ctx->pc = 0x3bc7bcu;
    // NOP
    // 0x3bc7c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3bc7c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3bc7c4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3bc7c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3bc7c8:
    // 0x3bc7c8: 0x0  nop
    ctx->pc = 0x3bc7c8u;
    // NOP
    // 0x3bc7cc: 0x0  nop
    ctx->pc = 0x3bc7ccu;
    // NOP
    // 0x3bc7d0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3bc7d0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3bc7d4: 0x0  nop
    ctx->pc = 0x3bc7d4u;
    // NOP
    // 0x3bc7d8: 0x0  nop
    ctx->pc = 0x3bc7d8u;
    // NOP
    // 0x3bc7dc: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x3BC7DCu;
    {
        const bool branch_taken_0x3bc7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BC7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC7DCu;
        // 0x3bc7e0: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc7dc) {
            ctx->pc = 0x3BC910u;
            goto label_3bc910;
        }
    }
    ctx->pc = 0x3BC7E4u;
    // 0x3bc7e4: 0x0  nop
    ctx->pc = 0x3bc7e4u;
    // NOP
label_3bc7e8:
    // 0x3bc7e8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x3bc7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x3bc7ec: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3bc7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bc7f0: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3bc7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3bc7f4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3bc7f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3bc7f8: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3bc7f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3bc7fc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3bc7fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3bc800: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3bc800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3bc804: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3bc804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bc808: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3bc808u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3bc80c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3bc80cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3bc810: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3bc810u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3bc814: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3BC814u;
    {
        const bool branch_taken_0x3bc814 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3bc814) {
            ctx->pc = 0x3BC82Cu;
            goto label_3bc82c;
        }
    }
    ctx->pc = 0x3BC81Cu;
    // 0x3bc81c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3bc81cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3bc820: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3bc820u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3bc824: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3BC824u;
    {
        const bool branch_taken_0x3bc824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BC828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC824u;
        // 0x3bc828: 0x96032b42  lhu         $v1, 0x2B42($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11074)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc824) {
            ctx->pc = 0x3BC848u;
            goto label_3bc848;
        }
    }
    ctx->pc = 0x3BC82Cu;
label_3bc82c:
    // 0x3bc82c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3bc82cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3bc830: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3bc830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3bc834: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3bc834u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3bc838: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3bc838u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3bc83c: 0x0  nop
    ctx->pc = 0x3bc83cu;
    // NOP
    // 0x3bc840: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3bc840u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3bc844: 0x96032b42  lhu         $v1, 0x2B42($s0)
    ctx->pc = 0x3bc844u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11074)));
label_3bc848:
    // 0x3bc848: 0x96022b44  lhu         $v0, 0x2B44($s0)
    ctx->pc = 0x3bc848u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11076)));
    // 0x3bc84c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3bc84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3bc850: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x3bc850u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3bc854: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x3BC854u;
    {
        const bool branch_taken_0x3bc854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bc854) {
            ctx->pc = 0x3BC910u;
            goto label_3bc910;
        }
    }
    ctx->pc = 0x3BC85Cu;
    // 0x3bc85c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3bc85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bc860: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x3bc860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x3bc864: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3bc864u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3bc868: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3bc868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3bc86c: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x3bc86cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3bc870: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3bc870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3bc874: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3bc874u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3bc878: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3bc878u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3bc87c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3bc87cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bc880: 0x0  nop
    ctx->pc = 0x3bc880u;
    // NOP
    // 0x3bc884: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3bc884u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3bc888: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3bc888u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3bc88c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3BC88Cu;
    {
        const bool branch_taken_0x3bc88c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3bc88c) {
            ctx->pc = 0x3BC8A4u;
            goto label_3bc8a4;
        }
    }
    ctx->pc = 0x3BC894u;
    // 0x3bc894: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3bc894u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3bc898: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3bc898u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3bc89c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3BC89Cu;
    {
        const bool branch_taken_0x3bc89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BC8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC89Cu;
        // 0x3bc8a0: 0x96032b44  lhu         $v1, 0x2B44($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11076)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc89c) {
            ctx->pc = 0x3BC8C0u;
            goto label_3bc8c0;
        }
    }
    ctx->pc = 0x3BC8A4u;
label_3bc8a4:
    // 0x3bc8a4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3bc8a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3bc8a8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3bc8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3bc8ac: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3bc8acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3bc8b0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3bc8b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3bc8b4: 0x0  nop
    ctx->pc = 0x3bc8b4u;
    // NOP
    // 0x3bc8b8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3bc8b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3bc8bc: 0x96032b44  lhu         $v1, 0x2B44($s0)
    ctx->pc = 0x3bc8bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11076)));
label_3bc8c0:
    // 0x3bc8c0: 0x96022b42  lhu         $v0, 0x2B42($s0)
    ctx->pc = 0x3bc8c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11074)));
    // 0x3bc8c4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x3bc8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3bc8c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3bc8c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bc8cc: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BC8CCu;
    {
        const bool branch_taken_0x3bc8cc = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x3BC8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC8CCu;
        // 0x3bc8d0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc8cc) {
            ctx->pc = 0x3BC8E0u;
            goto label_3bc8e0;
        }
    }
    ctx->pc = 0x3BC8D4u;
    // 0x3bc8d4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3bc8d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bc8d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3BC8D8u;
    {
        const bool branch_taken_0x3bc8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BC8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC8D8u;
        // 0x3bc8dc: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc8d8) {
            ctx->pc = 0x3BC8FCu;
            goto label_3bc8fc;
        }
    }
    ctx->pc = 0x3BC8E0u;
label_3bc8e0:
    // 0x3bc8e0: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x3bc8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x3bc8e4: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3bc8e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3bc8e8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3bc8e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3bc8ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3bc8ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bc8f0: 0x0  nop
    ctx->pc = 0x3bc8f0u;
    // NOP
    // 0x3bc8f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3bc8f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3bc8f8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3bc8f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3bc8fc:
    // 0x3bc8fc: 0x0  nop
    ctx->pc = 0x3bc8fcu;
    // NOP
    // 0x3bc900: 0x0  nop
    ctx->pc = 0x3bc900u;
    // NOP
    // 0x3bc904: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3bc904u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3bc908: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x3bc908u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x3bc90c: 0x0  nop
    ctx->pc = 0x3bc90cu;
    // NOP
label_3bc910:
    // 0x3bc910: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3bc910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3bc914: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3BC914u;
    SET_GPR_U32(ctx, 31, 0x3BC91Cu);
    ctx->pc = 0x3BC918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BC914u;
    // 0x3bc918: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3BC914u, 0x3BC91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BC91Cu;
label_3bc91c:
    // 0x3bc91c: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x3bc91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3bc920: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x3bc920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3bc924: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x3bc924u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3bc928: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x3bc928u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3bc92c: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3bc92cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3bc930: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x3bc930u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x3bc934: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3bc934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3bc938: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3bc938u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bc93c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3BC93Cu;
    {
        const bool branch_taken_0x3bc93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BC940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC93Cu;
        // 0x3bc940: 0xe600002c  swc1        $f0, 0x2C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc93c) {
            ctx->pc = 0x3BC9A0u;
            goto label_3bc9a0;
        }
    }
    ctx->pc = 0x3BC944u;
    // 0x3bc944: 0x0  nop
    ctx->pc = 0x3bc944u;
    // NOP
label_3bc948:
    // 0x3bc948: 0x92020821  lbu         $v0, 0x821($s0)
    ctx->pc = 0x3bc948u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3bc94c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3bc94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3bc950: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x3bc950u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x3bc954: 0x0  nop
    ctx->pc = 0x3bc954u;
    // NOP
label_3bc958:
    // 0x3bc958: 0xa6002b44  sh          $zero, 0x2B44($s0)
    ctx->pc = 0x3bc958u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11076), (uint16_t)GPR_U32(ctx, 0));
    // 0x3bc95c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bc95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bc960: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3bc960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3bc964: 0xc0a6898  jal         func_29A260
    ctx->pc = 0x3BC964u;
    SET_GPR_U32(ctx, 31, 0x3BC96Cu);
    ctx->pc = 0x3BC968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BC964u;
    // 0x3bc968: 0xa6002b42  sh          $zero, 0x2B42($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 11074), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A260u, 0x3BC964u, 0x3BC96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BC96Cu;
label_3bc96c:
    // 0x3bc96c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3bc96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bc970: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bc970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bc974: 0xc0ee264  jal         func_3B8990
    ctx->pc = 0x3BC974u;
    SET_GPR_U32(ctx, 31, 0x3BC97Cu);
    ctx->pc = 0x3BC978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BC974u;
    // 0x3bc978: 0xa2020780  sb          $v0, 0x780($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8990u, 0x3BC974u, 0x3BC97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BC97Cu;
label_3bc97c:
    // 0x3bc97c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BC97Cu;
    {
        const bool branch_taken_0x3bc97c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bc97c) {
            ctx->pc = 0x3BC990u;
            goto label_3bc990;
        }
    }
    ctx->pc = 0x3BC984u;
    // 0x3bc984: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3bc984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bc988: 0xa2032b56  sb          $v1, 0x2B56($s0)
    ctx->pc = 0x3bc988u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11094), (uint8_t)GPR_U32(ctx, 3));
    // 0x3bc98c: 0x0  nop
    ctx->pc = 0x3bc98cu;
    // NOP
label_3bc990:
    // 0x3bc990: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x3bc990u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3bc994: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3bc994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3bc998: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3bc998u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3bc99c: 0x0  nop
    ctx->pc = 0x3bc99cu;
    // NOP
label_3bc9a0:
    // 0x3bc9a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3bc9a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bc9a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3bc9a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bc9a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3BC9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BC9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC9A8u;
        // 0x3bc9ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BC9A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BC9B0u;
}
