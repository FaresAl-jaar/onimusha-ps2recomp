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

// Function: sub_003F0890
// Address: 0x3f0890 - 0x3f0a10
void sub_003F0890_0x3f0890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F0890_0x3f0890");
#endif

    switch (ctx->pc) {
        case 0x3f0890u: goto label_3f0890;
        case 0x3f0894u: goto label_3f0894;
        case 0x3f0898u: goto label_3f0898;
        case 0x3f089cu: goto label_3f089c;
        case 0x3f08a0u: goto label_3f08a0;
        case 0x3f08a4u: goto label_3f08a4;
        case 0x3f08a8u: goto label_3f08a8;
        case 0x3f08acu: goto label_3f08ac;
        case 0x3f08b0u: goto label_3f08b0;
        case 0x3f08b4u: goto label_3f08b4;
        case 0x3f08b8u: goto label_3f08b8;
        case 0x3f08bcu: goto label_3f08bc;
        case 0x3f08c0u: goto label_3f08c0;
        case 0x3f08c4u: goto label_3f08c4;
        case 0x3f08c8u: goto label_3f08c8;
        case 0x3f08ccu: goto label_3f08cc;
        case 0x3f08d0u: goto label_3f08d0;
        case 0x3f08d4u: goto label_3f08d4;
        case 0x3f08d8u: goto label_3f08d8;
        case 0x3f08dcu: goto label_3f08dc;
        case 0x3f08e0u: goto label_3f08e0;
        case 0x3f08e4u: goto label_3f08e4;
        case 0x3f08e8u: goto label_3f08e8;
        case 0x3f08ecu: goto label_3f08ec;
        case 0x3f08f0u: goto label_3f08f0;
        case 0x3f08f4u: goto label_3f08f4;
        case 0x3f08f8u: goto label_3f08f8;
        case 0x3f08fcu: goto label_3f08fc;
        case 0x3f0900u: goto label_3f0900;
        case 0x3f0904u: goto label_3f0904;
        case 0x3f0908u: goto label_3f0908;
        case 0x3f090cu: goto label_3f090c;
        case 0x3f0910u: goto label_3f0910;
        case 0x3f0914u: goto label_3f0914;
        case 0x3f0918u: goto label_3f0918;
        case 0x3f091cu: goto label_3f091c;
        case 0x3f0920u: goto label_3f0920;
        case 0x3f0924u: goto label_3f0924;
        case 0x3f0928u: goto label_3f0928;
        case 0x3f092cu: goto label_3f092c;
        case 0x3f0930u: goto label_3f0930;
        case 0x3f0934u: goto label_3f0934;
        case 0x3f0938u: goto label_3f0938;
        case 0x3f093cu: goto label_3f093c;
        case 0x3f0940u: goto label_3f0940;
        case 0x3f0944u: goto label_3f0944;
        case 0x3f0948u: goto label_3f0948;
        case 0x3f094cu: goto label_3f094c;
        case 0x3f0950u: goto label_3f0950;
        case 0x3f0954u: goto label_3f0954;
        case 0x3f0958u: goto label_3f0958;
        case 0x3f095cu: goto label_3f095c;
        case 0x3f0960u: goto label_3f0960;
        case 0x3f0964u: goto label_3f0964;
        case 0x3f0968u: goto label_3f0968;
        case 0x3f096cu: goto label_3f096c;
        case 0x3f0970u: goto label_3f0970;
        case 0x3f0974u: goto label_3f0974;
        case 0x3f0978u: goto label_3f0978;
        case 0x3f097cu: goto label_3f097c;
        case 0x3f0980u: goto label_3f0980;
        case 0x3f0984u: goto label_3f0984;
        case 0x3f0988u: goto label_3f0988;
        case 0x3f098cu: goto label_3f098c;
        case 0x3f0990u: goto label_3f0990;
        case 0x3f0994u: goto label_3f0994;
        case 0x3f0998u: goto label_3f0998;
        case 0x3f099cu: goto label_3f099c;
        case 0x3f09a0u: goto label_3f09a0;
        case 0x3f09a4u: goto label_3f09a4;
        case 0x3f09a8u: goto label_3f09a8;
        case 0x3f09acu: goto label_3f09ac;
        case 0x3f09b0u: goto label_3f09b0;
        case 0x3f09b4u: goto label_3f09b4;
        case 0x3f09b8u: goto label_3f09b8;
        case 0x3f09bcu: goto label_3f09bc;
        case 0x3f09c0u: goto label_3f09c0;
        case 0x3f09c4u: goto label_3f09c4;
        case 0x3f09c8u: goto label_3f09c8;
        case 0x3f09ccu: goto label_3f09cc;
        case 0x3f09d0u: goto label_3f09d0;
        case 0x3f09d4u: goto label_3f09d4;
        case 0x3f09d8u: goto label_3f09d8;
        case 0x3f09dcu: goto label_3f09dc;
        case 0x3f09e0u: goto label_3f09e0;
        case 0x3f09e4u: goto label_3f09e4;
        case 0x3f09e8u: goto label_3f09e8;
        case 0x3f09ecu: goto label_3f09ec;
        case 0x3f09f0u: goto label_3f09f0;
        case 0x3f09f4u: goto label_3f09f4;
        case 0x3f09f8u: goto label_3f09f8;
        case 0x3f09fcu: goto label_3f09fc;
        case 0x3f0a00u: goto label_3f0a00;
        case 0x3f0a04u: goto label_3f0a04;
        case 0x3f0a08u: goto label_3f0a08;
        case 0x3f0a0cu: goto label_3f0a0c;
        default: break;
    }

    ctx->pc = 0x3f0890u;

label_3f0890:
    // 0x3f0890: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3f0890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3f0894:
    // 0x3f0894: 0x92c3c  dsll32      $a1, $t1, 16
    ctx->pc = 0x3f0894u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) << (32 + 16));
label_3f0898:
    // 0x3f0898: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3f0898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3f089c:
    // 0x3f089c: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x3f089cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3f08a0:
    // 0x3f08a0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3f08a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3f08a4:
    // 0x3f08a4: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x3f08a4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_3f08a8:
    // 0x3f08a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3f08a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3f08ac:
    // 0x3f08ac: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3f08acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3f08b0:
    // 0x3f08b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f08b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3f08b4:
    // 0x3f08b4: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x3f08b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3f08b8:
    // 0x3f08b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f08b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f08bc:
    // 0x3f08bc: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x3f08bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3f08c0:
    // 0x3f08c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f08c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f08c4:
    // 0x3f08c4: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x3f08c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_3f08c8:
    // 0x3f08c8: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x3f08c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3f08cc:
    // 0x3f08cc: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x3f08ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f08d0:
    // 0x3f08d0: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x3f08d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f08d4:
    // 0x3f08d4: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x3f08d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f08d8:
    // 0x3f08d8: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x3f08d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_3f08dc:
    // 0x3f08dc: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x3f08dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_3f08e0:
    // 0x3f08e0: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x3f08e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_3f08e4:
    // 0x3f08e4: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
label_3f08e8:
    if (ctx->pc == 0x3F08E8u) {
        ctx->pc = 0x3F08E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F08E4u;
        // 0x3f08e8: 0xe460000c  swc1        $f0, 0xC($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F08ECu;
        goto label_3f08ec;
    }
    ctx->pc = 0x3F08E4u;
    {
        const bool branch_taken_0x3f08e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F08E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F08E4u;
        // 0x3f08e8: 0xe460000c  swc1        $f0, 0xC($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f08e4) {
            ctx->pc = 0x3F0920u;
            goto label_3f0920;
        }
    }
    ctx->pc = 0x3F08ECu;
label_3f08ec:
    // 0x3f08ec: 0x24a30100  addiu       $v1, $a1, 0x100
    ctx->pc = 0x3f08ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
label_3f08f0:
    // 0x3f08f0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3f08f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_3f08f4:
    // 0x3f08f4: 0x3065001f  andi        $a1, $v1, 0x1F
    ctx->pc = 0x3f08f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_3f08f8:
    // 0x3f08f8: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x3f08f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
label_3f08fc:
    // 0x3f08fc: 0xa42806  srlv        $a1, $a0, $a1
    ctx->pc = 0x3f08fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
label_3f0900:
    // 0x3f0900: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x3f0900u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3f0904:
    // 0x3f0904: 0x3c030081  lui         $v1, 0x81
    ctx->pc = 0x3f0904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)129 << 16));
label_3f0908:
    // 0x3f0908: 0x24630fe0  addiu       $v1, $v1, 0xFE0
    ctx->pc = 0x3f0908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4064));
label_3f090c:
    // 0x3f090c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3f090cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3f0910:
    // 0x3f0910: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3f0910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3f0914:
    // 0x3f0914: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x3f0914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_3f0918:
    // 0x3f0918: 0x14600035  bnez        $v1, . + 4 + (0x35 << 2)
label_3f091c:
    if (ctx->pc == 0x3F091Cu) {
        ctx->pc = 0x3F0920u;
        goto label_3f0920;
    }
    ctx->pc = 0x3F0918u;
    {
        const bool branch_taken_0x3f0918 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f0918) {
            ctx->pc = 0x3F09F0u;
            goto label_3f09f0;
        }
    }
    ctx->pc = 0x3F0920u;
label_3f0920:
    // 0x3f0920: 0x30f0ffff  andi        $s0, $a3, 0xFFFF
    ctx->pc = 0x3f0920u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_3f0924:
    // 0x3f0924: 0xc0a4408  jal         func_291020
label_3f0928:
    if (ctx->pc == 0x3F0928u) {
        ctx->pc = 0x3F0928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0924u;
        // 0x3f0928: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F092Cu;
        goto label_3f092c;
    }
    ctx->pc = 0x3F0924u;
    SET_GPR_U32(ctx, 31, 0x3F092Cu);
    ctx->pc = 0x3F0928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0924u;
    // 0x3f0928: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291020u, 0x3F0924u, 0x3F092Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F092Cu;
label_3f092c:
    // 0x3f092c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f092cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f0930:
    // 0x3f0930: 0xc0a43fc  jal         func_290FF0
label_3f0934:
    if (ctx->pc == 0x3F0934u) {
        ctx->pc = 0x3F0934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0930u;
        // 0x3f0934: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0938u;
        goto label_3f0938;
    }
    ctx->pc = 0x3F0930u;
    SET_GPR_U32(ctx, 31, 0x3F0938u);
    ctx->pc = 0x3F0934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0930u;
    // 0x3f0934: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x290FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290FF0u, 0x3F0930u, 0x3F0938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0938u;
label_3f0938:
    // 0x3f0938: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3f0938u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_3f093c:
    // 0x3f093c: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x3f093cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_3f0940:
    // 0x3f0940: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x3f0940u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3f0944:
    // 0x3f0944: 0x248486e0  addiu       $a0, $a0, -0x7920
    ctx->pc = 0x3f0944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936288));
label_3f0948:
    // 0x3f0948: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3f0948u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f094c:
    // 0x3f094c: 0x24080015  addiu       $t0, $zero, 0x15
    ctx->pc = 0x3f094cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3f0950:
    // 0x3f0950: 0x240900fe  addiu       $t1, $zero, 0xFE
    ctx->pc = 0x3f0950u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
label_3f0954:
    // 0x3f0954: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3f0954u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f0958:
    // 0x3f0958: 0xc0510e0  jal         func_144380
label_3f095c:
    if (ctx->pc == 0x3F095Cu) {
        ctx->pc = 0x3F095Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0958u;
        // 0x3f095c: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0960u;
        goto label_3f0960;
    }
    ctx->pc = 0x3F0958u;
    SET_GPR_U32(ctx, 31, 0x3F0960u);
    ctx->pc = 0x3F095Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0958u;
    // 0x3f095c: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144380u, 0x3F0958u, 0x3F0960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0960u;
label_3f0960:
    // 0x3f0960: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x3f0960u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f0964:
    // 0x3f0964: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3f0964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f0968:
    // 0x3f0968: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x3f0968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
label_3f096c:
    // 0x3f096c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f096cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f0970:
    // 0x3f0970: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3f0970u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3f0974:
    // 0x3f0974: 0x2405020c  addiu       $a1, $zero, 0x20C
    ctx->pc = 0x3f0974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 524));
label_3f0978:
    // 0x3f0978: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x3f0978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3f097c:
    // 0x3f097c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3f097cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3f0980:
    // 0x3f0980: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x3f0980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_3f0984:
    // 0x3f0984: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3f0984u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3f0988:
    // 0x3f0988: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f0988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f098c:
    // 0x3f098c: 0x0  nop
    ctx->pc = 0x3f098cu;
    // NOP
label_3f0990:
    // 0x3f0990: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3f0990u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_3f0994:
    // 0x3f0994: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f0994u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3f0998:
    // 0x3f0998: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3f0998u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3f099c:
    // 0x3f099c: 0x0  nop
    ctx->pc = 0x3f099cu;
    // NOP
label_3f09a0:
    // 0x3f09a0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3f09a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_3f09a4:
    // 0x3f09a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3f09a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3f09a8:
    // 0x3f09a8: 0xc0d0484  jal         func_341210
label_3f09ac:
    if (ctx->pc == 0x3F09ACu) {
        ctx->pc = 0x3F09ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F09A8u;
        // 0x3f09ac: 0x30470fff  andi        $a3, $v0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F09B0u;
        goto label_3f09b0;
    }
    ctx->pc = 0x3F09A8u;
    SET_GPR_U32(ctx, 31, 0x3F09B0u);
    ctx->pc = 0x3F09ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F09A8u;
    // 0x3f09ac: 0x30470fff  andi        $a3, $v0, 0xFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    ctx->in_delay_slot = false;
    ctx->pc = 0x341210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341210u, 0x3F09A8u, 0x3F09B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F09B0u;
label_3f09b0:
    // 0x3f09b0: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x3f09b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_3f09b4:
    // 0x3f09b4: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x3f09b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_3f09b8:
    // 0x3f09b8: 0x320f809  jalr        $t9
label_3f09bc:
    if (ctx->pc == 0x3F09BCu) {
        ctx->pc = 0x3F09BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F09B8u;
        // 0x3f09bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F09C0u;
        goto label_3f09c0;
    }
    ctx->pc = 0x3F09B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F09C0u);
        ctx->pc = 0x3F09BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F09B8u;
        // 0x3f09bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F09B8u, 0x3F09C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F09C0u;
label_3f09c0:
    // 0x3f09c0: 0x122c3c  dsll32      $a1, $s2, 16
    ctx->pc = 0x3f09c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) << (32 + 16));
label_3f09c4:
    // 0x3f09c4: 0x326600ff  andi        $a2, $s3, 0xFF
    ctx->pc = 0x3f09c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_3f09c8:
    // 0x3f09c8: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x3f09c8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_3f09cc:
    // 0x3f09cc: 0xc0d0490  jal         func_341240
label_3f09d0:
    if (ctx->pc == 0x3F09D0u) {
        ctx->pc = 0x3F09D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F09CCu;
        // 0x3f09d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F09D4u;
        goto label_3f09d4;
    }
    ctx->pc = 0x3F09CCu;
    SET_GPR_U32(ctx, 31, 0x3F09D4u);
    ctx->pc = 0x3F09D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F09CCu;
    // 0x3f09d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341240u, 0x3F09CCu, 0x3F09D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F09D4u;
label_3f09d4:
    // 0x3f09d4: 0x11343c  dsll32      $a2, $s1, 16
    ctx->pc = 0x3f09d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 16));
label_3f09d8:
    // 0x3f09d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f09d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f09dc:
    // 0x3f09dc: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x3f09dcu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_3f09e0:
    // 0x3f09e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f09e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f09e4:
    // 0x3f09e4: 0xc0e2a20  jal         func_38A880
label_3f09e8:
    if (ctx->pc == 0x3F09E8u) {
        ctx->pc = 0x3F09E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F09E4u;
        // 0x3f09e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F09ECu;
        goto label_3f09ec;
    }
    ctx->pc = 0x3F09E4u;
    SET_GPR_U32(ctx, 31, 0x3F09ECu);
    ctx->pc = 0x3F09E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F09E4u;
    // 0x3f09e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A880u, 0x3F09E4u, 0x3F09ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F09ECu;
label_3f09ec:
    // 0x3f09ec: 0x0  nop
    ctx->pc = 0x3f09ecu;
    // NOP
label_3f09f0:
    // 0x3f09f0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3f09f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3f09f4:
    // 0x3f09f4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3f09f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3f09f8:
    // 0x3f09f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3f09f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f09fc:
    // 0x3f09fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f09fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f0a00:
    // 0x3f0a00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f0a00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f0a04:
    // 0x3f0a04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f0a04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f0a08:
    // 0x3f0a08: 0x3e00008  jr          $ra
label_3f0a0c:
    if (ctx->pc == 0x3F0A0Cu) {
        ctx->pc = 0x3F0A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0A08u;
        // 0x3f0a0c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0A10u;
        goto label_fallthrough_0x3f0a08;
    }
    ctx->pc = 0x3F0A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F0A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0A08u;
        // 0x3f0a0c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F0A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f0a08:
    ctx->pc = 0x3F0A10u;
}
